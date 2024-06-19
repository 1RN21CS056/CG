#include<stdio.h>
#include<iostream>
#include<glut.h>

float angle;

void init()
{

	gluOrtho2D(-20, 20, -20, 20);
}


void rotatepoint(float &x, float &y, float angle)
{
	float rad = angle * 3.14 / 180.0;
	float xnew = x * cos(rad) - y * sin(rad);
	float ynew = x * sin(rad) + y * cos(rad);
	x = xnew;
	y = ynew;
}
void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5);
	glColor3f(1, 0, 0);
	float x1 = -10, y1 = -10, x2 = 10, y2 = -10, x3 = 0, y3 = 10;
	glBegin(GL_TRIANGLES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glEnd();


	glColor3f(1, 0, 1);
	rotatepoint(x1, y1, angle);
	rotatepoint(x2, y2, angle);
	rotatepoint(x3, y3, angle);
	glBegin(GL_TRIANGLES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glEnd();
	glFlush();




}

int main(int argc, char ** argv)
{
	printf("Enter the rotation angle (in degrees):");
	scanf_s("%f", &angle);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("Translate Triangle");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}