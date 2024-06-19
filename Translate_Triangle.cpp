#include<stdio.h>
#include<glut.h>

float tx, ty;

void init()
{

	gluOrtho2D(-200, 200, -200, 200);
}

void triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{

	glBegin(GL_TRIANGLES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glEnd();
	glFlush();

}
void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	triangle(-30, -30, 0, 30, 30, -30);

	glColor3f(0, 1, 0);
	triangle(-30 + tx, -30 + ty, 0 + tx, 30 + ty, 30 + tx, -30 + ty);


}

int main(int argc, char ** argv)
{
	printf("Enter translation values:");
	scanf_s("%f %f", &tx, &ty);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("Translate Triangle");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
