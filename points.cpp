#include<glut.h>
void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10);
	glBegin(GL_POINTS);
		glColor3f(0, 1, 0);
		glVertex2i(50, 50);
		glVertex3f(1, 0, 0);
		glVertex2i(150, 100);
	glEnd();
	glFlush();
}

void myinit()
{
	gluOrtho2D(-100, 100, -100, 100);
}

void main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Displaying Two Points");
	myinit();
	glutDisplayFunc(display);

	glutMainLoop();
}