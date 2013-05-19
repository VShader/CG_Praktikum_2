#ifndef PLANETARY_SYSTEM_H
#define PLANETARY_SYSTEM_H

#include <QGLWidget>
#include <QToolButton>


class Planet
{
public:
    QColor color;
    GLfloat vertex[3];

    Planet(GLfloat x, GLfloat y, GLfloat z, const QColor &color) : vertex({x, y, z}),
       color(color) {}
    void draw();



};


class PlanetarySystem : public QGLWidget
{
    Q_OBJECT

public:
    PlanetarySystem(QWidget *parent = 0);
    ~PlanetarySystem();

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
//    void mousePressEvent(QMouseEvent *event);
//    void mouseMoveEvent(QMouseEvent *event);
//    void mouseDoubleClickEvent(QMouseEvent *event);

private:
    void draw();
    int faceAtPosition(const QPoint &pos);

    GLfloat rotationX;
    GLfloat rotationY;
    GLfloat rotationZ;
    QColor faceColors[4];
    QPoint lastPos;
    Planet *sun;

};

#endif //PLANETARY_SYSTEM_H
