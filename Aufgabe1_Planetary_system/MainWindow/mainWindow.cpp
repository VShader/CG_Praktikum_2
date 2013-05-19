#include "mainWindow.h"
#include "ui_mainWindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->dockWidgetContents, SIGNAL(vertexCoordinatesChanged(double, double, double, int)),
            ui->widget, SLOT(ChangeVertexCoordinates(double, double, double, int)));
    connect(ui->dockWidgetContents, SIGNAL(vertexColorChanged(QColor, int)),
            ui->widget, SLOT(ChangeVertexColor(QColor,int)));

}

MainWindow::~MainWindow(){
    delete ui;
}
