#ifndef Cube_H
#define Cube_H

#include <QGLWidget>
#include <QToolButton>


class VertexPoints : public QObject{
    Q_OBJECT

public:
    VertexPoints(GLfloat x, GLfloat y, GLfloat z, const QColor &color) : vertex({x, y, z}),
       color(color) {}
    QColor color;
    GLfloat vertex[3];

public slots:

};


class Cube : public QGLWidget
{
    Q_OBJECT

public:
    Cube(QWidget *parent = 0);
    ~Cube();

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
//    void mouseDoubleClickEvent(QMouseEvent *event);

private:
    VertexPoints *Point[8];
    void draw();
    int faceAtPosition(const QPoint &pos);

    GLfloat rotationX;
    GLfloat rotationY;
    GLfloat rotationZ;
    QColor faceColors[4];
    QPoint lastPos;

public slots:
    void ChangeVertexCoordinates(const double x, const double y, const double z, const int widgetNumber);
    void ChangeVertexColor(const QColor &color, const int widgetNumber);
};

#endif
