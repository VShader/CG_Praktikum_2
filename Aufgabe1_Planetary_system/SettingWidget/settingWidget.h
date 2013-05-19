#ifndef VERTEXMANIPULATIONWIDGET_H
#define VERTEXMANIPULATIONWIDGET_H

#include <QWidget>
#include <QSignalMapper>
#include <QToolButton>
#include <QDoubleSpinBox>
#include <vector>


namespace Ui {
    class VertexManipulationWidget;
}


class VertexManipulationWidget : public QWidget
{
    Q_OBJECT

private:
    Ui::VertexManipulationWidget *ui;
    QVector<QDoubleSpinBox *> ptrQObject;
    QDoubleSpinBox *ptrArray[24];
    void init();
    void setButtonColor(QToolButton * const button, const QColor &color);

public:
    explicit VertexManipulationWidget(QWidget *parent = NULL);
    ~VertexManipulationWidget();

public slots:
    void setVertexColor();
    void setVertexCoordiantes();

signals:
    void vertexCoordinatesChanged(const double x, const double y, const double z, const int widgetNumber);
    void vertexColorChanged(const QColor &color, const int widgetNumber);

};

#endif  //VERTEXMANIPULATIONWIDGET_H
