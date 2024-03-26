//Nama : Muthia Zhafira Sahnah 
//NIM : 24060122130071
//Lab : GKV D2 

#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Gambar jalan raya (abu-abu)
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5); // Abu-abu
    glVertex2f(-1.0, -0.35);
    glVertex2f(1.0, -0.35);
    glVertex2f(1.0, -1.0);
    glVertex2f(-1.0, -1.0);
    glEnd();
    
    // Gambar badan mobil (Merah)
    glBegin(GL_QUADS);
    glColor3f(2.0, 0.0, 0.0); // Merah
    glVertex2f(-0.6, -0.25);
    glVertex2f(0.6, -0.25);
    glVertex2f(0.5, 0.25);
    glVertex2f(-0.5, 0.25);
    glEnd();
    
    // Gambar atap mobil
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.0, 0.0); 
    glVertex2f(-0.35, 0.25);
    glVertex2f(0.35, 0.25);
    glVertex2f(0.25, 0.5);
    glVertex2f(-0.25, 0.5);
    glEnd();
    
    //garis pembatas pintu 
    glBegin(GL_LINES);
    glColor3f(0.2,0.0,0.0);
    glVertex2f(0.0,0.25);
    glVertex2f(0.0,-0.25);
    glEnd();
    
    
    // Gambar jendela mobil (kiri)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.0); // Biru Muda
    glVertex2f(-0.2, 0.3);
    glVertex2f(0.0, 0.3);
    glVertex2f(0.0, 0.45);
    glVertex2f(-0.2, 0.45);
    glEnd();
    
    // Gambar jendela mobil (kanan)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.0); // Biru Muda
    glVertex2f(0.2, 0.3);
    glVertex2f(0.05, 0.3);
    glVertex2f(0.05, 0.45);
    glVertex2f(0.2, 0.45);
    glEnd();
    
    // Gambar lampu mobil (Kuning)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0); // Kuning
    glVertex2f(-0.55, -0.1);
    glVertex2f(-0.50, -0.1);
    glVertex2f(-0.50, 0.0);
    glVertex2f(-0.55, 0.0);
    glEnd();
    
   
    // Gambar roda kiri
    glColor3f(0.0, 0.0, 0.0); // Hitam
    glPushMatrix();
    glRotated(0.0,0.0,0.0,5.0);
    glTranslatef(-0.35, -0.3, 0.0);
    glutSolidTorus(0.05, 0.1, 100, 100);
    glPopMatrix();
    
    // Gambar roda kanan
    glPushMatrix();
    glRotated(0.0,0.0,0.0,5.0);
    glTranslatef(0.35, -0.3, 0.0);
    glutSolidTorus(0.05, 0.1, 100, 100);
    glPopMatrix();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Mobil Tugas Praktikum GKV 2");
    
    glClearColor(0.0, 1.0, 1.0, 0.0); // Warna latar biru
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
