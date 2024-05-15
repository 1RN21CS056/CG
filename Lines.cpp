#include<glut.h>

void  display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5);
	glBegin(GL_LINES);
		glColor3f(1, 0, 0);
		glVertex2i(20, 100);
		glVertex2i(50, 100);
		glColor3f(0, 1, 0);
		glVertex2i(100, 50);
		glVertex2i(150, 150);
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
	glutCreateWindow("Displaying Two Points");
	myinit();
	glutDisplayFunc(display);

	glutMainLoop();
}