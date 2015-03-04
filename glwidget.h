#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QObject>

class GLWidget : public QObject
{
    Q_OBJECT
public:
    explicit GLWidget(QObject *parent = 0);
    ~GLWidget();

protected:
    // Set up the rendering context, define display lists etc.:
   void initializeGL();
   // draw the scene:
   void paintGL();
   // setup viewport, projection etc.:
   void resizeGL (int width, int height);
};

#endif // GLWIDGET_H
