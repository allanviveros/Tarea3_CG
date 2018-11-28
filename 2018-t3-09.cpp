// Universidad Tecnica Federico Santa Maria
// Departamento de Informatica
// INF342 Computación Grafica
// Hubert Hoffmann
// T3
// Juan Pablo Leon (201473047-2)
// Allan Viveros (201473056-k)
// Numero de Grupo: 9

#include <GL/glut.h>
#include <iostream>
using namespace std;

void init();
void mydisplay();
void Keys(unsigned char key, int xx, int yy);

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tarea 3, Computación Gráfica: Juan Pablo León y Allan Viveros");
	glutDisplayFunc(mydisplay);

	init();

	glutKeyboardFunc(Keys);

	glutMainLoop();

}

void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0); //color de fondo
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.9, 0.9);
	glVertex2f(0.9, 0.9);
	glVertex2f(0.9, 0.3);
	glVertex2f(-0.9, 0.3);
	glEnd();

	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.9, 0.0);
	glVertex2f(0.9, -0.9);
	glVertex2f(0.0, -0.9);
	glEnd();

	glColor3f(1.0, 0.0, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.55, 0.0);
	glVertex2f(-0.2, -0.9);
	glVertex2f(-0.9, -0.9);
	glEnd();
	glFlush();
}

void Keys(unsigned char key, int xx, int yy) {
	switch (key) {
	case 27:
		exit(0);
	case 'x':
		cout << "Estoy apretando x" << endl;
		break;
	case 'X':
		break;
	case 'y':
		break;
	case 'Y':
		break;
	case 'z':
		break;
	case 'Z':
		break;
	}
}
