#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

void MainWindow::on_action_S_triggered()
{

    QString content = ui->textEdit->toPlainText();


    QString filePath = QCoreApplication::applicationDirPath() + "/test.txt";
    QFile file(filePath);

    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out << content;
        file.close();
        QMessageBox::information(this, "成功", "已儲存到: " + filePath);
    }
    else
    {
        QMessageBox::warning(this, "錯誤", "無法開啟檔案進行儲存：" + file.errorString());
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
