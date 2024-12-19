#include "graphviewer.h"
#include "financegraph.h"
#include "ui_graphviewer.h"

GraphViewer::GraphViewer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GraphViewer)
{
    ui->setupUi(this);
}

GraphViewer::~GraphViewer()
{
    delete ui;
}

void GraphViewer::sendAccounts(Account f, Account t, Account o)
{
    financeGraph *foodGraph = new financeGraph(this);
    financeGraph *transportationGraph = new financeGraph(this);
    financeGraph *otherGraph = new financeGraph(this);

    foodGraph->setTitle("Food Account");
    transportationGraph->setTitle("Transportation Account");
    otherGraph->setTitle("Other Account");

    foodGraph->appendData(f.GetTransactions());
    transportationGraph->appendData(t.GetTransactions());
    otherGraph->appendData(o.GetTransactions());

    ui->foodGraphLayout->addWidget(foodGraph->getChartView());
    ui->transportationGraphLayout->addWidget(transportationGraph->getChartView());
    ui->otherGraphLayout->addWidget(otherGraph->getChartView());
}
