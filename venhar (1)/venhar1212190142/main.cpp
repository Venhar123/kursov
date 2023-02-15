#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
void drawTriangle(int r, int g, int b){
    glClear(GL_COLOR_BUFFER_BIT);

     glBegin(GL_TRIANGLES);
    glColor3ub(227, 252, 3);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.0, 0.5);

    glBegin(GL_TRIANGLES);
    glColor3ub(3, 98, 252);
    glVertex2f(-0.5, 0);
    glVertex2f(0.5, 0);
    glVertex2f(0.0, 1);

    glBegin(GL_TRIANGLES);
    glColor3ub(252, 3, 3);
    glVertex2f(-0.25, -0.25);
    glVertex2f(0.75, -0.25);
    glVertex2f(0.25, 0.75);

    glBegin(GL_TRIANGLES);
    glColor3ub(53, 252, 3);
    glVertex2f(-0.75, -0.25);
    glVertex2f(0.25, -0.25);
    glVertex2f(-0.25, 0.75);



}

void onInit(){

    glClearColor(0.0, 0.0, 0.0, 1.0);
}

void reshape(int WIDTH, int HEIGHT){
    glViewport(0,0, WIDTH, HEIGHT);

}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_TRIANGLES);
    glColor3ub(227, 252, 3);
    glVertex2f(0, 0);
    glVertex2f(1, 0);
    glVertex2f(1, 1);

    glBegin(GL_TRIANGLES);
    glColor3ub(3, 98, 252);
    glVertex2f(-1, 1);
    glVertex2f(0, 0);
    glVertex2f(0, 1);

    glBegin(GL_TRIANGLES);
    glColor3ub(252, 3, 3);
    glVertex2f(-1, -0.25);
    glVertex2f(0, 0);
    glVertex2f(-1, -1);

    glBegin(GL_TRIANGLES);
    glColor3ub(53, 252, 3);
    glVertex2f(0, -1);
    glVertex2f(1, -1);
    glVertex2f(0, 0);



    glEnd();



    //draw objects

    glutSwapBuffers();
}


int main(int argc, char **argv){


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(720, 720);
    glutInitWindowPosition(100,100);
    glutCreateWindow ("My first OpenGL Windows");

    onInit();

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();

    return 0;
    }
