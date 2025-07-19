#ifndef PPR_H
#define PPR_H

#include "ui_ppr.h"
#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QFileDialog>

#include <QXmlStreamReader>
// #include <QTextStream>

#include <zlib.h>
#include <ioapi.h>
#include <JlCompress.h>
#include <minizip_crypt.h>
#include <quaadler32.h>
#include <quachecksum32.h>
#include <quacrc32.h>
#include <quagzipfile.h>
#include <quaziodevice.h>
#include <quazip.h>
#include <quazip_global.h>
#include <quazip_qt_compat.h>
#include <quazipdir.h>
#include <quazipfile.h>
#include <quazipfileinfo.h>
#include <quazipnewinfo.h>
#include <unzip.h>
#include <zip.h>


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

    void addSub(QTableWidget* table, const QString& title, const QStringList& orders, const QStringList& laws); // заполнение таблицы
    void findFile(); // открытие файла
    void processFile(QuaZipFile* wordFile);

    QStringList order;
    QStringList law;

private:
    Ui::Widget *ui;
    QFile* wordFile; // переменная для файла


};
#endif // PPR_H
