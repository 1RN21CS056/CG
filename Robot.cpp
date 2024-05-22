#include<glut.h>

void display1()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 1);

	glBegin(GL_LINE_LOOP);
	glVertex2i(100, 25);
	glVertex2i(120, 25);
	glVertex2i(120, 100);
	glVertex2i(100, 100);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(200, 25);
	glVertex2i(220, 25);
	glVertex2i(220, 100);
	glVertex2i(200, 100);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(80, 100);
	glVertex2i(240, 100);
	glVertex2i(240, 250);
	glVertex2i(80, 250);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(150, 250);
	glVertex2i(170, 250);
	glVertex2i(170, 275);
	glVertex2i(150, 275);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(120, 275);
	glVertex2i(200, 275);
	glVertex2i(200, 325);
	glVertex2i(120, 325);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2i(135, 290);
	glVertex2i(145, 290);
	glVertex2i(145, 300);
	glVertex2i(135, 300);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2i(175, 290);
	glVertex2i(185, 290);
	glVertex2i(185, 300);
	glVertex2i(175, 300);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(140, 280);
	glVertex2i(180, 280);
	glVertex2i(80, 250);
	glVertex2i(50, 175);
	glVertex2i(50, 175);
	glVertex2i(65, 160);
	glVertex2i(65, 160);
	glVertex2i(80, 230);

	glVertex2i(240, 250);
	glVertex2i(270, 175);
	glVertex2i(270, 175);
	glVertex2i(255, 160);
	glVertex2i(255, 160);
	glVertex2i(240, 230);
	glEnd();

	glFlush();
}

void myinit()
{
	gluOrtho2D(0, 500, 0, 500);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Displaying triangles using lines");
	myinit();
	glutDisplayFunc(display1);
	glutMainLoop();
}