#include<math.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
void basics(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5);
	glLineWidth(4);
	glBegin(GL_LINE_LOOP);
		glVertex2i(200,200);
		glVertex2i(200,400);
		glVertex2i(400,400);
		glVertex2i(400,200);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2i(225,350);
		glVertex2i(225,375);
		glVertex2i(250,375);
		glVertex2i(250,350);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2i(350,350);
		glVertex2i(350,375);
		glVertex2i(375,375);
		glVertex2i(375,350);
	glEnd();
	glBegin(GL_LINE_LOOP);
		glVertex2i(250,225);
		glVertex2i(250,250);
		glVertex2i(350,250);
		glVertex2i(350,225);
	glEnd();
	
	glFlush();
}
int main(int argc, char**argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Basics of OpenGL");
	glutInitWindowPosition(0,0);
	glutInitWindowSize(640,480);
	glClearColor(1,1,1,1);
	glColor3f(0.0,0.0,0.0);
	gluOrtho2D(0,640,0,480);
	glutDisplayFunc(basics);
	glutMainLoop();
	return 0;
}
