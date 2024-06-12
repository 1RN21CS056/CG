#include<stdlib.h>
#include<glut.h>

float red = 1.0, green = 1.0, blue = 1.0, sizef = 0;

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
	glVertex2f(250 - sizef, 250 - sizef);
	glVertex2f(350 + sizef, 250 - sizef);
	glVertex2f(350 + sizef, 350 + sizef);
	glVertex2f(250 - sizef, 350 + sizef);
	glEnd();
	glFlush();
}

void d_menu(int op)
{
	if (op == 4)
		sizef += 5;
	else if (op == 5)
		sizef -= 5;
	else if (op == 6)
		sizef = 0;
	else if (op == 7)
		exit(0);
	else if (op == 1)
	{
		red = 1.0;
		green = 0.0;
		blue = 0.0;
	}
	else if (op == 2)
	{
		red = 0.0;
		green = 1.0;
		blue = 0.0;
	}
	else if (op == 3)
	{
		red = 0.0;
		green = 0.0;
		blue = 1.0;
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
	int subMenu = glutCreateMenu(d_menu);
	glutAddMenuEntry("Red", 1);
	glutAddMenuEntry("Green", 2);
	glutAddMenuEntry("Blue", 3);

	glutCreateMenu(d_menu);
	glutAddSubMenu("Color Change", subMenu);
	glutAddMenuEntry("Increase", 4);
	glutAddMenuEntry("Decrease", 5);
	glutAddMenuEntry("Refresh", 6);
	glutAddMenuEntry("Quit", 7);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
}