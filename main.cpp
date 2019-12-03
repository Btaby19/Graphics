#include<windows.h>
#include<Gl/glut.h>
#include<stdlib.h>
#include <math.h>
#include <stdio.h>
#define PI 3.1416

static float	a	=  -5.9;  //hand flower
static float	b	=  -3.1;
static float	c	=  -5.7;  //hand flower
static float	d	=  -2.7;
static float	x	=  -7.3;  //human
static float	y	=  -4.0;
static float	tx	=  1.0;  //flag circle
static float	ty	=  1.0;
static float	ax	=  -8.0;  //cloud1
static float	ay	=  8.5;
static float	bx	=  ax + 1.0;  //cloud1
static float	by	=  8.5;
static float	cx	=  ax + 2.0;  //cloud1
static float	cy	=  9.0;
static float	dx	=  8.0;  //cloud2
static float	dy	=  8.5;
static float	ex	=  7.0;  //cloud2
static float	ey	=  8.5;
static float	fx	=  6.0;  //cloud2
static float	fy	=  9.0;
static float    gx	=  5.0;  //cloud2
static float	gy	=  8.5;
static float    hx	=  0.0;  //flower
static float	hy	=  -3.0;
static float    ix	=  1.5;  //flower2
static float	iy	=  -2.8;
static float    jx	=  -1.5;  //flower3
static float	jy	=  -2.5;

static float moveHumanX1 = -8.0;
static float moveHumanX2 = -6.5;




void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 20; i++)
		{
			angle = 2 * PI * i / 20;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void init(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glOrtho(-10,10,-10,10,-10,10);
}

void cloud(){

    ax = ax + 0.01;
    dx = dx + 0.01;

    printf("ax is %f and dx is %f\n", ax,dx);

    if(dx > 15.315){
        dx = -12.0;
    }
    if(ax > 15.315){
        ax = -12.0;
    }
    glutPostRedisplay();
}

void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {
		case 'd':
			//spinDisplay_left();
			//glutIdleFunc(spinDisplay_left);
			 if(moveHumanX1 + 2.5 > 8.5){
                moveHumanX1 = moveHumanX1;
			 }else{
                moveHumanX1 = moveHumanX1 + 1;
                moveHumanX2 = moveHumanX2 + 1;
			 }


			 //printf("%f\n", moveHumanX1 + 2.5);

            glutPostRedisplay();
			break;

        case 'a':
			//spinDisplay_left();
			//glutIdleFunc(spinDisplay_left);

			if(moveHumanX1 - 0.3 < -8.3){
                moveHumanX1 = moveHumanX1;
			 }else{
                moveHumanX1 = moveHumanX1 - 1;
                moveHumanX2 = moveHumanX2 - 1;
			 }

            glutPostRedisplay();
			break;

	  default:
			break;
	}
}

