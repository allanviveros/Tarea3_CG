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
void Info();
// Figures
void Triangle3D();
void Square3D();
void Rectangle3D();

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tarea 3, Computación Gráfica: Juan Pablo León y Allan Viveros");
	glutDisplayFunc(mydisplay);

	Info();

	init();

	glutKeyboardFunc(Keys);

	glutMainLoop();

}

void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0); //color de fondo
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}


float lx = 0.0f, ly = 1.0f, lz = -1.0f;
float x = 0.0f, z = 5.0f;

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

	gluLookAt(0.0f, 0.0f, 0.0f, x + lx, ly, z + lz, 0.0f, 1.0f, 0.0f);

	Square3D();
	
	Triangle3D();
	
	Rectangle3D();

	glFlush();
}

void Triangle3D() {

	glColor3f(0.75, 0.4, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(-0.55, 0.0, 0.0);
	glVertex3f(-0.2, -0.9, 0.0);
	glVertex3f(-0.9, -0.9, 0.0);
	glEnd();

	glColor3f(1.0, 0.0, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(-0.55, 0.0, -0.1);
	glVertex3f(-0.2, -0.9, -0.1);
	glVertex3f(-0.9, -0.9, -0.1);
	glEnd();
}

void Rectangle3D() {
	
	
	
	glColor3f(0.3, 0.3, 0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-0.9, 0.9, 0.0);
	glVertex3f(0.9, 0.9, 0.0);
	glVertex3f(0.9, 0.3, 0.0);
	glVertex3f(-0.9, 0.3, 0.0);
	glEnd();


	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.9, 0.9, -0.3);
	glVertex3f(0.9, 0.9, -0.3);
	glVertex3f(0.9, 0.3, -0.3);
	glVertex3f(-0.9, 0.3, -0.3);
	glEnd();
}

void Square3D() {

	glColor3f(0.1, 0.35, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.9, 0.0, 0.0);
	glVertex3f(0.9, -0.9, 0.0);
	glVertex3f(0.0, -0.9, 0.0);
	glEnd();


	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, -0.2);
	glVertex3f(0.9, 0.0, -0.2);
	glVertex3f(0.9, -0.9, -0.2);
	glVertex3f(0.0, -0.9, -0.2);
	glEnd();

}

void Info() {
	cout << "Camara" << endl << "izquierda con tecla x" << endl << "derecha con tecla X" << endl;
	cout << "abajo con tecla y" << endl << "arriba con tecla Y" << endl;
	cout << "al fondo con tecla z" << endl << "hacia la camara con tecla Z" << endl;
	cout << "TECLA ESC PARA TERMINAR" << endl;
	cout << "Nota: una vez presionada la tecla si no nota diferencia dar click izquierdo" << endl;

}

void Keys(unsigned char key, int xx, int yy) {
	switch (key) {
	case 27:
		exit(0);
	case 'x':
		lx -= 1;
		break;
	case 'X':
		lx += 1;
		break;
	case 'y':
		ly -= 1;
		break;
	case 'Y':
		ly += 1;
		break;
	case 'z':
		lz -= 1;
		break;
	case 'Z':
		lz += 1;
		break;
	}
}