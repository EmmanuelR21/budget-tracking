#include "financegraph.h"
#include <QtCharts/QValueAxis> // Add this line for QValueAxis
using namespace QtCharts;      // Ensure the namespace is used

financeGraph::financeGraph(QObject *parent)
    : QObject(parent)
{
    series = new QLineSeries();
    chart = new QChart();
    chartView = new QChartView(chart);

    chart->addSeries(series);
    chart->createDefaultAxes();
    chartView->setRenderHint(QPainter::Antialiasing);
    // Legend is turned off by default
    chart->legend()->hide();
}

QChartView *financeGraph::getChartView() const
{
    return chartView;
}

void financeGraph::enableLegend(Qt::Alignment alignment)
{
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(alignment);
}

void financeGraph::setTitle(std::string title)
{
    QString qStr = QString::fromStdString(title);
    chart->setTitle(qStr);
}

void financeGraph::appendData(std::vector<float> transactions)
{
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
}
