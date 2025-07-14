#ifndef PPR_H
#define PPR_H

#include "ui_ppr.h"
#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void addSub(QTableWidget* table, const QString& title, const QStringList& orders, const QStringList& laws);

    QStringList order;
    QStringList law;

private:
    Ui::Widget *ui;


};
#endif // PPR_H