void myDisplay()
{

    glBegin(GL_QUADS);
    glColor3d(1.0,1.0,1.0);        // sky
    glVertex2d(-50.0,10.0);
    glColor3d(0.0,0.0,0.5);
    glVertex2d(50.0,10.0);
    glColor3d(0.0,0.0,0.5);
    glVertex2d(10.0,-2.0);
    glColor3d(0.0,0.0,0.9);
    glVertex2d(-10.0,-2.0);
    glEnd();



     glBegin(GL_QUADS);      //national memorial
         glColor3d(0.4d,0.5d,0.6d);
          glVertex2d(-1.0,-2.0);
         glColor3d(0.4d,0.5d,0.6d);
         glVertex2d(0.0,9.0);
         glColor3d(0.8d,0.8d,0.8d);
         glVertex2d(1.0,-2.0);
         glColor3d(0.7d,0.7d,0.7d);
         glVertex2d(0.0,0.0);
      glEnd();

       glBegin(GL_TRIANGLES);
        glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(-2.0,-2.0);
        glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(-0.1,7.0);
       glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(-1.0,-2.0);
    glEnd();

     glBegin(GL_TRIANGLES);
       glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(-3.0,-2.0);
        glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(-0.3,6.0);
       glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(-2.0,-2.0);
    glEnd();
      glBegin(GL_TRIANGLES);
        glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(-4.0,-2.0);
        glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(-0.6,5.0);
        glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(-3.0,-2.0);
    glEnd();
      glBegin(GL_TRIANGLES);
        glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(-5.0,-2.0);
        glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(-1.0,4.0);
        glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(-4.0,-2.0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(-6.0,-2.0);
       glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(-1.6,3.0);
       glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(-5.0,-2.0);
    glEnd();




     glBegin(GL_TRIANGLES);
        glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(2.0,-2.0);
        glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(0.1,7.0);
        glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(1.0,-2.0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(3.0,-2.0);
        glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(0.3,6.0);
        glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(2.0,-2.0);
    glEnd();

     glBegin(GL_TRIANGLES);
       glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(4.0,-2.0);
        glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(0.5,5.0);
        glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(3.0,-2.0);
    glEnd();

     glBegin(GL_TRIANGLES);
        glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(5.0,-2.0);
        glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(0.9,4.0);
        glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(4.0,-2.0);
    glEnd();

     glBegin(GL_TRIANGLES);
        glColor3d(0.8d,0.8d,0.8d);
        glVertex2d(6.0,-2.0);
        glColor3d(0.7d,0.7d,0.7d);
        glVertex2d(1.5,3.0);
        glColor3d(0.4d,0.5d,0.6d);
        glVertex2d(5.0,-2.0);
    glEnd();

     glBegin(GL_QUADS);    //rasta
         glColor3d(0.5d,0.2d,0.0d);
          glVertex2d(10.0,-2.0);
         glColor3d(0.9d,0.5d,0.4d);
         glVertex2d(10.0,-3.5);
         glColor3d(0.5d,0.1d,0.1d);
         glVertex2d(-10.0,-3.5);
        glColor3d(0.5d,0.2d,0.0d);
         glVertex2d(-10.0,-2.0);
      glEnd();

      glColor3d(0.4d,0.5d,0.6d);
         glBegin(GL_QUADS);    //rastar pase
        glVertex2d(10.0,-10.0);
         glVertex2d(10.0,-3.5);
        glVertex2d(-10.0,-3.5);
        glVertex2d(-10.0,-10.0);
      glEnd();


    glColor3d(0.8,0.5,0.2);
    glBegin(GL_QUADS);        //flag-stand
    glVertex2d(0.1,2.0);
    glVertex2d(0.1,-3.5);
    glVertex2d(-0.1,-3.5);
    glVertex2d(-0.1,2.0);
   glEnd();


    glBegin(GL_QUADS); //flag
    glColor3d(0.0,0.3,0.0);
    glVertex2d(0.1,2.0);
    glColor3d(0.1,0.5,0.1);
    glVertex2d(2.0,2.0);
    glColor3d(0.1,0.5,0.1);
    glVertex2d(2.0,0.0);
     glColor3d(0.0,0.3,0.0);
    glVertex2d(0.1,0.0);
   glEnd();

   glPushMatrix();   //flag circle
    glColor3f(0.9, 0.1, 0.1);
    glTranslatef(tx,ty,0);
	circle(0.5,0.5);
    glPopMatrix();

       glColor3d(0.0,0.0,0.0);
        glBegin(GL_QUADS);                // bird1
        glVertex2d(-5.0,5.8);
        glVertex2d(-4.6,5.2);
    glVertex2d(-4.0,5.4);
    glVertex2d(-4.7,4.8);
    glEnd();

       glColor3d(0.0,0.0,0.0);
        glBegin(GL_QUADS); // bird2
        glVertex2d(5.0,5.8);
        glVertex2d(4.6,5.2);
        glVertex2d(4.0,5.4);
        glVertex2d(4.7,4.8);
        glEnd();

   glColor3d(0.0,0.0,0.0);
        glBegin(GL_QUADS);
   // glColor3d(1.0,1.0,1.0);        // bird3
    glVertex2d(-6.0,6.8);
    //glColor3d(0.0,0.0,0.5);
    glVertex2d(-5.6,6.2);
   //glColor3d(0.0,0.0,0.5);
    glVertex2d(-5.0,6.4);
glVertex2d(-5.7,5.8);


    glEnd();

      glColor3d(0.0,0.0,0.0);
        glBegin(GL_QUADS);
   // glColor3d(1.0,1.0,1.0);        // bird4
    glVertex2d(7.0,4.8);
    //glColor3d(0.0,0.0,0.5);
    glVertex2d(6.6,4.2);
   //glColor3d(0.0,0.0,0.5);
    glVertex2d(6.0,4.4);
glVertex2d(6.7,3.8);


    glEnd();
glPushMatrix();   //cloud1

	glColor3f(1.0,1.0,1.0);

	glTranslatef(ax,ay,0);
	circle(0.7,0.7);

	glPopMatrix();
glPushMatrix();   //cloud1-2nd circle

	glColor3f(1.0,1.0,1.0);

	glTranslatef(ax + 1.0,by,0);
	circle(0.9,0.9);

	glPopMatrix();
	glPushMatrix();   //cloud1-3rd circle

	glColor3f(1.0,1.0,1.0);

	glTranslatef(ax + 2.0,cy,0);
	circle(0.8,0.8);

	glPopMatrix();

glPushMatrix();   //cloud2

	glColor3f(1.0,1.0,1.0);

	glTranslatef(dx,dy,0);
	circle(0.8,0.8);

	glPopMatrix();
glPushMatrix();   //cloud2-2nd circle

	glColor3f(1.0,1.0,1.0);
	glTranslatef(dx - 1.0,ey,0);
	circle(0.9,0.9);
    glPopMatrix();


	glPushMatrix();   //cloud2-3rd circle
    glColor3f(1.0,1.0,1.0);
    glTranslatef(dx - 2,fy,0);
	circle(1.0,1.0);
    glPopMatrix();

    glPushMatrix();   //cloud2-4rd circle
    glColor3f(1.0,1.0,1.0);
    glTranslatef(dx - 3,gy,0);
	circle(0.7,0.7);
    glPopMatrix();

            glColor3d(0.5,0.5,0.5);
	     glBegin(GL_QUADS); //flower handle
        glVertex2d(-1.2,-3.0);
        glVertex2d(1.2,-3.0);
        glVertex2d(1.2,-2.8);
        glVertex2d(-1.2,-2.8);
        glEnd();



    glPushMatrix();   //flower
    glColor3f(0.9,0.4,0.1);
    glTranslatef(hx,hy,0);
	circle(0.9,0.9);
    glPopMatrix();

    glPushMatrix();   //flower_under
    glColor3f(0.4,0.4,0.1);
    glTranslatef(hx,hy,0);
	circle(0.6,0.6);
    glPopMatrix();

    glPushMatrix();   //flower2
    glColor3f(0.9,0.4,0.1);
    glTranslatef(ix,iy,0);
	circle(0.9,0.9);
    glPopMatrix();

    glPushMatrix();   //flower2_under
    glColor3f(0.4,0.4,0.1);
    glTranslatef(ix,iy,0);
	circle(0.6,0.6);
    glPopMatrix();

    glPushMatrix();   //flower3
    glColor3f(0.9,0.4,0.1);
    glTranslatef(jx,jy,0);
	circle(0.9,0.9);
    glPopMatrix();

    glPushMatrix();   //flower3_under
    glColor3f(0.8,0.0,0.0);
    glTranslatef(jx,jy,0);
	circle(0.6,0.6);
    glPopMatrix();


        glColor3d(0.9,0.0,0.0);
	     glBegin(GL_QUADS); //human
        glVertex2d(moveHumanX1,-5.0);
        glVertex2d(moveHumanX2,-5.0);
        glVertex2d(moveHumanX2,-7.5);
        glVertex2d(moveHumanX1,-7.5);
        glEnd();

        glColor3d(0.9,0.6,0.0);
	     glBegin(GL_QUADS); //human gola
        glVertex2d(moveHumanX1 + 0.4,-4.4);
        glVertex2d(moveHumanX2 - 0.4,-4.4);
        glVertex2d(moveHumanX2 - 0.4,-4.9);
        glVertex2d(moveHumanX1 + 0.4,-4.9);
        glEnd();

         glColor3d(0.9,0.0,0.0);
	     glBegin(GL_TRIANGLES); //human-nack
        glVertex2d(moveHumanX1,-5.0);
        glVertex2d(moveHumanX1 + 0.7,-4.7);
        glVertex2d(moveHumanX2,-5.0);
        glEnd();


    glPushMatrix();   //human head
	glColor3f(0.0,0.0,0.0);
    glTranslatef(moveHumanX1 + 0.7,y,0);
	circle(0.6,0.6);
    glPopMatrix();


        glColor3d(0.0,0.0,0.5);
	     glBegin(GL_QUADS); //human leg1
        glVertex2d(moveHumanX1 + 0.2,-7.5);
        glVertex2d(moveHumanX1 + 0.6,-7.5);
        glVertex2d(moveHumanX1 + 0.6,-9.5);
        glVertex2d(moveHumanX1 + 0.2,-9.5);
        glEnd();

        glColor3d(0.0,0.0,0.5);
	     glBegin(GL_QUADS); //human leg2
        glVertex2d(moveHumanX1 + 0.9,-7.5);
        glVertex2d(moveHumanX2 - 0.2,-7.5);
        glVertex2d(moveHumanX2 - 0.2,-9.5);
        glVertex2d(moveHumanX1 + 0.9,-9.5);
        glEnd();



         glColor3d(0.9,0.6,0.0);
	     glBegin(GL_TRIANGLES); //human-hand1
        glVertex2d(moveHumanX1,-5.0);
        glVertex2d(moveHumanX1 - 0.3,-6.0);
        glVertex2d(moveHumanX1,-6.2);
        glEnd();



        glPushMatrix();   //hand flower
    glColor3d(0.9,0.0,0.0);
    glTranslatef(moveHumanX1 + 2.3,d,0);
	circle(0.2,0.2);
    glPopMatrix();

        glPushMatrix();   //hand flower
    glColor3d(0.9,0.0,0.0);
    glTranslatef(moveHumanX1 + 2.1,b,0);
	circle(0.35,0.35);
    glPopMatrix();


        glColor3d(0.9,0.7,0.4);
	     glBegin(GL_TRIANGLES); //human-hand2-flower
        glVertex2d(moveHumanX1 + 1.9,-3.5);
        glVertex2d(moveHumanX1 + 2.5,-3.1);
        glVertex2d(moveHumanX1 + 2.2,-5.0);
        glEnd();


        glColor3d(0.9,0.6,0.0);
	     glBegin(GL_TRIANGLES); //human-hand2
        glVertex2d(moveHumanX2,-5.0);
        glVertex2d(moveHumanX2 + 1.0,-4.5);
        glVertex2d(moveHumanX2,-5.8);
        glEnd();



    glFlush();

}



int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000,800);
    glutInitWindowPosition(20,20);

    glutCreateWindow("Project");
    glutIdleFunc(cloud);
    init();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(my_keyboard);
    glutMainLoop();
    return 0;

}
