#include<stdio.h>
#include<glut.h>

GLfloat sx, sy;
GLfloat tx = 200, ty = 200;

void myinit()
{
	gluOrtho2D(-500, 500, -500, 500);
}

void display()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	GLfloat vertices[][2]=
	{
		{-100, -100 },
		{100, - 100 },
		{150, 0},
		{100, 100},
		{-100, 100},
		{-150, 0}
	};

	int numvertices = 6;

	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i <numvertices; i++)
	{
		glVertex2f(vertices[i][0], vertices[i][1]);
	}
	glEnd();

	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < numvertices; i++)
	{
		glVertex2f(vertices[i][0] * sx + tx, vertices[i][1] * sy + ty);
	}
	glEnd();
	glFlush();
}

int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	printf("Enter sx, sy\n");
	scanf_s("%f%f", &sx, &sy);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Scalying a Polygon");
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
}