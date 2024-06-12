#include<stdlib.h>
#include<glut.h>

float red = 1.0, green = 1.0, blue = 1.0;

void init()
{
	gluOrtho2D(0, 500, 0, 500);
}

void display()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(red, green, blue);
	glBegin(GL_QUADS);
	glVertex2f(50, 50);
	glVertex2f(150, 50);
	glVertex2f(150, 150);
	glVertex2f(50, 150);
	glEnd();
	glFlush();
}

void keyboard(unsigned char c, int x, int y)
{
	switch (c)
	{
	case 'r':
		red = 1.0;
		green = 0.0;
		blue = 0.0;
		break;
	case 'g':
		red = 0.0;
		green = 1.0;
		blue = 0.0;
		break;
	case 'b':
		red = 0.0;
		green = 0.0;
		blue = 1.0;
		break;
	case 27:
		exit(0);
	}
	glutPostRedisplay();
}

int main(int argc, char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Menu");
	glutDisplayFunc(display);
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
}