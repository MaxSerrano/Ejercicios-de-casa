/*
Serrano Martínez Max Yael
Grupo 02
visual studio 2017
Práctica 3 Ejrcicio en casa
Modo de uso:
   w,s : Se desplaza sobre el eje Z
   a,d: Desplazamiento en eje X
   q,e: Desplzamiento en eje Y
   Flechas de teclado: moviemiento en grados
*/

//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
#include "Main.h"

float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;
float transY = 0.0f;
float transZ = -5.0f;


void InitGL(GLvoid)     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}
/////////////////////////
void prismaRS(void) {

	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.93, 0.76, 0.82);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.93, 0.76, 0.82);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.93, 0.76, 0.82);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.93, 0.76, 0.82);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.93, 0.76, 0.82);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.93, 0.76, 0.82);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();

}
///////////////////////// Prisma azul
/////////////////////////
void prismaA(void) {

	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0, 0.34, 0.66);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0, 0.34, 0.66);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0, 0.34, 0.66);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0, 0.34, 0.66);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0, 0.34, 0.66);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0, 0.34, 0.66);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
////////////////////////7
void prismaA2(void) {

	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.53, 0.75, 0.82);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.53, 0.75, 0.82);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.53, 0.75, 0.82);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.53, 0.75, 0.82);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.53, 0.75, 0.82);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.53, 0.75, 0.82);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
/////////////////////////77
void prismaB(void)
{
	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1, 1, 1);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1, 1, 1);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1, 1, 1);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1, 1, 0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1, 1, 1);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1, 1, 1);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
/////////////// negro
void prismaN(void)
{
	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0, 0, 0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0, 0, 0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0, 0, 0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0, 0, 0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0, 0, 0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0, 0, 0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
//////////////////

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//Poner Código Aquí.
	/////en medio//////////////////////////
	glTranslatef(transX - 5 , transY - 5 , transZ - 5); //movimiento por medio de teclado
	glRotatef(45, angleX, angleY, angleZ);

	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}

	glTranslatef(0, 0, 0); //movimiento por medio de teclado

	for (int i = 0; i < 13; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	glTranslatef(0, 0, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	//enmedio////////////////////////////7
	/////Arrriba
	/////Primerlinea
	glTranslatef(-16, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 17; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	/////Primerlinea
	//srgunda linea
	glTranslatef(-18, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	glTranslatef(0, 0, 0); //movimiento por medio de teclado

	for (int i = 0; i < 2; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	glTranslatef(0, 0, 0); //movimiento por medio de teclado

	for (int i = 0; i < 2; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	glTranslatef(0, 0, 0); //movimiento por medio de teclado

	for (int i = 0; i < 3; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	glTranslatef(0, 0, 0); //movimiento por medio de teclado

	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	glTranslatef(0, 0, 0); //movimiento por medio de teclado

	for (int i = 0; i < 3; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	glTranslatef(0, 0, 0); //movimiento por medio de teclado

	for (int i = 0; i < 2; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//segunda linea
	//TErcer linea
	glTranslatef(-19, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 5; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	///TErce linea1
	//cuarta Linea
	glTranslatef(-19, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//cuarta linea
	//quinta linea
	glTranslatef(-20, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 4; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 5; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 4; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//quinta linea
	//sexts
	glTranslatef(-21, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 5; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	//sexta
	//septima
	glTranslatef(-22, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 7; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//septima
	///octava
	glTranslatef(-23, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 3; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1 ; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1 ; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 9; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	//octava
	//novena
	glTranslatef(-24, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 4; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 11; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 4; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	//novena
	//10
	glTranslatef(-25, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 4; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 11; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 4; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	//10
	//11
	glTranslatef(-25, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 4; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 7; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	//11
	//12
	glTranslatef(-24, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 3; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 4; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 4; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	//12
	//13
	glTranslatef(-24, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 2; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 6; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 4; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	//13
	//14
	glTranslatef(-25, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 2; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 8; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 5; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	//14
	//15
	glTranslatef(-25, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 2; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 17; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaRS();
		glTranslatef(1, 0, 0);
	}
	//15
	//16
	glTranslatef(-25, 1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	glTranslatef(21, 0, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//16
	/////Arrriba
	//abajo
	//1
	glTranslatef(-16, -17, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//1
	//2
	glTranslatef(-8, -1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//2
	//3
	glTranslatef(-10, -1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//3
	//4
	glTranslatef(-12, -1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 2; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//4
	//5
	glTranslatef(-13, -1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//5
	//6
	glTranslatef(-13, -1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaA2();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//6
	//7
	glTranslatef(-13, -1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 5; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaA();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 1; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	//7
	//8
	glTranslatef(-12, -1, 0); //movimiento por medio de teclado

	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	
	for (int i = 0; i < 5; i++) {
		prismaB();
		glTranslatef(1, 0, 0);
	}
	for (int i = 0; i < 3; i++) {
		prismaN();
		glTranslatef(1, 0, 0);
	}
	
	//8
	//abajo
	//glRotatef(45, angleX, angleY, angleZ); //grados se mueve, ejex,ejey,ejez
	//prisma();  //lamada de funcion




	glutSwapBuffers();
	//glFlush();
	// Swap The Buffers
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.1,20);	 //no permite ver el volumen, solo permite ver caras
	glFrustum(-0.2, 0.2, -0.2, 0.2, 0.1, 50.0); //permite ver volumen
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function "uso de teclas"
{
	switch (key) {
	case 'w':
	case 'W':
		transZ += 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 's':
	case 'S':
		transZ -= 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 'a':
	case 'A':
		transX -= 0.2f;
		break;
	case 'd':
	case 'D':
		transX += 0.2f;
		break;
	case 'q':
	case 'Q':
		transY += 0.2f;
		break;
	case 'e':
	case 'E':
		transY -= 0.2f;
		break;
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
		//glutFullScreen ( ); // Full Screen Mode
		//break;
	case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
		//glutReshapeWindow ( 500, 500 ); // Cambiamos tamano de Ventana
		//break;
	case GLUT_KEY_LEFT:
		angleY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 1.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	//glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("P3"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}
