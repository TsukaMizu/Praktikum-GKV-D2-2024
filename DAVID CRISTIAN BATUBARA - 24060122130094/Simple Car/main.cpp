#include <GL/gl.h>
#include<stdio.h>
#include<math.h>
#include <GL/glut.h>

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 400, 0, 400);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	//Body Mobil
	glColor3ub(0,255,0);
    glBegin(GL_POLYGON);
    glVertex2d(70,120);
    glVertex2d(350,120);
    glVertex2d(350,200);
    glVertex2d(320,200);
    glVertex2d(270,250);
    glVertex2d(150,250);
    glVertex2d(100,200);
    glVertex2d(70,200);
    glVertex2d(70,120);
    glEnd();
    
    //Jendela Mobil
    glColor3ub(0,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(120,200);
    glVertex2d(310,200);
    glVertex2d(270,240);
    glVertex2d(150,240);
    glEnd();
    
    //Roda Mobil
    glColor3ub(0,0,0);
    circle(25,30,270,120);
    circle(25,30,150,120);
    
    glColor3ub(192,192,192);
    circle(15,20,270,120);
    circle(15,20,150,120);
    
	glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Simple Car");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
