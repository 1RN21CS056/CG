//Lab Pgm 1: Develop a program to draw a line using Bresenham’s line drawing technique
#include<iostream>
#include<glut.h>
#include<cmath>

void setPixel(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void lineBres(int xo, int yo, int xEnd, int yEnd)
{
	int dx = fabs(xEnd - xo), dy = fabs(yEnd - yo);
	int p = 2 * dy - dx;
	int twody = 2 * dy, twoDyMinusDx = 2 * (dy - dx);
	int x, y;

	if (xo > xEnd)
	{
		x = xEnd;
		y = yEnd;
		xEnd = xo;
	}

	else
	{
		x = xo;
		y = yo;
	}
	setPixel(x, y);
	while (x < xEnd)
	{
		x++;
		if (p < 0)
			p += twody;
		else
		{
			y++;
			p += twoDyMinusDx;
		}
		setPixel(x, y);
	}

}

void display()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	int xo = 50, yo = 100;
	int xEnd = 200, yEnd = 300;
	lineBres(xo, yo, xEnd, yEnd);
	glFlush();
}

void init()
{
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

int main(int argc, char**argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Bresenhams Line Drawing ");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
