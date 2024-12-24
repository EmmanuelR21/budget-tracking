#include "financegraph.h"
#include <QDebug>              // For logging in Qt
#include <QtCharts/QValueAxis> // Add this line for QValueAxis
#include <algorithm>           // For std::max_element
using namespace QtCharts;      // Ensure the namespace is used

financeGraph::financeGraph(QObject *parent)
    : QObject(parent)
{
    try {
        series = new QLineSeries();
        chart = new QChart();
        chartView = new QChartView(chart);

        chart->addSeries(series);
        chart->createDefaultAxes();
        chartView->setRenderHint(QPainter::Antialiasing);
        chart->legend()->hide(); // Legend is turned off by default
    } catch (...) {
        qCritical() << "An unexpected error occurred during financeGraph initialization.";
        throw; // Re-throw the exception to indicate a critical failure
    }
}

QChartView *financeGraph::getChartView() const
{
    return chartView;
}

void financeGraph::enableLegend(Qt::Alignment alignment)
{
    if (!chart) {
        qWarning() << "Chart object is not initialized. Cannot enable legend.";
        return;
    }

    try {
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(alignment);
    } catch (...) {
        qWarning() << "An error occurred while enabling the legend.";
    }
}

void financeGraph::setTitle(std::string title)
{
    if (!chart) {
        qWarning() << "Chart object is not initialized. Cannot set title.";
        return;
    }

    try {
        QString qStr = QString::fromStdString(title);
        chart->setTitle(qStr);
    } catch (...) {
        qWarning() << "An error occurred while setting the chart title.";
    }
}

void financeGraph::appendData(std::vector<float> transactions)
{
    if (!chart || !series) {
        qWarning() << "Chart or series object is not initialized. Cannot append data.";
        return;
    }

    try {
        if (transactions.empty()) {
            // Handle the empty graph case
            chart->axes(Qt::Horizontal).first()->setRange(0, 10); // Default X-axis range
            chart->axes(Qt::Vertical).first()->setRange(0, 10);   // Default Y-axis range

            QValueAxis *xAxis = qobject_cast<QValueAxis *>(chart->axes(Qt::Horizontal).first());
            if (xAxis) {
                xAxis->setTickCount(11); // Default tick count
            }
            return;
        }

        for (int i = 0; i < transactions.size(); ++i) {
            series->append(i + 1, transactions[i]);
        }

        chart->axes(Qt::Horizontal).first()->setRange(1, static_cast<double>(transactions.size()));

        float maxTransaction = *std::max_element(transactions.begin(), transactions.end());
        chart->axes(Qt::Vertical).first()->setRange(0, maxTransaction * 1.1);

        QValueAxis *xAxis = qobject_cast<QValueAxis *>(chart->axes(Qt::Horizontal).first());
        if (xAxis) {
            xAxis->setTickCount(static_cast<int>(transactions.size()));
        }
    } catch (...) {
        qWarning() << "An error occurred while appending data to the chart.";
    }
}
