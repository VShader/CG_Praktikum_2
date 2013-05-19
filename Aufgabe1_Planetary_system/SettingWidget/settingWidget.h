#ifndef SETTINGWIDGET_H
#define SETTINGWIDGET_H

#include <QWidget>
#include <QSignalMapper>
#include <QToolButton>
#include <QDoubleSpinBox>
#include <vector>


namespace Ui {
    class SettingWidget;
}


class SettingWidget : public QWidget
{
    Q_OBJECT

private:
    Ui::SettingWidget *ui;

public:
    explicit SettingWidget(QWidget *parent = NULL);
    ~SettingWidget();


};

#endif  //VERTEXMANIPULATIONWIDGET_H
