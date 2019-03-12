//Semestre 2019-2
/*
Serrano Martiínez Max Yael
GRupo 02
visualstudio 2017
Practica 5 ejercicio en casa */
#include "Main.h"

float transZ = -5.0f;
float transX = 0.0f;
float transY = 0.0f;
int screenW = 0.0;
int screenH = 0.0;
float angleX = 0;
float angleY = 0;
float angHombro = 0.0f;

void InitGL(void)     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
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
	glColor3f(0.56, 0.17, 0.63);//violeta
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0, 0.0, 1.0); //azul
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 1.0, 1.0);//blanco
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0, 1.0, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glColor3f(1.0, 0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.51, 0.01, 0.6);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(transX, transY, transZ);
	//Poner Código Aquí.
	// se definieron angleX y angleY para determinar los grados de movimiento para las rotaciones
	glRotatef(angleX, 1, 0, 0);
	glRotatef(angleY, 0, 1, 0);

	//se guardo todo el codigo en glPush y glPop para uqe se pudiera manipular la piramide de maneja conjunta y cada elemento de manera individual
	//cabeza
	glPushMatrix();
	glPushMatrix();
	glTranslatef(0, 3.2, 0);
	glRotatef(0, 1, 0, 0);
	glScalef(0.8, 0.8, 1);
	prisma();
	glPopMatrix();
	//cuello
	glPushMatrix();
	glTranslatef(0, 2.7, 0);
	glRotated(-90, 0, 1, 0);
	glScalef(0.8, 0.3, 0.5);
	prisma();
	glPopMatrix();
	//cuerpo
	glPushMatrix();
	glTranslatef(0, 1.3, 0);
	glScalef(1.5, 2.5, 1);
	prisma();
	glPopMatrix();
	//hombro derecho
glPushMatrix();
    glRotatef(angHombro, 0, 0, 1);
	glPushMatrix();
	
	glTranslatef(-.8, 2.4, 0);
	glScalef(0.3, 0.5, 0.5);
	prisma();
	glPopMatrix();
	//antebrazo derecho
	glPushMatrix();
	 glTranslatef(-1.1, 2.4, 0);
	 glScalef(2, 0.5, 0.5);
	 prisma();
	
	//codo
	  glPushMatrix();
	  glTranslatef(-3, 2.4, 0);
	  glScalef(0.1, 0.5, 0.5);
	  glColor3f(0, 1, 1);
	  prisma();
	  glPopMatrix();
	glPopMatrix();
glPopMatrix();

	//cadera
	glPushMatrix();
	glTranslatef(0, -0.1, 0);
	glRotated(-90, 0, 1, 0);
	glScalef(1, 0.5, 1.5);
	prisma();
	glPopMatrix();
	//pierna Izquierda/////////////////////////////7
	glPushMatrix();
	glTranslatef(-0.45, -0.9, 0);
	glRotated(-270, 0, 1, 0);
	glScalef(1, 1.10, 0.6);
	prisma();
	glPopMatrix();
	//rodilla izquierda
	glPushMatrix();
	glTranslatef(-0.45, -1.5, 0);
	glRotated(270, 0, 1, 0);
	glScalef(1, 0.3, 0.6);
	prisma();
	glPopMatrix();
	//otrapartepierna
	glPushMatrix();
	glTranslatef(-0.45, -2.2, 0);
	glRotated(90, 0, 1, 0);
	glScalef(1, 1.2, 0.6);
	prisma();
	glPopMatrix();
	//tobillo
	glPushMatrix();
	glTranslatef(-0.45, -2.8, 0);
	glRotated(270, 0, 1, 0);
	glScalef(1, 0.1, 0.6);
	prisma();
	glPopMatrix();
	//pie
	glPushMatrix();
	glTranslatef(-0.45, -3, 0.2);
	glRotated(90, 0, 1, 0);
	glScalef(1.5, 0.2, 0.6);
	prisma();
	glPopMatrix();
	//pierna izquierda (/////////////////////////
	//pierna derecha//////////////////
	glPushMatrix();
	glTranslatef(0.45, -0.9, 0);
	glRotated(-270, 0, 1, 0);
	glScalef(1, 1.10, 0.6);
	prisma();
	glPopMatrix();
	//Rodilla
	glPushMatrix();
	glTranslatef(0.45, -1.5, 0);
	glRotated(270, 0, 1, 0);
	glScalef(1, 0.3, 0.6);
	prisma();
	glPopMatrix();
	//otra pierna
	glPushMatrix();
	glTranslatef(0.45, -2.2, 0);
	glRotated(90, 0, 1, 0);
	glScalef(1, 1.2, 0.6);
	prisma();
	glPopMatrix();
	//tobillo
	glPushMatrix();
	glTranslatef(0.45, -2.8, 0);
	glRotated(270, 0, 1, 0);
	glScalef(1, 0.1, 0.6);
	prisma();
	glPopMatrix();
	//pie
	glPushMatrix();
	glTranslatef(0.45, -3, 0.2);
	glRotated(90, 0, 1, 0);
	glScalef(1.5, 0.2, 0.6);
	prisma();
	glPopMatrix();
	//pierna derecha//////////////////////////
	
	glPopMatrix();
	glutSwapBuffers();
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
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':
	case 'W':
		transZ += 0.3f;
		break;
	case 's':
	case 'S':
		transZ -= 0.3f;
		break;
	case 'a':
	case 'A':
		transX -= .03;
		break;
	case 'd':
	case 'D':
		transX += .03;
		break;

	case 'q':
	case 'Q':
		transY -= .03;
		break;
	case 'e':
	case 'E':
		transY += .03;
		break;
	case 'h':
		if (angHombro < 45)
			angHombro += 0.5f;
		//printf("ang: %f", angHombro);
		break;
	case 'H':
		if (angHombro > -45)
			angHombro -= 0.5f;
		break;
	case 27:

		// Cuando Esc es presionado...
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
	case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angleX += 10;
		break;
	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angleX -= 10;
		break;
	case GLUT_KEY_LEFT:
		angleY += 10;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 10;
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
	screenW = glutGet(GLUT_SCREEN_WIDTH);
	screenH = glutGet(GLUT_SCREEN_HEIGHT);
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica4"); // Nombre de la Ventana
	printf("Resolution H: %i \n", screenW);
	printf("Resolution V: %i \n", screenH);

	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}