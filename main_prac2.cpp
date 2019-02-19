//Semestre 2019 - 2
/*

  Serrano Martínez Max Yael
  Grupo 02
  visual studio 2017
  Práctica 2 ejercicio en casa
  Manual de uso:
*/

#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	glBegin(GL_POLYGON); //DIBUJA point y line, etc.
	//C
	/////////////////////////////////////CABEZA
	glColor3f(0, 0, 0);
	glVertex3f(-3, 10, 1);
	glVertex3f(3, 10, 1);
	glVertex3f(3, 9, 1);
	glVertex3f(-3, 9, 1);
	glEnd();  //necesario
	/////////////////////////7777
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-4, 9, 1);
	glVertex3f(-3, 9, 1);
	glVertex3f(-3, 8, 1);
	glVertex3f(-4, 8, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-3, 9, 1);
	glVertex3f(3, 9, 1);
	glVertex3f(3, 8, 1);
	glVertex3f(-3, 8, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(3, 9, 1);
	glVertex3f(4, 9, 1);
	glVertex3f(4, 8, 1);
	glVertex3f(3, 8, 1);
	glEnd();  //necesario
	//////////
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-5, 8, 1);
	glVertex3f(-4, 8, 1);
	glVertex3f(-4, 7, 1);
	glVertex3f(-5, 7, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-4, 8, 1);
	glVertex3f(-2, 8, 1);
	glVertex3f(-2, 7, 1);
	glVertex3f(-4, 7, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-2, 8, 1);
	glVertex3f(-1, 8, 1);
	glVertex3f(-1, 7, 1);
	glVertex3f(-2, 7, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(4, 8, 1);
	glVertex3f(-1, 8, 1);
	glVertex3f(-1, 7, 1);
	glVertex3f(4, 7, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(5, 8, 1);
	glVertex3f(4, 8, 1);
	glVertex3f(4, 7, 1);
	glVertex3f(5, 7, 1);
	glEnd();  //necesario
	////////////
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-6, 7, 1);
	glVertex3f(-5, 7, 1);
	glVertex3f(-5, 2, 1);
	glVertex3f(-6, 2, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-5, 7, 1);
	glVertex3f(-4, 7, 1);
	glVertex3f(-4, 2, 1);
	glVertex3f(-5, 2, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-4, 7, 1);
	glVertex3f(-3, 7, 1);
	glVertex3f(-3, 0, 1);
	glVertex3f(-4, 0, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-5, 3, 1);
	glVertex3f(-4, 3, 1);
	glVertex3f(-4, 0, 1);
	glVertex3f(-5, 0, 1);
	glEnd();  //necesario
	//linea cuatro
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(6, 7, 1);
	glVertex3f(5, 7, 1);
	glVertex3f(5, 0, 1);
	glVertex3f(6, 0, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(5, 7, 1);
	glVertex3f(-1, 7, 1);  //este
	glVertex3f(-1, 6, 1);
	glVertex3f(5, 6, 1);
	glEnd();  //necesario
	//eye
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-1, 7, 1);
	glVertex3f(-3, 7, 1);
	glVertex3f(-3, 6, 1);
	glVertex3f(-1, 6, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0, 6, 1);
	glVertex3f(-3, 6, 1);
	glVertex3f(-3, 5, 1);
	glVertex3f(0, 5, 1);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(1, 5, 1);
	glVertex3f(-3, 5, 1);
	glVertex3f(-3, 4, 1);
	glVertex3f(1, 4, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(5, 5, 1);
	glVertex3f(4, 5, 1);
	glVertex3f(4, 2, 1);
	glVertex3f(5, 2, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(4, 5, 1);
	glVertex3f(3, 5, 1);
	glVertex3f(3, 3, 1);
	glVertex3f(4, 3, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(2, 4, 1);
	glVertex3f(-2, 4, 1);
	glVertex3f(-2, 3, 1);
	glVertex3f(2, 3, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-1, 3, 1);
	glVertex3f(1, 3, 1);
	glVertex3f(1, 2, 1);
	glVertex3f(-1, 2, 1);
	glEnd();  //necesario
	//eye
	//sonrisa
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex3f(-3, 2, 1);
	glVertex3f(-2, 2, 1);
	glVertex3f(-2, 1, 1);
	glVertex3f(-3, 1, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex3f(-2, 1, 1);
	glVertex3f(5, 1, 1);
	glVertex3f(5, 0, 1);
	glVertex3f(-2, 0, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex3f(-1, 0, 1);
	glVertex3f(4, 0, 1);
	glVertex3f(4, -1, 1);
	glVertex3f(-1, -1, 1);
	glEnd();  //necesario
	//sonrisa
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(5, 6, 1);
	glVertex3f(0, 6, 1);
	glVertex3f(0, 5, 1);
	glVertex3f(5, 5, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(4, 5, 1);
	glVertex3f(1, 5, 1);
	glVertex3f(1, 4, 1);
	glVertex3f(4, 4, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(3, 4, 1);
	glVertex3f(2, 4, 1);
	glVertex3f(2, 3, 1);
	glVertex3f(3, 3, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-3, 4, 1);
	glVertex3f(-2, 4, 1);
	glVertex3f(-2, 3, 1);
	glVertex3f(-3, 3, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-3, 3, 1);
	glVertex3f(-1, 3, 1);
	glVertex3f(-1, 2, 1);
	glVertex3f(-3, 2, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(1, 3, 1);
	glVertex3f(4, 3, 1);
	glVertex3f(4, 2, 1);
	glVertex3f(1, 2, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-2, 2, 1);
	glVertex3f(5, 2, 1);
	glVertex3f(5, 1, 1);
	glVertex3f(-2, 1, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-3, 1, 1);
	glVertex3f(-2, 1, 1);
	glVertex3f(-2, 0, 1);
	glVertex3f(-3, 0, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-4, 0, 1);
	glVertex3f(-3, 0, 1);
	glVertex3f(-3, -1, 1);
	glVertex3f(-4, -1, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-3, 0, 1);
	glVertex3f(-1, 0, 1);
	glVertex3f(-1, -1, 1);
	glVertex3f(-3, -1, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(4, 0, 1);
	glVertex3f(5, 0, 1);
	glVertex3f(5, -1, 1);
	glVertex3f(4, -1, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-2, -1, 1);
	glVertex3f(4, -1, 1);
	glVertex3f(4, -2, 1);
	glVertex3f(-2, -2, 1);
	glEnd();  //necesario
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-2, -1, 1);
	glVertex3f(-3, -1, 1);
	glVertex3f(-3, -2, 1);
	glVertex3f(-2, -2, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(5, -1, 1);
	glVertex3f(4, -1, 1);
	glVertex3f(4, -2, 1);
	glVertex3f(5, -2, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(4, -2, 1);
	glVertex3f(-2, -2, 1);
	glVertex3f(-2, -3, 1);
	glVertex3f(4, -3, 1);
	glEnd();  //necesario1
	////////////////////CABEZA
////////////CUERPO
	
	//aRRIBA
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-3, 1, 1);
	glVertex3f(-7, 1, 1);
	glVertex3f(-7, 0, 1);
	glVertex3f(-3, 0, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-4, 0, 1);
	glVertex3f(-7, 0, 1);
	glVertex3f(-7, -1, 1);
	glVertex3f(-4, -1, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7, 0, 1);
	glVertex3f(-8, 0, 1);
	glVertex3f(-8, -1, 1);
	glVertex3f(-7, -1, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-3, -1, 1);
	glVertex3f(-8, -1, 1);
	glVertex3f(-8, -2, 1);
	glVertex3f(-3, -2, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-8, -1, 1);
	glVertex3f(-9, -1, 1);
	glVertex3f(-9, -2, 1);
	glVertex3f(-8, -2, 1);
	glEnd();  //necesario1
	//ARRIBA1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-2, -2, 1);
	glVertex3f(-9, -2, 1);
	glVertex3f(-9, -3, 1);
	glVertex3f(-2, -3, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-9, -2, 1);
	glVertex3f(-10, -2, 1);
	glVertex3f(-10, -3, 1);
	glVertex3f(-9, -3, 1);
	glEnd();  //necesario1
	//ABAO
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-10, -3, 1);
	glVertex3f(-11, -3, 1);
	glVertex3f(-11, -8, 1);
	glVertex3f(-10, -8, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-5, -3, 1);
	glVertex3f(-10, -3, 1);
	glVertex3f(-10, -4, 1);
	glVertex3f(-5, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-4, -3, 1);
	glVertex3f(-5, -3, 1);
	glVertex3f(-5, -4, 1);
	glVertex3f(-4, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-3, -3, 1);
	glVertex3f(-4, -3, 1);
	glVertex3f(-4, -4, 1);
	glVertex3f(-3, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-2, -3, 1);
	glVertex3f(-3, -3, 1);
	glVertex3f(-3, -4, 1);
	glVertex3f(-2, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-1, -3, 1);
	glVertex3f(-2, -3, 1);
	glVertex3f(-2, -4, 1);
	glVertex3f(-1, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0, -3, 1);
	glVertex3f(-1, -3, 1);
	glVertex3f(-1, -4, 1);
	glVertex3f(0, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(1, -3, 1);
	glVertex3f(0, -3, 1);
	glVertex3f(0, -4, 1);
	glVertex3f(1, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(2, -3, 1);
	glVertex3f(1, -3, 1);
	glVertex3f(1, -4, 1);
	glVertex3f(2, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(3, -3, 1);
	glVertex3f(2, -3, 1);
	glVertex3f(2, -4, 1);
	glVertex3f(3, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(4, -3, 1);
	glVertex3f(3, -3, 1);
	glVertex3f(3, -8, 1);
	glVertex3f(4, -8, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(9, -3, 1);
	glVertex3f(4, -3, 1);
	glVertex3f(4, -4, 1);
	glVertex3f(9, -4, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(10, -3, 1);
	glVertex3f(9, -3, 1);
	glVertex3f(9, -4, 1);
	glVertex3f(10, -4, 1);
	glEnd();  //necesario1
	//ARRIBA DERECHA
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(9, -2, 1);
	glVertex3f(8, -2, 1);
	glVertex3f(8, -3, 1);
	glVertex3f(9, -3, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(8, -2, 1);
	glVertex3f(4, -2, 1);
	glVertex3f(4, -3, 1);
	glVertex3f(8, -3, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(8, -1, 1);
	glVertex3f(7, -1, 1);
	glVertex3f(7, -2, 1);
	glVertex3f(8, -2, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(7, -1, 1);
	glVertex3f(5, -1, 1);
	glVertex3f(5, -2, 1);
	glVertex3f(7, -2, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(7, 0, 1);
	glVertex3f(6, 0, 1);
	glVertex3f(6, -1, 1);
	glVertex3f(7, -1, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(6, 0, 1);
	glVertex3f(5, 0, 1);
	glVertex3f(5, -1, 1);
	glVertex3f(6, -1, 1);
	glEnd();  //necesario1
	//ABAJO
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(10, -4, 1);
	glVertex3f(9, -4, 1);
	glVertex3f(9, -8, 1);
	glVertex3f(10, -8, 1);
	glEnd();  //necesario1
	///
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(9, -4, 1);
	glVertex3f(6, -4, 1);
	glVertex3f(6, -5, 1);
	glVertex3f(9, -5, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(6, -4, 1);
	glVertex3f(4, -4, 1);
	glVertex3f(4, -5, 1);
	glVertex3f(6, -5, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(3, -4, 1);
	glVertex3f(2, -4, 1);
	glVertex3f(2, -5, 1);
	glVertex3f(3, -5, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(2, -4, 1);
	glVertex3f(1, -4, 1);
	glVertex3f(1, -5, 1);
	glVertex3f(2, -5, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(1, -4, 1);
	glVertex3f(-2, -4, 1);
	glVertex3f(-2, -5, 1);
	glVertex3f(1, -5, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-3, -4, 1);
	glVertex3f(-2, -4, 1);
	glVertex3f(-2, -5, 1);
	glVertex3f(-3, -5, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-4, -4, 1);
	glVertex3f(-3, -4, 1);
	glVertex3f(-3, -5, 1);
	glVertex3f(-4, -5, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7, -4, 1);
	glVertex3f(-4, -4, 1);
	glVertex3f(-4, -5, 1);
	glVertex3f(-7, -5, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-10, -4, 1);
	glVertex3f(-7, -4, 1);
	glVertex3f(-7, -5, 1);
	glVertex3f(-10, -5, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);/////CUADRADO DE MANO
	glVertex3f(-10, -5, 1);
	glVertex3f(-8, -5, 1);
	glVertex3f(-8, -7, 1);
	glVertex3f(-10, -7, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-8, -5, 1);
	glVertex3f(-6, -5, 1);
	glVertex3f(-6, -7, 1);
	glVertex3f(-8, -7, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-6, -5, 1);
	glVertex3f(-4, -5, 1);
	glVertex3f(-4, -7, 1);
	glVertex3f(-6, -7, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-4, -5, 1);
	glVertex3f(-2, -5, 1);
	glVertex3f(-2, -7, 1);
	glVertex3f(-4, -7, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-2, -5, 1);
	glVertex3f(-1, -5, 1);
	glVertex3f(-1, -6, 1);
	glVertex3f(-2, -6, 1);
	glEnd();  //necesario1
	////
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-2, -6, 1);
	glVertex3f(-1, -6, 1);
	glVertex3f(-1, -7, 1);
	glVertex3f(-2, -7, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-1, -5, 1);
	glVertex3f(0, -5, 1);
	glVertex3f(0, -6, 1);
	glVertex3f(-1, -6, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(0, -5, 1);
	glVertex3f(3, -5, 1);
	glVertex3f(3, -6, 1);
	glVertex3f(0, -6, 1);
	glEnd();  //necesario1
	//
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(4, -5, 1);
	glVertex3f(7, -5, 1);
	glVertex3f(7, -6, 1);
	glVertex3f(4, -6, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(7, -5, 1);
	glVertex3f(9, -5, 1);
	glVertex3f(9, -6, 1);
	glVertex3f(7, -6, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(7, -6, 1);
	glVertex3f(9, -6, 1);
	glVertex3f(9, -7, 1);
	glVertex3f(7, -7, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(5, -6, 1);
	glVertex3f(7, -6, 1);
	glVertex3f(7, -7, 1);
	glVertex3f(5, -7, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(4, -6, 1);
	glVertex3f(5, -6, 1);
	glVertex3f(5, -7, 1);
	glVertex3f(4, -7, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(1, -6, 1);
	glVertex3f(3, -6, 1);
	glVertex3f(3, -7, 1);
	glVertex3f(1, -7, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-2, -6, 1);
	glVertex3f(1, -6, 1);
	glVertex3f(1, -8, 1);
	glVertex3f(-2, -8, 1);
	glEnd();  //necesario
	///
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(-1, -8, 1);
	glVertex3f(0, -8, 1);
	glVertex3f(0, -9, 1);
	glVertex3f(-1, -9, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(1, -7, 1);
	glVertex3f(3, -7, 1);
	glVertex3f(3, -8, 1);
	glVertex3f(1, -8, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-2, -7, 1);
	glVertex3f(-4, -7, 1);
	glVertex3f(-4, -8, 1);
	glVertex3f(-2, -8, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-4, -7, 1);
	glVertex3f(-5, -7, 1);
	glVertex3f(-5, -8, 1);
	glVertex3f(-4, -8, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-6, -7, 1);
	glVertex3f(-7, -7, 1);
	glVertex3f(-7, -8, 1);
	glVertex3f(-6, -8, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-7, -7, 1);
	glVertex3f(-10, -7, 1);
	glVertex3f(-10, -8, 1);
	glVertex3f(-7, -8, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(5, -7, 1);
	glVertex3f(6, -7, 1);
	glVertex3f(6, -8, 1);
	glVertex3f(5, -8, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(6, -7, 1);
	glVertex3f(9, -7, 1);
	glVertex3f(9, -8, 1);
	glVertex3f(6, -8, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(6, -8, 1);
	glVertex3f(9, -8, 1);
	glVertex3f(9, -9, 1);
	glVertex3f(6, -9, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(4, -8, 1);
	glVertex3f(5, -8, 1);
	glVertex3f(5, -9, 1);
	glVertex3f(4, -9, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(0, -8, 1);
	glVertex3f(4, -8, 1);
	glVertex3f(4, -9, 1);
	glVertex3f(0, -9, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-5, -8, 1);
	glVertex3f(-1, -8, 1);
	glVertex3f(-1, -9, 1);
	glVertex3f(-5, -9, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-6, -8, 1);
	glVertex3f(-5, -8, 1);
	glVertex3f(-5, -9, 1);
	glVertex3f(-6, -9, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-10, -8, 1);
	glVertex3f(-7, -8, 1);
	glVertex3f(-7, -9, 1);
	glVertex3f(-10, -9, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7, -9, 1);
	glVertex3f(-6, -9, 1);
	glVertex3f(-6, -10, 1);
	glVertex3f(-7, -10, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-6, -9, 1);
	glVertex3f(5, -9, 1);
	glVertex3f(5, -10, 1);
	glVertex3f(-6, -10, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(5, -9, 1);
	glVertex3f(6, -9, 1);
	glVertex3f(6, -10, 1);
	glVertex3f(5, -10, 1);
	glEnd();  //necesario1
	////////////7
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(6, -10, 1);
	glVertex3f(7, -10, 1);
	glVertex3f(7, -11, 1);
	glVertex3f(6, -11, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(0, -10, 1);
	glVertex3f(6, -10, 1);
	glVertex3f(6, -11, 1);
	glVertex3f(0, -11, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-1, -10, 1);
	glVertex3f(0, -10, 1);
	glVertex3f(0, -11, 1);
	glVertex3f(-1, -11, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-7, -10, 1);
	glVertex3f(-1, -10, 1);
	glVertex3f(-1, -11, 1);
	glVertex3f(-7, -11, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7, -10, 1);
	glVertex3f(-8, -10, 1);
	glVertex3f(-8, -11, 1);
	glVertex3f(-7, -11, 1);
	glEnd();  //necesario1
	////
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-7, -11, 1);
	glVertex3f(-9, -11, 1);
	glVertex3f(-9, -12, 1);
	glVertex3f(-7, -12, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-2, -11, 1);
	glVertex3f(-7, -11, 1);
	glVertex3f(-7, -12, 1);
	glVertex3f(-2, -12, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-1, -11, 1);
	glVertex3f(-2, -11, 1);
	glVertex3f(-2, -12, 1);
	glVertex3f(-1, -12, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(1, -11, 1);
	glVertex3f(0, -11, 1);
	glVertex3f(0, -12, 1);
	glVertex3f(1, -12, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(6, -11, 1);
	glVertex3f(1, -11, 1);
	glVertex3f(1, -12, 1);
	glVertex3f(6, -12, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(8, -11, 1);
	glVertex3f(6, -11, 1);
	glVertex3f(6, -12, 1);
	glVertex3f(8, -12, 1);
	glEnd();  //necesario1
	////////////////////////////////7
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(10, -12, 1);
	glVertex3f(8, -12, 1);
	glVertex3f(8, -13, 1);
	glVertex3f(10, -13, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(8, -12, 1);
	glVertex3f(2, -12, 1);
	glVertex3f(2, -13, 1);
	glVertex3f(8, -13, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(2, -12, 1);
	glVertex3f(1, -12, 1);
	glVertex3f(1, -13, 1);
	glVertex3f(2, -13, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-3, -12, 1);
	glVertex3f(-2, -12, 1);
	glVertex3f(-2, -13, 1);
	glVertex3f(-3, -13, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-9, -12, 1);
	glVertex3f(-3, -12, 1);
	glVertex3f(-3, -13, 1);
	glVertex3f(-9, -13, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-11, -12, 1);
	glVertex3f(-9, -12, 1);
	glVertex3f(-9, -13, 1);
	glVertex3f(-11, -13, 1);
	glEnd();  //necesario1
	//////////////////////////
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-12, -13, 1);
	glVertex3f(-11, -13, 1);
	glVertex3f(-11, -14, 1);
	glVertex3f(-12, -14, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(-11, -13, 1);
	glVertex3f(-3, -13, 1);
	glVertex3f(-3, -14, 1);
	glVertex3f(-11, -14, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-3, -13, 1);
	glVertex3f(-2, -13, 1);
	glVertex3f(-2, -14, 1);
	glVertex3f(-3, -14, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(1, -13, 1);
	glVertex3f(2, -13, 1);
	glVertex3f(2, -14, 1);
	glVertex3f(1, -14, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(2, -13, 1);
	glVertex3f(10, -13, 1);
	glVertex3f(10, -14, 1);
	glVertex3f(2, -14, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(10, -13, 1);
	glVertex3f(11, -13, 1);
	glVertex3f(11, -14, 1);
	glVertex3f(10, -14, 1);
	glEnd();  //necesario1
	///////
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(1, -14, 1);
	glVertex3f(11, -14, 1);
	glVertex3f(11, -15, 1);
	glVertex3f(1, -15, 1);
	glEnd();  //necesario1
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3f(-12, -14, 1);
	glVertex3f(-2, -14, 1);
	glVertex3f(-2, -15, 1);
	glVertex3f(-12, -15, 1);
	glEnd();  //necesario1

	//////////////////////////CUERPO
	
											

	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-16,15,-16,10,-1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
 glutInitWindowSize  (500,500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

