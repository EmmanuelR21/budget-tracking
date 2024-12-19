#ifndef GRAPHVIEWER_H
#define GRAPHVIEWER_H

#include <QDialog>
#include "classes/account.h"

namespace Ui {
class GraphViewer;
}

class GraphViewer : public QDialog
{
    Q_OBJECT

public:
    explicit GraphViewer(QWidget *parent = nullptr);
    ~GraphViewer();
    void sendAccounts(Account, Account, Account);

private:
    Ui::GraphViewer *ui;
};

#endif // GRAPHVIEWER_H
