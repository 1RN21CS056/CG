#include<glut.h>
#include<math.h>

void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	double angle;
	int i, j;
	glBegin(GL_POINTS);
	for (j = 0; j < 50; j++)
	{
		for (i = 0; i <= 36; i++)
		{
			angle = 3.14 / 18 * i;
			glVertex2f(10 * cos(angle), j + 10 * sin(angle));
		}
	}
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
	glutCreateWindow("Square and Rectangle(Parallel Piped)");
	myinit();
	glutDisplayFunc(display);

	glutMainLoop();
}