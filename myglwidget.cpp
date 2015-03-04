#include "myglwidget.h"
#include <GL/gl.h>


void MyGLWidget::initializeGL(){

    glEnable(GL_DEPTH_TEST);
}


void MyGLWidget::resizeGL (int width, int height){
    glViewport( 0, 0, (GLint)width, (GLint)height );

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum( -1.5, 1.5, -1.5, 1.5, 5.0, 30.0);


    glMatrixMode( GL_MODELVIEW );


}


void MyGLWidget::paintGL(){

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glTranslatef(0.0f,0.0f,-20.0f);
        glRotatef(nbframe,1.0,1.0,0.0);


    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-20.0f);
    glRotatef(nbframe,1.0,1.0,0.0);

    glTranslatef(0.0,0.5,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-20.0f);
    glRotatef(nbframe,1.0,1.0,0.0);

    glTranslatef(0.0,1.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-20.0f);
    glRotatef(nbframe,1.0,1.0,0.0);

    glTranslatef(0.0,1.5,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-20.0f);
    glRotatef(nbframe,1.0,1.0,0.0);

    glTranslatef(0.0,2.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-20.0f);
    glRotatef(nbframe,1.0,1.0,0.0);

    glTranslatef(0.0,2.5,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-20.0f);
    glRotatef(nbframe,1.0,1.0,0.0);

    glTranslatef(0.0,3.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-20.0f);
    glRotatef(nbframe,1.0,1.0,0.0);

    glTranslatef(0.0,3.5,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();


    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-20.0f);
    glRotatef(nbframe,1.0,1.0,0.0);

    glTranslatef(0.0,0.0,0.5);

    glBegin(GL_QUADS);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.2,0.2,0.2);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,0.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,0.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(0.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();

    glTranslatef(0.5,0.0,0.0);

    glBegin(GL_QUADS);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(0.25,-0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,-0.25,0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(0.25,0.25,0.25);
        glVertex3f(0.25,-0.25,0.25);
        glVertex3f(0.25,-0.25,-0.25);
        glVertex3f(0.25,0.25,-0.25);

        glColor3f(1.0,1.0,1.0);

        glVertex3f(-0.25,0.25,0.25);
        glVertex3f(-0.25,-0.25,0.25);
        glVertex3f(-0.25,-0.25,-0.25);
        glVertex3f(-0.25,0.25,-0.25);

    glEnd();







  ++nbframe;

}
