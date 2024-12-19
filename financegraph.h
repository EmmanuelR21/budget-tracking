#ifndef FINANCEGRAPH_H
#define FINANCEGRAPH_H

#include <QObject>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
using namespace QtCharts;

class financeGraph : public QObject
{
    Q_OBJECT

private:
    QtCharts::QLineSeries *series;
    QChart *chart;
    QtCharts::QChartView *chartView;

public:
    explicit financeGraph(QObject *parent = nullptr);
    QtCharts::QChartView *getChartView() const;

    void enableLegend(Qt::Alignment);
    void setTitle(std::string);
    void appendData(std::vector<float>);
};

#endif // FINANCEGRAPH_H
