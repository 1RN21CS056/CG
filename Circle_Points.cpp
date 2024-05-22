#include<glut.h>
#include<math.h>

void display()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1, 0);
	int i;
	double angle;
	glBegin(GL_POINTS);
	for (i = 0; i <= 36; i++)
	{
		angle = 3.14 / 18 * i;
		glVertex2f(20 * cos(angle), 20 * sin(angle));
	}
	glEnd();
	glFlush();
}

void myinit()
{
	gluOrtho2D(-100, 100, -100, 100);
}

int main(int argc, char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Circle");
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
}