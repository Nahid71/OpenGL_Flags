#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.1415926535898

void display(void)
{ /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(0.5);
// Black rect
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(-10.0,-10.0);
glVertex2f(-10.0,-3.66);
glVertex2f(10.0,-3.66);
glVertex2f(10.0,-10.0);
glEnd();

// Red rect
glColor3f(1,0,0);
glBegin(GL_QUADS);
glVertex2f(-10.0,10.00);
glVertex2f(-10.0,3.66);
glVertex2f(10.0,3.66);
glVertex2f(10.0,10.0);
glEnd();

// Left Star

 glColor3f(0,.6,0);
    glBegin(GL_QUADS);

    glVertex2f(-2.00, 0.5);
    glVertex2f(-2.6, 0.5);
   glVertex2f(-2.6, -0.5);
   glVertex2f(-2.0, -0.5);
    glEnd();

//up one

    glBegin(GL_TRIANGLES);
    glVertex2f(-1.9, 0.5);
    glVertex2f(-2.5, 0.5);
    glVertex2f(-2.2, 1.8);
    glEnd();

//left one

    glBegin(GL_TRIANGLES);
    glVertex2f(-1.1, 0.7);
    glVertex2f(-2.5, 0.5);
    glVertex2f(-3.1, -1.2);

    glEnd();

// Right one
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.45, 0.8);
    glVertex2f(-2.00, 0.5);
    glVertex2f(-1.5, -1.2);

    glEnd();

// Left Star

 glColor3f(0,.6,0);
    glBegin(GL_QUADS);

    glVertex2f(2.00, 0.5);
    glVertex2f(2.6, 0.5);
   glVertex2f(2.6, -0.5);
   glVertex2f(2.0, -0.5);
    glEnd();

//up one

    glBegin(GL_TRIANGLES);
    glVertex2f(2.0, 0.5);
    glVertex2f(2.6, 0.5);
    glVertex2f(2.3, 1.8);
    glEnd();

//left one

    glBegin(GL_TRIANGLES);
    glVertex2f(3.3, 0.8);
    glVertex2f(2.0, 0.5);
    glVertex2f(1.7, -1.1);

    glEnd();

// Right one
    glBegin(GL_TRIANGLES);
    glVertex2f(1.25, 0.7);
    glVertex2f(2.6, 0.5);
    glVertex2f(3.0, -1.0);

    glEnd();

//Line
/*
glColor3f(1,0,1);
 glBegin(GL_LINES);
 glVertex2f(-10.0,10.0);
 glVertex2f(10.0,-10.0);
 glVertex2f(-10.0,-10.0);
 glVertex2f(10.0,10.0);
 glEnd();
*/


    glFlush();
    }
    void init (void)
    {
        /* select clearing color */
        glClearColor (1, 1, 1, 0.0);
        /* initialize viewing values */
        glOrtho(-10, 10, -10, 10, -10, 10);
        }


        /*
        * Declare initial window size, position, and display mode
        * (single buffer and RGBA). Open window with "hello"
        * in its title bar. Call initialization routines.
        * Register callback function to display graphics.
        * Enter main loop and process events.
        */
        int main()



        {
            glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); //Mode for later glutCreateWindow()

            glutInitWindowSize (400, 200);
            glutInitWindowPosition (100, 100);
            glutCreateWindow(" National Flag of Syria");
            init();
            glutDisplayFunc(display);
            glutMainLoop();
            return 0;
            }

