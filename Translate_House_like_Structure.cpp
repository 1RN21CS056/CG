#include<stdio.h>
#include<glut.h>
int vx1 = 50, vy1 = 50, vx2 = 150, vy2 = 50, vx3 = 150, vy3 = 150, vx4 = 50, vy4 = 150, vx5 = 50,
vy5 = 150, vx6 = 150, vy6 = 150, vx7 = 100, vy7 = 200;

void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);
	glVertex2i(vx1, vy1);
	glVertex2i(vx2, vy2);
	glVertex2i(vx3, vy3);
	glVertex2i(vx4, vy4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(vx5, vy5);
	glVertex2i(vx6, vy6);
	glVertex2i(vx7, vy7);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(vx1 + 100, vy1 + 100);
	glVertex2i(vx2 + 100, vy2 + 100);
	glVertex2i(vx3 + 100, vy3 + 100);
	glVertex2i(vx4 + 100, vy4 + 100);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(vx5 + 100, vy5 + 100);
	glVertex2i(vx6 + 100, vy6 + 100);
	glVertex2i(vx7 + 100, vy7 + 100);
	glEnd();
	glFlush();
}
void myinit()
{
	gluOrtho2D(0, 500, 0, 500);
}

int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Displaying House like a Structure");
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
}