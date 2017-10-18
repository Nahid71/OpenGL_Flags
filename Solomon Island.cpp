#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.1415926535898

void display(void)
{ /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(0.5);




    // down triangle
    glColor3f(0,0.4,0);
    glBegin(GL_TRIANGLES);
      glVertex2f(-8.0, -9.0);
    glVertex2f(9.0, 8.0);
    glVertex2f(9.0, -9.0);
    glEnd();

    // Top triangle
    glColor3f(0,0,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-9.0, -8.0);
    glVertex2f(8.0, 9.0);
    glVertex2f(-9.0, 9.0);
    glEnd();
        //corner line

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);

    glVertex2f(9.0, 8.0);
    glVertex2f(8.0, 9.0);
   glVertex2f(-9.0, -8.0);
   glVertex2f(-8.0, -9.0);
    glEnd();

    /* don't wait!
    * start processing buffered OpenGL routines */
//Line
/*
glColor3f(1,0,1);
 glBegin(GL_LINES);
 glVertex2f(-9.0,9.0);
 glVertex2f(9.0,-9.0);
 glVertex2f(-9.0,-9.0);
 glVertex2f(9.0,9.0);
 glEnd();
*/
//Top Left Star
 glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex2f(-7.0, 7.5);
    glVertex2f(-7.6, 7.5);
   glVertex2f(-7.6, 6.5);
   glVertex2f(-7.0, 6.5);
    glEnd();

//up one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-7.0, 7.5);
    glVertex2f(-7.58, 7.5);
    glVertex2f(-7.3, 8.8);
    glEnd();

//left one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-6.2, 7.5);
    glVertex2f(-7.4, 7.4);
    glVertex2f(-7.8, 5.15);

    glEnd();

//Right one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-7.0, 7.5);
    glVertex2f(-8.3, 7.4);
    glVertex2f(-6.45, 5.15);

    glEnd();

// Down Left Star
 glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex2f(-7.0, 1.5);
    glVertex2f(-7.6, 1.5);
   glVertex2f(-7.6, 0.5);
   glVertex2f(-7.0, 0.5);
    glEnd();

//up one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-7.0, 1.5);
    glVertex2f(-7.58, 1.5);
    glVertex2f(-7.3, 2.8);
    glEnd();

//left one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-6.2, 1.5);
    glVertex2f(-7.4, 1.4);
    glVertex2f(-7.8, -1.15);

    glEnd();

//Right one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-7.0, 1.5);
    glVertex2f(-8.3, 1.4);
    glVertex2f(-6.45, -1.15);

    glEnd();

    // Down Right Star
 glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex2f(-3.0, 1.5);
    glVertex2f(-3.6, 1.5);
   glVertex2f(-3.6, 0.5);
   glVertex2f(-3.0, 0.5);
    glEnd();

//up one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.0, 1.5);
    glVertex2f(-3.58, 1.5);
    glVertex2f(-3.3, 2.8);
    glEnd();

//left one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.2, 1.5);
    glVertex2f(-3.4, 1.4);
    glVertex2f(-3.8, -1.15);

    glEnd();

//Right one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.0, 1.5);
    glVertex2f(-4.3, 1.4);
    glVertex2f(-2.45, -1.15);

    glEnd();

        // Top Right Star
 glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex2f(-3.0, 7.5);
    glVertex2f(-3.6, 7.5);
   glVertex2f(-3.6, 6.5);
   glVertex2f(-3.0, 6.5);
    glEnd();

//up one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.0, 7.5);
    glVertex2f(-3.58, 7.5);
    glVertex2f(-3.3, 8.8);
    glEnd();

//left one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-2.2, 7.5);
    glVertex2f(-3.4, 7.4);
    glVertex2f(-3.8, 5.15);

    glEnd();

//Right one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.0, 7.5);
    glVertex2f(-4.3, 7.4);
    glVertex2f(-2.45, 5.15);

    glEnd();

// Middle Stare
 glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex2f(-4.9, 4.4);
    glVertex2f(-5.5, 4.4);
   glVertex2f(-5.5, 3.4);
   glVertex2f(-4.9, 3.4);
    glEnd();
//up one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.9, 4.4);
    glVertex2f(-5.48, 4.4);
    glVertex2f(-5.2, 6.3);
    glEnd();

//left one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-4.0, 4.6);
    glVertex2f(-5.4, 4.4);
    glVertex2f(-5.8, 2.4);

    glEnd();

//Right one
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-6.3, 4.4);
    glVertex2f(-4.15, 2.4);
    glVertex2f(-4.9, 4.4);

    glEnd();


        glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(9.0, 8.0);
    glVertex2f(9.0, 9.0);
    glVertex2f(8.0, 9.0);

    glEnd();

            glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-9.0, -8.0);
    glVertex2f(-9.0, -9.0);
    glVertex2f(-8.0, -9.0);

    glEnd();

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
            glutCreateWindow(" National Flag of Solomon Islands");
            init();
            glutDisplayFunc(display);
            glutMainLoop();
            return 0;
            }

