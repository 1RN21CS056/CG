#include<glut.h>

void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(50, 50);
		glVertex2i(150, 50);
		glVertex2i(150, 150);
		glVertex2i(50, 150);
	glEnd();
	glFlush();
}

void myinit()
{
	gluOrtho2D(0, 500, 0, 500);
}

void main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Displaying Square");
	myinit();
	glutDisplayFunc(display);

	glutMainLoop();
}
