#include "settingWidget.h"
#include "ui_settingWidget.h"
#include <QDebug>


SettingWidget::SettingWidget(QWidget *parent) : QWidget(parent),
    ui(new Ui::SettingWidget)
{
    ui->setupUi(this);

}

SettingWidget::~SettingWidget()
{
    delete ui;
}

