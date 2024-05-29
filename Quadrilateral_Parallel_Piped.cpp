#include<glut.h>
#include<math.h>

void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	for (int i = 0; i <= 100; i+=4)
	{
		glBegin(GL_LINE_LOOP);
		glVertex2i(50 + i, 50 + i);
		glVertex2i(150 + i, 50 + i);
		glVertex2i(150 + i, 150 + i);
		glVertex2i(50 + i, 150 + i);
		glEnd();
	}
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
	glutCreateWindow("Quadrilateral(Parallel Piped)");
	myinit();
	glutDisplayFunc(display);

	glutMainLoop();
}