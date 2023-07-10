#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
# define M_PI 3.142
GLfloat angle=0.0;
void tree()//tree function
{


	glColor3f(0.36,0.250,0.20);
	glBegin(GL_POLYGON);
	glVertex2i(300,0);
	glVertex2i(310,0);
	glVertex2i(310,50);
	glVertex2i(300,50);
	glEnd();


	glColor3f(0.0,0.3,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(305,150);
	glVertex2i(290,50);
	glVertex2i(320,50);

	glEnd();
}
void tr() //tree function
{
	glPushMatrix();
	glTranslatef(-280,500,0);
	tree();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-220,500,0);
	tree();
	glPopMatrix();
    glPushMatrix();
	glTranslatef(600,500,0);
	tree();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(650,500,0);
	tree();
	glPopMatrix();

}


void elephant()
{//body

	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex2f(200,280);
	glVertex2f(220,300);
	glVertex2f(290,300);
	glVertex2f(310,280);
    glVertex2f(310,200);
    glVertex2f(300,190);
	glVertex2f(210,190);
	glVertex2f(200,200);
	glEnd();


	glColor3f(0.6,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(200,280);
	glVertex2f(220,300);
	glVertex2f(290,300);
	glVertex2f(310,280);
	glVertex2f(310,210);
	glVertex2f(200,210);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(200,220);
	glVertex2f(310,220);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(200,240);
	glVertex2f(310,240);
    glColor3f(0.8,0.0,0.0);
	glVertex2f(200,260);
	glVertex2f(310,260);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(200,280);
	glVertex2f(310,280);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(200,275);
	glVertex2f(310,275);
	glEnd();

	//head
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(200,280);

	glVertex2f(180,280);
	glVertex2f(150,250);
	glVertex2f(150,150);
	glVertex2f(155,150);
	glVertex2f(180,210);
	glVertex2f(200,210);
	glEnd();


//ear
    glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(190,260);
	glVertex2f(220,260);
	glVertex2f(190,230);
	glVertex2f(180,230);
	glEnd();

	//teeth
glColor3f(1.0,1.0,1.0);
	glBegin(GL_QUAD_STRIP);
	glVertex2f(160,220);
	glVertex2f(180,220);
	glVertex2f(180,210);
	glVertex2f(160,210);
	glEnd();

	//eye
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POINTS);
	glVertex2f(170,250);
	glEnd();

    //leg 1
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(220,190);
	glVertex2f(240,190);
	glVertex2f(240,140);
	glVertex2f(220,140);
	glEnd();

	//leg2
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(270,190);
	glVertex2f(290,190);
	glVertex2f(290,140);
	glVertex2f(270,140);

	 glEnd();
	//nail1
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(220,150);
	glVertex2f(240,150);
	glVertex2f(240,140);
	glVertex2f(220,140);
	glEnd();


	//nail2
    glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(270,150);
	glVertex2f(290,150);
	glVertex2f(290,140);
	glVertex2f(270,140);
	glEnd();

	//leg3
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(220,190);
	glVertex2f(200,170);
	glVertex2f(220,170);
	glEnd();

	//leg4
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(270,190);
	glVertex2f(250,170);
	glVertex2f(270,170);
	glEnd();

	//nail3
     glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(200,170);
	glVertex2f(220,170);
	glVertex2f(220,160);
	glVertex2f(200,160);
	glEnd();

   //nail4
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(250,170);
	glVertex2f(270,170);
	glVertex2f(270,160);
	glVertex2f(250,160);
	glEnd();

   //tail
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(310,240);
	glVertex2f(310,248);
	glVertex2f(320,230);
	glEnd();

	//ambari
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(220,360);
	glVertex2f(240,360);
	glVertex2f(240,300);
	glVertex2f(220,300);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(270,360);
	glVertex2f(290,360);
	glVertex2f(290,300);
	glVertex2f(270,300);
	glEnd();
    glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(220,360);
	glVertex2f(230,370);
	glVertex2f(280,370);
	glVertex2f(290,360);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(250,370);
	glVertex2f(260,370);
	glVertex2f(255,375);
	glEnd();
    glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(240,360);
	glVertex2f(270,360);
	glVertex2f(270,340);
	glVertex2f(240,340);
	glEnd();
}


void elephant1()
{//body

	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(200,280);
	glVertex2f(220,300);
	glVertex2f(290,300);
	glVertex2f(310,280);
    glVertex2f(310,200);
    glVertex2f(300,190);
	glVertex2f(210,190);
	glVertex2f(200,200);
	glEnd();


	glColor3f(0.1,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(200,280);
	glVertex2f(220,300);
	glVertex2f(290,300);
	glVertex2f(310,280);
	glVertex2f(310,210);
	glVertex2f(200,210);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0,1.0,0.49);
	glVertex2f(200,220);
	glVertex2f(310,220);
	glColor3f(0.76,1.0,1.0);
	glVertex2f(200,240);
	glVertex2f(310,240);
    glColor3f(0.8,0.68,0.8);
	glVertex2f(200,260);
	glVertex2f(310,260);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0,0.5,0.20);
	glVertex2f(200,280);
	glVertex2f(310,280);
	glColor3f(0.77,1.0,0.50);
	glVertex2f(200,275);
	glVertex2f(310,275);
	glEnd();

	//head
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex2f(200,280);

	glVertex2f(180,280);
	glVertex2f(150,250);
	glVertex2f(150,150);
	glVertex2f(155,150);
	glVertex2f(180,210);
	glVertex2f(200,210);
	glEnd();


//ear
    glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(190,260);
	glVertex2f(220,260);
	glVertex2f(190,230);
	glVertex2f(180,230);
	glEnd();

	//teeth
glColor3f(1.0,1.0,1.0);
	glBegin(GL_QUAD_STRIP);
	glVertex2f(160,220);
	glVertex2f(180,220);
	glVertex2f(180,210);
	glVertex2f(160,210);
	glEnd();

	//eye
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POINTS);
	glVertex2f(170,250);
	glEnd();

    //leg 1
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex2f(220,190);
	glVertex2f(240,190);
	glVertex2f(240,140);
	glVertex2f(220,140);
	glEnd();

	//leg2
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex2f(270,190);
	glVertex2f(290,190);
	glVertex2f(290,140);
	glVertex2f(270,140);

	 glEnd();
	//nail1
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(220,150);
	glVertex2f(240,150);
	glVertex2f(240,140);
	glVertex2f(220,140);
	glEnd();


	//nail2
    glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(270,150);
	glVertex2f(290,150);
	glVertex2f(290,140);
	glVertex2f(270,140);
	glEnd();

	//leg3
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(220,190);
	glVertex2f(200,170);
	glVertex2f(220,170);
	glEnd();

	//leg4
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(270,190);
	glVertex2f(250,170);
	glVertex2f(270,170);
	glEnd();

	//nail3
     glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(200,170);
	glVertex2f(220,170);
	glVertex2f(220,160);
	glVertex2f(200,160);
	glEnd();

   //nail4
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(250,170);
	glVertex2f(270,170);
	glVertex2f(270,160);
	glVertex2f(250,160);
	glEnd();

   //tail
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(310,240);
	glVertex2f(310,248);
	glVertex2f(320,230);
	glEnd();


}
void grass()
{
	glColor3f(0.56,0.77,0.2);
	glBegin(GL_POLYGON);
	glVertex2f(0,500);
	glVertex2f(445,500);
	glVertex2f(420,415);
	glVertex2f(0,415);
    glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(545,500);
	glVertex2f(565,415);
	glVertex2f(999,415);
	glVertex2f(999,500);
    glEnd();
 }

	void palace()
	{
	//palace
	//left side
    //first
	glColor3f(0.76,0.49,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(150,500);
	glVertex2f(150,650);
	glVertex2f(190,650);
	glVertex2f(190,500);
	glEnd();
//first inside
	glColor3f(0.7,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(160,550);
	glVertex2f(160,600);
	glVertex2f(180,600);
	glVertex2f(180,550);
	glEnd();


    glColor3f(0.2,0.1,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(150,650);
	glVertex2f(190,650);
    glVertex2f(190,655);
	glVertex2f(150,655);
    glEnd();

	glColor3f(0.2,0.8,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(155,655);
	glVertex2f(155,660);
    glVertex2f(185,660);
	glVertex2f(185,655);
    glEnd();
	//doom
	glColor3f(0.5,0.0,0.0);
glBegin(GL_POLYGON);
    glVertex2f(155,660);
	glVertex2f(150,682);
    glVertex2f(155,695);
	glVertex2f(170,705);
	glVertex2f(185,695);
	glVertex2f(190,682);
	glVertex2f(185,660);

    glEnd();

//second
	glColor3f(0.76,0.49,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(240,500);
	glVertex2f(240,650);
	glVertex2f(280,650);
	glVertex2f(280,500);
	glEnd();
//inside
	glColor3f(0.7,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(250,550);
	glVertex2f(250,600);
	glVertex2f(270,600);
	glVertex2f(270,550);
	glEnd();
//top
	glColor3f(0.2,0.1,0.0);//1
    glBegin(GL_POLYGON);
	glVertex2f(240,650);
	glVertex2f(240,655);
	glVertex2f(280,655);
	glVertex2f(280,650);
	glEnd();
	glColor3f(0.2,0.8,0.0);//2
    glBegin(GL_POLYGON);
	glVertex2f(245,655);
	glVertex2f(245,660);
	glVertex2f(275,660);
	glVertex2f(275,655);
	glEnd();
//doom
	glColor3f(0.5,0.0,0.0);
    glBegin(GL_POLYGON);
	glVertex2f(245,660);
	glVertex2f(240,682);
	glVertex2f(245,695);
	glVertex2f(260,705);
	glVertex2f(275,695);
	glVertex2f(280,682);
	glVertex2f(275,660);
	glEnd();


//left middle
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(190,500);
	glVertex2f(190,610);
	glVertex2f(240,610);
	glVertex2f(240,500);
	glEnd();
	//left middle inside
	glColor3f(0.0,0.6,0.7);
	glBegin(GL_LINES);
	glVertex2f(190,510);
	glVertex2f(240,510);
	glVertex2f(190,525);
	glVertex2f(240,525);
    glVertex2f(190,600);
	glVertex2f(240,600);
	glVertex2f(190,585);
	glVertex2f(240,585);
	glEnd();

	glColor3f(0.0,0.9,0.2);
	glBegin(GL_POLYGON);
	glVertex2f(200,525);
	glVertex2f(200,560);
	glVertex2f(215,585);
	glVertex2f(230,560);
    glVertex2f(230,525);
    glEnd();

//right side
	//first
	glColor3f(0.76,0.49,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(710,500);
	glVertex2f(710,650);
	glVertex2f(750,650);
	glVertex2f(750,500);
	glEnd();
	//inside
	glColor3f(0.7,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(720,550);
	glVertex2f(720,600);
	glVertex2f(740,600);
	glVertex2f(740,550);
	glEnd();
	//top
	glColor3f(0.2,0.1,0.0);//1
	glBegin(GL_POLYGON);
	glVertex2f(710,650);
	glVertex2f(710,655);
	glVertex2f(750,655);
	glVertex2f(750,650);
	glEnd();
		glColor3f(0.2,0.8,0.0);//2
	glBegin(GL_POLYGON);
	glVertex2f(715,655);
	glVertex2f(715,660);
	glVertex2f(745,660);
	glVertex2f(745,655);
	glEnd();
	//doom
		glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(715,660);
	glVertex2f(710,682);
	glVertex2f(715,695);
	glVertex2f(730,705);
	glVertex2f(745,695);
	glVertex2f(750,682);
	glVertex2f(745,660);

	glEnd();
//second
	glColor3f(0.76,0.49,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(800,500);
	glVertex2f(800,650);
	glVertex2f(840,650);
	glVertex2f(840,500);
	glEnd();
	//inside
	glColor3f(0.7,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(810,550);
	glVertex2f(810,600);
	glVertex2f(830,600);
	glVertex2f(830,550);
	glEnd();
	//top
	glColor3f(0.2,0.1,0.0);//1
	glBegin(GL_POLYGON);
	glVertex2f(800,655);
	glVertex2f(800,650);
	glVertex2f(840,650);
	glVertex2f(840,655);
	glEnd();
	glColor3f(0.2,0.8,0.0);//2
	glBegin(GL_POLYGON);
	glVertex2f(805,660);
	glVertex2f(805,655);
	glVertex2f(835,655);
	glVertex2f(835,660);
	glEnd();
	//doom
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(805,660);
	glVertex2f(800,682);
	glVertex2f(805,695);
	glVertex2f(820,705);
	glVertex2f(835,695);
	glVertex2f(840,682);
	glVertex2f(835,660);
	glEnd();
//right middle
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(750,500);
	glVertex2f(750,610);
	glVertex2f(800,610);
	glVertex2f(800,500);
	glEnd();
	//inside middle
glColor3f(0.0,0.9,0.2);
	glBegin(GL_LINES);
	glVertex2f(750,510);
	glVertex2f(800,510);
	glVertex2f(750,525);
	glVertex2f(800,525);
	glVertex2f(750,600);
	glVertex2f(800,600);
	glVertex2f(750,585);
	glVertex2f(800,585);
	glEnd();

	glColor3f(0.0,0.7,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(760,525);
	glVertex2f(760,560);
	glVertex2f(775,585);
	glVertex2f(790,560);
	glVertex2f(790,525);
	glEnd();



	//center
	glColor3f(0.76,0.49,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(280,500);
	glVertex2f(280,590);
	glVertex2f(710,590);
	glVertex2f(710,500);
	glEnd();

	glColor3f(0.8,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(280,560);
	glVertex2f(710,560);
	glEnd();
	//dwaraka
	glColor3f(0.98,0.95,0.0);//1
	glBegin(GL_POLYGON);
	glVertex2f(285,500);
	glVertex2f(285,545);
	glVertex2f(304,555);
	glVertex2f(325,545);
	glVertex2f(325,500);
	glEnd();
//2
	glBegin(GL_POLYGON);
	glVertex2f(705,500);
	glVertex2f(705,545);
	glVertex2f(684,555);
	glVertex2f(665,545);
	glVertex2f(665,500);
	glEnd();
	//3
	glBegin(GL_POLYGON);
	glVertex2f(335,500);
	glVertex2f(335,545);
	glVertex2f(354,555);
	glVertex2f(375,545);
	glVertex2f(375,500);
	glEnd();
//4
	glBegin(GL_POLYGON);
	glVertex2f(655,500);
	glVertex2f(655,545);
	glVertex2f(636,555);
	glVertex2f(615,545);
	glVertex2f(615,500);
	glEnd();
//5
	glBegin(GL_POLYGON);
	glVertex2f(385,500);
	glVertex2f(385,545);
	glVertex2f(395,555);
	glVertex2f(405,545);
	glVertex2f(405,500);
	glEnd();
//6
	glBegin(GL_POLYGON);
	glVertex2f(605,500);
	glVertex2f(605,545);
	glVertex2f(595,555);
	glVertex2f(585,545);
	glVertex2f(585,500);
	glEnd();
//7
	glBegin(GL_POLYGON);
	glVertex2f(415,500);
	glVertex2f(415,540);
	glVertex2f(455,550);
	glVertex2f(495,555);
	glVertex2f(535,550);
	glVertex2f(575,540);
	glVertex2f(575,500);
	glEnd();
	//upper part
//curve1
	glColor3f(0.2,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(435,590);
	glVertex2f(463,620);
	glVertex2f(495,615);
	glVertex2f(523,620);
	glVertex2f(555,590);
	glEnd();
	//curve2
	glColor3f(0.0,0.2,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(455,590);
	glVertex2f(470,600);
	glVertex2f(495,605);
	glVertex2f(520,600);
	glVertex2f(535,590);
	glEnd();
	//curve3
glColor3f(0.0,1.0,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(465,590);
	glVertex2f(480,595);
	glVertex2f(495,600);
	glVertex2f(510,595);
	glVertex2f(525,590);
	glEnd();
	//box1
	glColor3f(0.2,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(463,620);
	glVertex2f(463,650);
	glVertex2f(523,650);
	glVertex2f(523,620);
	glVertex2f(495,615);
	glEnd();
	//box2
	glColor3f(0.34,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(479,615);
	glVertex2f(479,670);
	glVertex2f(509,670);
	glVertex2f(509,615);
	glVertex2f(495,615);
	glEnd();
	//center doom1
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(479,670);
	glVertex2f(474,692);
	glVertex2f(479,705);
	glVertex2f(494,715);
	glVertex2f(509,705);
	glVertex2f(514,692);
	glVertex2f(509,670);
	glEnd();
	//center side box 1
glColor3f(0.74,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(425,590);
	glVertex2f(425,620);
	glVertex2f(435,620);
	glVertex2f(435,590);
	glEnd();
//2
	glColor3f(0.74,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(555,590);
	glVertex2f(555,620);
	glVertex2f(565,620);
	glVertex2f(565,590);
	glEnd();
	//1doom
glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(425,620);
	glVertex2f(420,625);
	glVertex2f(425,630);
	glVertex2f(430,640);
	glVertex2f(435,630);
	glVertex2f(440,625);
	glVertex2f(435,620);
	glEnd();
	//2doom
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(555,620);
	glVertex2f(550,625);
	glVertex2f(555,630);
	glVertex2f(560,640);
	glVertex2f(565,630);
	glVertex2f(570,625);
	glVertex2f(565,620);
	glEnd();
	//center side1left
    glColor3f(0.74,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(304,590);
	glVertex2f(304,600);
	glVertex2f(395,600);
	glVertex2f(395,590);
	glEnd();
	//2
	glColor3f(0.94,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(309,600);
	glVertex2f(309,605);
	glVertex2f(390,605);
	glVertex2f(390,600);
	glEnd();
	//3
	glColor3f(0.24,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(314,605);
	glVertex2f(314,610);
	glVertex2f(385,610);
	glVertex2f(385,605);
	glEnd();
	//box side left
	glColor3f(0.74,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(324,610);
	glVertex2f(324,625);
	glVertex2f(375,625);
	glVertex2f(375,610);
	glEnd();
	//left doom
glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(324,625);
	glVertex2f(319,640);
	glVertex2f(324,660);
	glVertex2f(350,670);
	glVertex2f(375,660);
	glVertex2f(380,640);
	glVertex2f(375,625);
	glEnd();
//center side1 right
	glColor3f(0.74,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(595,590);
	glVertex2f(595,600);
	glVertex2f(684,600);
	glVertex2f(684,590);
	glEnd();
	//2
	glColor3f(0.94,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(600,600);
	glVertex2f(600,605);
	glVertex2f(679,605);
	glVertex2f(679,600);
	glEnd();
//3
	glColor3f(0.24,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(605,605);
	glVertex2f(605,610);
	glVertex2f(674,610);
	glVertex2f(674,605);
	glEnd();
	//right side box
	glColor3f(0.74,0.45,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(615,610);
	glVertex2f(615,625);
	glVertex2f(664,625);
	glVertex2f(664,610);
	glEnd();
	//right doom
glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(615,625);
	glVertex2f(610,640);
	glVertex2f(615,660);
	glVertex2f(640,670);
	glVertex2f(664,660);
	glVertex2f(669,640);
	glVertex2f(664,625);
	glEnd();
	//
	glColor3f(0.13,0.24,0.0);
	glBegin(GL_LINES);
	glVertex2f(280,565);
	glVertex2f(710,565);
	glVertex2f(280,585);
	glVertex2f(710,585);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(280,565);
	glVertex2f(330,585);
	glVertex2f(380,565);
	glVertex2f(430,585);
	glVertex2f(480,565);
	glVertex2f(530,585);
	glVertex2f(580,565);
	glVertex2f(630,585);
	glVertex2f(680,565);
	glVertex2f(710,585);
	glEnd();
	//top of dooms
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POINTS);
	glVertex2f(640,670);
	glVertex2f(350,670);
	glVertex2f(560,640);
	glVertex2f(430,640);
	glVertex2f(494,715);
	glVertex2f(820,705);
	glVertex2f(730,705);
	glVertex2f(170,705);
	glVertex2f(260,705);
    glEnd();

}



void roads()
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(0,100);
	glVertex2i(1000,100);
	glVertex2i(1000,200);
	glVertex2i(0,200);
	glEnd();


	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(100,148);
	glVertex2i(150,148);
	glVertex2i(150,152);
	glVertex2i(100,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(200,148);
	glVertex2i(250,148);
	glVertex2i(250,152);
	glVertex2i(200,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(300,148);
	glVertex2i(350,148);
	glVertex2i(350,152);
	glVertex2i(300,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(400,148);
	glVertex2i(450,148);
	glVertex2i(450,152);
	glVertex2i(400,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(500,148);
	glVertex2i(550,148);
	glVertex2i(550,152);
	glVertex2i(500,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(600,148);
	glVertex2i(650,148);
	glVertex2i(650,152);
	glVertex2i(600,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(700,148);
	glVertex2i(750,148);
	glVertex2i(750,152);
	glVertex2i(700,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(900,148);
	glVertex2i(950,148);
	glVertex2i(950,152);
	glVertex2i(900,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(800,148);
	glVertex2i(850,148);
	glVertex2i(850,152);
	glVertex2i(800,152);
	glEnd();
    // connection from palace to road
	glColor3f(0.98,0.16,0.22);
    glBegin(GL_POLYGON);
	glVertex2f(445,500);
	glVertex2f(545,500);
	glVertex2f(565,415);
	glVertex2f(620,200);
	glVertex2f(365,200);
	glVertex2f(420,415);
	glEnd();
}
void footpath()
{
	glBegin(GL_POLYGON);
	glColor3f(0.65,0.25,0.25);
	glVertex2f(0,325);
	glVertex2f(999,325);
	glVertex2f(999,415);
	glVertex2f(0,415);
	glEnd();
}

void mud()
{
glColor3f(0.85,0.75,0.65);
	glBegin(GL_POLYGON);
	glVertex2f(0,325);
	glVertex2f(999,325);
		glVertex2f(999,0);
		glVertex2f(0,0);
		glEnd();


}
void fence()
{
	//left lines
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(415,500);
	glVertex2f(400,450);
	glVertex2f(0,450);
    glEnd();
    glBegin(GL_LINE_STRIP);
	glVertex2f(445,500);
	glVertex2f(420,415);
	glVertex2f(0,415);
    glEnd();
	//right lines
	glBegin(GL_LINE_STRIP);
	glVertex2f(575,500);
	glVertex2f(590,450);
	glVertex2f(999,450);
    glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(545,500);
	glVertex2f(565,415);
	glVertex2f(999,415);
    glEnd();
	//left side

    glBegin(GL_LINE_STRIP);
	glVertex2f(0,415);
	glVertex2f(20,450);
	glVertex2f(40,415);
	glVertex2f(60,450);
	glVertex2f(80,415);
	glVertex2f(100,450);
	glVertex2f(120,415);
	glVertex2f(140,450);
	glVertex2f(160,415);
	glVertex2f(180,450);
	glVertex2f(200,415);
	glVertex2f(220,450);
	glVertex2f(240,415);
	glVertex2f(260,450);
	glVertex2f(280,415);
	glVertex2f(300,450);
	glVertex2f(320,415);
	glVertex2f(340,450);
	glVertex2f(360,415);
	glVertex2f(380,450);
	glVertex2f(400,415);
	glVertex2f(420,415);
	glVertex2f(400,450);
	glVertex2f(432,455);
	glVertex2f(408,480);
	glVertex2f(445,500);
	glEnd();


//right side
	  glBegin(GL_LINE_STRIP);
	glVertex2f(999,415);
	glVertex2f(979,450);
	glVertex2f(959,415);
	glVertex2f(939,450);
	glVertex2f(919,415);
	glVertex2f(899,450);
	glVertex2f(879,415);
	glVertex2f(859,450);
	glVertex2f(839,415);
	glVertex2f(819,450);
	glVertex2f(799,415);
	glVertex2f(779,450);
	glVertex2f(759,415);
	glVertex2f(739,450);
	glVertex2f(719,415);
	glVertex2f(699,450);
	glVertex2f(679,415);
	glVertex2f(659,450);
	glVertex2f(639,415);
	glVertex2f(619,450);
	glVertex2f(599,415);
	glVertex2f(590,450);
	glVertex2f(560,435);
	glVertex2f(585,470);
	glVertex2f(550,480);
	glVertex2f(575,500);
	glEnd();
	//fence infront of crowd left
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_POLYGON);
	glVertex2f(0,325);
	glVertex2f(500,325);
		glVertex2f(500,300);
		glVertex2f(0,300);
		glEnd();
int x=0,y=300,i;
for(i=0;i<150;i++)
{glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(x,y);
	glVertex2f(x,y+25);
	glEnd();
	x=x+3;
}
//fence infront of crowd right
glColor3f(0.9,0.9,0.9);
glBegin(GL_POLYGON);
	glVertex2f(580,325);
	glVertex2f(999,325);
		glVertex2f(999,300);
		glVertex2f(580,300);
		glEnd();
int p=580,q=300,j;
for(j=0;j<150;j++)
{glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(p,q);
	glVertex2f(p,q+25);
	glEnd();
	p=p+3;
}
}
void sky()
{
	glColor3f(0.6,0.9,0.99);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(0,999);
	glVertex2i(999,999);
	glVertex2i(999,0);
	glEnd();
}

void chamundihill()
{//vechile front

	glColor3f(0.2,0.0,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(500,180);
	glVertex2f(500,210);
glVertex2f(550,280);
glVertex2f(570,280);
glVertex2f(570,180);
glEnd();
//window
glColor3f(0.2,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(540,235);
	glVertex2f(540,260);
glVertex2f(560,260);
glVertex2f(560,235);
glEnd();

//middle
glColor3f(0.2,0.0,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(570,180);
	glVertex2f(570,210);
glVertex2f(720,210);
glVertex2f(720,180);
glEnd();
//temple
glColor3f(0.8,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(600,210);
	glVertex2f(600,260);
	glVertex2f(625,350);
	glVertex2f(660,350);
glVertex2f(685,260);
glVertex2f(685,210);
glEnd();
//top
glColor3f(0.7,0.7,0.0);//1
	glBegin(GL_POLYGON);
	glVertex2f(625,350);
	glVertex2f(625,360);
glVertex2f(630,365);
glVertex2f(628,356);
glVertex2f(628,350);
glEnd();
glColor3f(0.7,0.7,0.0);//2
	glBegin(GL_POLYGON);
	glVertex2f(660,350);
	glVertex2f(660,360);
glVertex2f(655,365);
glVertex2f(657,356);
glVertex2f(657,350);
glEnd();
glBegin(GL_POINTS);//top middle
glVertex2f(633,351);
glVertex2f(652,351);
glVertex2f(643,351);
glEnd();
 //center boxes
glColor3f(0.8,0.79,0.0);//1
glBegin(GL_POLYGON);
glVertex2f(635,320);
glVertex2f(635,340);
glVertex2f(650,340);
glVertex2f(650,320);
glEnd();

glColor3f(0.8,0.79,0.0);//2
glBegin(GL_POLYGON);
glVertex2f(635,295);
glVertex2f(635,315);
glVertex2f(650,315);
glVertex2f(650,295);
glEnd();

glColor3f(0.8,0.79,0.0);//3
glBegin(GL_POLYGON);
glVertex2f(635,270);
glVertex2f(635,290);
glVertex2f(650,290);
glVertex2f(650,270);
glEnd();

glColor3f(0.8,0.79,0.0);//door
glBegin(GL_POLYGON);
glVertex2f(625,210);
glVertex2f(625,235);
glVertex2f(643,250);
glVertex2f(660,235);
glVertex2f(660,210);
glEnd();
glBegin(GL_LINES);//middle lines
glVertex2f(600,260);
glVertex2f(685,260);
glVertex2f(602,265);
glVertex2f(683,265);
glEnd();
 //wheels
glColor3f(0.0,0.0,0.0);//1
glBegin(GL_POLYGON);
glVertex2f(525,155);
glVertex2f(525,180);
glVertex2f(550,180);
glVertex2f(550,155);
glEnd();
glColor3f(0.0,0.0,0.0);//2
glBegin(GL_POLYGON);
glVertex2f(600,155);
glVertex2f(600,180);
glVertex2f(625,180);
glVertex2f(625,155);
glEnd();
glColor3f(0.0,0.0,0.0);//3
glBegin(GL_POLYGON);
glVertex2f(665,155);
glVertex2f(665,180);
glVertex2f(690,180);
glVertex2f(690,155);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POINTS);
glVertex2f(538,168);
glVertex2f(613,168);
glVertex2f(678,168);
glEnd();

glColor3f(1.0,0.0,0.0);
	glRasterPos2i(540,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'C');
	glRasterPos2i(550,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'H');
   glRasterPos2i(560,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'A');
   glRasterPos2i(570,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'M');
   glRasterPos2i(580,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'U');
   glRasterPos2i(590,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'N');
   glRasterPos2i(600,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'D');
   glRasterPos2i(610,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'I');
   glRasterPos2i(640,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'T');
   glRasterPos2i(650,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');
   glRasterPos2i(660,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'M');
   glRasterPos2i(670,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'P');
   glRasterPos2i(680,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'L');
   glRasterPos2i(690,190);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,'E');

}



void streetlights()
{//1
	//pole
	int x=365,y=200,p=365,q=300,i;
	for(i=0;i<3;i++)
	{
		glColor3f(0.60,0.60,0.60);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x,y+100);
	glVertex2f(x+5,y+100);
	glVertex2f(x+5,y);
	glEnd();
	//light
glColor3f(0.95,0.95,0.95);
	glBegin(GL_POLYGON);
	glVertex2f(p,q);
	glVertex2f(p-5,q+10);
	glVertex2f(p+2,q+20);
	glVertex2f(p+10,q+10);
	glVertex2f(p+5,q);
	glEnd();
	x=x+25;y=y+90;p=p+25;q=q+90;
	}
	//right
	//pole
	int a=615,b=200,c=615,d=300,j;
	for(j=0;j<3;j++)
	{
		glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(a,b);
	glVertex2f(a,b+100);
	glVertex2f(a+5,b+100);
	glVertex2f(a+5,b);
	glEnd();
	//light
glColor3f(0.95,0.95,0.95);
	glBegin(GL_POLYGON);
	glVertex2f(c,d);
	glVertex2f(c-5,d+10);
	glVertex2f(c+2,d+20);
	glVertex2f(c+10,d+10);
	glVertex2f(c+5,d);
	glEnd();
	a=a-25;b=b+90;c=c-25;d=d+90;
	}
	//side of main road
	//left
	//pole
	int e=5,f=200,g=5,h=250,k;
	for(k=0;k<5;k++)
	{
		glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(e,f);
	glVertex2f(e,f+50);
	glVertex2f(e+5,f+50);
	glVertex2f(e+5,f);
	glEnd();
	//light
glColor3f(0.95,0.95,0.95);
	glBegin(GL_POLYGON);
	glVertex2f(g,h);
	glVertex2f(g-5,h+10);
	glVertex2f(g+2,h+20);
	glVertex2f(g+10,h+10);
	glVertex2f(g+5,h);
	glEnd();
	g=g+80;e=e+80;
	}
	//right
	//pole
	int l=990,m=200,n=990,r=250,s;
	for(s=0;s<5;s++)
	{
		glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(l,m);
	glVertex2f(l,m+50);
	glVertex2f(l+5,m+50);
	glVertex2f(l+5,m);
	glEnd();
	//light
glColor3f(0.95,0.95,0.95);
	glBegin(GL_POLYGON);
	glVertex2f(n,r);
	glVertex2f(n-5,r+10);
	glVertex2f(n+2,r+20);
	glVertex2f(n+10,r+10);
	glVertex2f(n+5,r);
	glEnd();
	l=l-80;n=n-80;}
}
void circle1(GLfloat x, GLfloat y, GLfloat radius)
  {
    float angle;
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
	{
        angle = i*2*(M_PI/100);
        glVertex2f(x+(cos(angle)*radius),y+(sin(angle)*radius));
    }
    glEnd();
  }


void sun1()
{
	//color();
	glColor3f(1.0,1.0,0.0);
	circle1(320.0,700.0,30.0);

}

void clouds()
{


	glColor3f(1.0,1.0,1.0);
	circle1(850.0,800.0,20.0);
	circle1(875.0,790.0,30.0);
	circle1(910.0,793.0,40.0);
    circle1(950.0,790.0,30.0);


	glColor3f(1.0,1.0,1.0);
	circle1(450.0,900.0,20.0);
	circle1(475.0,890.0,30.0);
	circle1(510.0,893.0,40.0);
    circle1(550.0,890.0,30.0);

	glColor3f(1.0,1.0,1.0);
	circle1(150.0,800.0,20.0);
	circle1(175.0,790.0,30.0);
	circle1(210.0,793.0,40.0);
    circle1(250.0,790.0,30.0);
	}
//yellow colored palace
void night4y()
{//dwarakas//left and right total4
	glColor3f(1.0,1.0,0.0);
	int x=285,y=500;
    for(y=500;y<545;y+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x,y);
		glEnd();
	}
	int x1=325,y1=500;
	 for(y1=500;y1<545;y1+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x1,y1);
		glEnd();
	}

	  for(int x3=285,y3=545;y3<=560;x3+=5.0,y3+=5.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x3,y3);
		glEnd();
	}
  for(int x4=325,y4=545;y4<=563;x4-=4.0,y4+=4.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x4,y4);
		glEnd();
	}
}
  void night5y()
  {

	  glColor3f(1.0,1.0,0.0);
  int x5=385,y5=500;
   for(y5=500;y5<545;y5+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x5,y5);
		glEnd();
	}
   int x8=405,y8=500;
    for(y8=500;y8<545;y8+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x8,y8);
		glEnd();
	}


	  for(int x6=385,y6=545;y6<=555;x6+=5.0,y6+=5.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x6,y6);
		glEnd();
	}
  for(int x7=405,y7=545;y7<=555;x7-=4.0,y7+=4.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x7,y7);
		glEnd();
	}
}
void night1y()
{   //side walls
	int x=150,y=500;
	glColor3f(1.0,1.0,0.0);
	for(x=150;x<=190;x+=7.5)
	{
	for(y=500;y<=650;y+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x,y);
		glEnd();
	}

	}
	//upper part of wall
	int x1=153,y1=655;
	for(x1=153;x1<=185;x1+=7.5)
	{
	for(y1=655;y1<=665;y1+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x1,y1);
		glEnd();
	}

	}
	//doom
	glColor3f(1.0,1.0,0.0);
glBegin(GL_LINE_STRIP);
    glVertex2f(153,660);
	glVertex2f(147,682);
    glVertex2f(153,695);
	glVertex2f(170,705);
	glVertex2f(183,695);
	glVertex2f(190,682);
	glVertex2f(183,660);
	glEnd();
	glBegin(GL_POINTS);
	glVertex2f(170,705);
	glEnd();

}
void night2y()
{
	glColor3f(1.0,1.0,0.0);
	int x3=190,y3=500;
	for(x3=190;x3<=240;x3+=7.5)
	{
		for(y3=500;y3<=610;y3+=7.5)
		{
			glBegin(GL_POINTS);
			glVertex2f(x3,y3);
			glEnd();
		}
	}


}

void night3y()
{
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(150,500);
	glVertex2f(840,500);
	glEnd();

	//line strip above the dwaraka

	glBegin(GL_LINE_STRIP);
	glVertex2f(280,565);
	glVertex2f(330,585);
	glVertex2f(380,565);
	glVertex2f(430,585);
	glVertex2f(480,565);
	glVertex2f(530,585);
	glVertex2f(580,565);
	glVertex2f(630,585);
	glVertex2f(680,565);
	glVertex2f(710,585);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(435,590);
	glVertex2f(463,620);
	glVertex2f(495,615);
	glVertex2f(523,620);
	glVertex2f(555,590);
	glEnd();
	//curve2
	glBegin(GL_LINE_STRIP);
	glVertex2f(455,590);
	glVertex2f(470,600);
	glVertex2f(495,605);
	glVertex2f(520,600);
	glVertex2f(535,590);
	glEnd();
	//curve3
	glBegin(GL_LINE_STRIP);
	glVertex2f(465,590);
	glVertex2f(480,595);
	glVertex2f(495,600);
	glVertex2f(510,595);
	glVertex2f(525,590);
	glEnd();
	//box1
	glBegin(GL_LINE_STRIP);
	glVertex2f(463,620);
	glVertex2f(463,650);
	glVertex2f(479,650);
	glEnd();
    glBegin(GL_LINE_STRIP);
	glVertex2f(509,650);
	glVertex2f(524,650);
	glVertex2f(524,620);
	glEnd();

	//box2
	glBegin(GL_LINE_STRIP);
	glVertex2f(479,615);
	glVertex2f(479,670);
	glVertex2f(509,670);
	glVertex2f(509,615);
	glVertex2f(495,615);
	glEnd();
	//center doom1
	glBegin(GL_LINE_STRIP);
	glVertex2f(479,670);
	glVertex2f(474,692);
	glVertex2f(479,705);
	glVertex2f(494,715);
	glVertex2f(509,705);
	glVertex2f(514,692);
	glVertex2f(509,670);
	glEnd();
   /*glColor3f(0.6,0.0,0.0);
	glBegin(GL_POINTS);
    glVertex2f(494,717);
	glEnd();*/

	//center side box 1
	glBegin(GL_LINE_STRIP);
	glVertex2f(425,590);
	glVertex2f(425,620);
	glVertex2f(435,620);
	glVertex2f(435,590);
	glEnd();
//2
	glBegin(GL_LINE_STRIP);
	glVertex2f(555,590);
	glVertex2f(555,620);
	glVertex2f(565,620);
	glVertex2f(565,590);
	glEnd();
	//1doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(425,620);
	glVertex2f(420,625);
	glVertex2f(425,630);
	glVertex2f(430,640);
	glVertex2f(435,630);
	glVertex2f(440,625);
	glVertex2f(435,620);
	glEnd();
	//2doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(555,620);
	glVertex2f(550,625);
	glVertex2f(555,630);
	glVertex2f(560,640);
	glVertex2f(565,630);
	glVertex2f(570,625);
	glVertex2f(565,620);
	glEnd();
	//center side1left
	glBegin(GL_LINE_STRIP);
	glVertex2f(304,590);
	glVertex2f(304,600);
	glVertex2f(395,600);
	glVertex2f(395,590);
	glEnd();
	//2
	glBegin(GL_LINE_STRIP);
	glVertex2f(309,600);
	glVertex2f(309,605);
	glVertex2f(390,605);
	glVertex2f(390,600);
	glEnd();
	//3
	glBegin(GL_LINE_STRIP);
	glVertex2f(314,605);
	glVertex2f(314,610);
	glVertex2f(385,610);
	glVertex2f(385,605);
	glEnd();
	//box side left
	glBegin(GL_LINE_STRIP);
	glVertex2f(324,610);
	glVertex2f(324,625);
	glVertex2f(375,625);
	glVertex2f(375,610);
	glEnd();
	//left doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(324,625);
	glVertex2f(319,640);
	glVertex2f(324,660);
	glVertex2f(350,670);
	glVertex2f(375,660);
	glVertex2f(380,640);
	glVertex2f(375,625);
	glEnd();
//center side1 right
	glBegin(GL_LINE_STRIP);
	glVertex2f(595,590);
	glVertex2f(595,600);
	glVertex2f(684,600);
	glVertex2f(684,590);
	glEnd();
	//2
	glBegin(GL_LINE_STRIP);
	glVertex2f(600,600);
	glVertex2f(600,605);
	glVertex2f(679,605);
	glVertex2f(679,600);
	glEnd();
//3
	glBegin(GL_LINE_STRIP);
	glVertex2f(605,605);
	glVertex2f(605,610);
	glVertex2f(674,610);
	glVertex2f(674,605);
	glEnd();
	//right side box
	glBegin(GL_LINE_STRIP);
	glVertex2f(615,610);
	glVertex2f(615,625);
	glVertex2f(664,625);
	glVertex2f(664,610);
	glEnd();
	//right doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(615,625);
	glVertex2f(610,640);
	glVertex2f(615,660);
	glVertex2f(640,670);
	glVertex2f(664,660);
	glVertex2f(669,640);
	glVertex2f(664,625);
	glEnd();
	//
	int x1=280,y1=565;
	for(x1=280;x1<=710;x1+=7.5)
	{
	glBegin(GL_POINTS);
	glVertex2f(x1,y1);
	glEnd();
	}
	int x2=280,y2=585;
	for(x2=280;x2<=710;x2+=7.5)
	{
	glBegin(GL_POINTS);
	glVertex2f(x2,y2);
	glEnd();
	}

	night4y();
	glTranslatef(50,0,0);
	night4y();
	glTranslatef(280,0,0);
	night4y();
	glTranslatef(50,0,0);
	night4y();


}
void night6y()
{
	glColor3f(1.0,1.0,0.0);
    glBegin(GL_LINE_STRIP);
	glVertex2f(415,500);
	glVertex2f(415,540);
	glVertex2f(455,550);
	glVertex2f(495,555);
	glVertex2f(535,550);
	glVertex2f(575,540);
	glVertex2f(575,500);
	glEnd();

}
//red colored palace
void night4r()
{//dwarakas//left and right total4
	glColor3f(1.0,0.0,0.0);

	int x=285,y=500;
    for(y=500;y<545;y+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x,y);
		glEnd();
	}
	glColor3f(1.0,0.0,0.0);
	int x1=325,y1=500;
	 for(y1=500;y1<545;y1+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x1,y1);
		glEnd();
	}
	 glColor3f(1.0,0.0,0.0);
	  for(int x3=285,y3=545;y3<=560;x3+=5.0,y3+=5.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x3,y3);
		glEnd();
	}
	  glColor3f(1.0,0.0,0.0);
  for(int x4=325,y4=545;y4<=563;x4-=4.0,y4+=4.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x4,y4);
		glEnd();
	}
}
  void night5r()
  {
	  glColor3f(1.0,0.0,0.0);
  int x5=385,y5=500;
   for(y5=500;y5<545;y5+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x5,y5);
		glEnd();
	}
   int x8=405,y8=500;
   glColor3f(1.0,0.0,0.0);
    for(y8=500;y8<545;y8+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x8,y8);
		glEnd();
	}

	 glColor3f(1.0,0.0,0.0);
	  for(int x6=385,y6=545;y6<=555;x6+=5.0,y6+=5.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x6,y6);
		glEnd();
	}
	  glColor3f(1.0,0.0,0.0);
  for(int x7=405,y7=545;y7<=555;x7-=4.0,y7+=4.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x7,y7);
		glEnd();
	}
}
void night1r()
{   //side walls
	int x=150,y=500;
	glColor3f(1.0,0.0,0.0);
	for(x=150;x<=190;x+=7.5)
	{
	for(y=500;y<=650;y+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x,y);
		glEnd();
	}

	}
	//upper part of wall
	int x1=153,y1=655;
glColor3f(1.0,0.0,0.0);
	for(x1=153;x1<=185;x1+=7.5)
	{
	for(y1=655;y1<=665;y1+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x1,y1);
		glEnd();
	}

	}
	//doom
	glColor3f(1.0,0.0,0.0);
glBegin(GL_LINE_STRIP);
    glVertex2f(153,660);
	glVertex2f(147,682);
    glVertex2f(153,695);
	glVertex2f(170,705);
	glVertex2f(183,695);
	glVertex2f(190,682);
	glVertex2f(183,660);
	glEnd();
	glBegin(GL_POINTS);
	glVertex2f(170,705);
	glEnd();

}
void night2r()
{
	glColor3f(1.0,0.0,0.0);
	int x3=190,y3=500;
	for(x3=190;x3<=240;x3+=7.5)
	{
		for(y3=500;y3<=610;y3+=7.5)
		{
			glBegin(GL_POINTS);
			glVertex2f(x3,y3);
			glEnd();
		}
	}


}

void night3r()
{
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(150,500);
	glVertex2f(840,500);
	glEnd();

	//line strip above the dwaraka

	glBegin(GL_LINE_STRIP);
	glVertex2f(280,565);
	glVertex2f(330,585);
	glVertex2f(380,565);
	glVertex2f(430,585);
	glVertex2f(480,565);
	glVertex2f(530,585);
	glVertex2f(580,565);
	glVertex2f(630,585);
	glVertex2f(680,565);
	glVertex2f(710,585);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(435,590);
	glVertex2f(463,620);
	glVertex2f(495,615);
	glVertex2f(523,620);
	glVertex2f(555,590);
	glEnd();
	//curve2
	glBegin(GL_LINE_STRIP);
	glVertex2f(455,590);
	glVertex2f(470,600);
	glVertex2f(495,605);
	glVertex2f(520,600);
	glVertex2f(535,590);
	glEnd();
	//curve3
	glBegin(GL_LINE_STRIP);
	glVertex2f(465,590);
	glVertex2f(480,595);
	glVertex2f(495,600);
	glVertex2f(510,595);
	glVertex2f(525,590);
	glEnd();
	//box1
	glBegin(GL_LINE_STRIP);
	glVertex2f(463,620);
	glVertex2f(463,650);
	glVertex2f(479,650);
	glEnd();
    glBegin(GL_LINE_STRIP);
	glVertex2f(509,650);
	glVertex2f(524,650);
	glVertex2f(524,620);
	glEnd();

	//box2
	glBegin(GL_LINE_STRIP);
	glVertex2f(479,615);
	glVertex2f(479,670);
	glVertex2f(509,670);
	glVertex2f(509,615);
	glVertex2f(495,615);
	glEnd();
	//center doom1
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(479,670);
	glVertex2f(474,692);
	glVertex2f(479,705);
	glVertex2f(494,715);
	glVertex2f(509,705);
	glVertex2f(514,692);
	glVertex2f(509,670);
	glEnd();
   /*glColor3f(0.6,0.0,0.0);
	glBegin(GL_POINTS);
    glVertex2f(494,717);
	glEnd();*/

	//center side box 1
	glBegin(GL_LINE_STRIP);
	glVertex2f(425,590);
	glVertex2f(425,620);
	glVertex2f(435,620);
	glVertex2f(435,590);
	glEnd();
//2
	glBegin(GL_LINE_STRIP);
	glVertex2f(555,590);
	glVertex2f(555,620);
	glVertex2f(565,620);
	glVertex2f(565,590);
	glEnd();
	//1doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(425,620);
	glVertex2f(420,625);
	glVertex2f(425,630);
	glVertex2f(430,640);
	glVertex2f(435,630);
	glVertex2f(440,625);
	glVertex2f(435,620);
	glEnd();
	//2doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(555,620);
	glVertex2f(550,625);
	glVertex2f(555,630);
	glVertex2f(560,640);
	glVertex2f(565,630);
	glVertex2f(570,625);
	glVertex2f(565,620);
	glEnd();
	//center side1left
	glBegin(GL_LINE_STRIP);
	glVertex2f(304,590);
	glVertex2f(304,600);
	glVertex2f(395,600);
	glVertex2f(395,590);
	glEnd();
	//2
	glBegin(GL_LINE_STRIP);
	glVertex2f(309,600);
	glVertex2f(309,605);
	glVertex2f(390,605);
	glVertex2f(390,600);
	glEnd();
	//3
	glBegin(GL_LINE_STRIP);
	glVertex2f(314,605);
	glVertex2f(314,610);
	glVertex2f(385,610);
	glVertex2f(385,605);
	glEnd();
	//box side left
	glBegin(GL_LINE_STRIP);
	glVertex2f(324,610);
	glVertex2f(324,625);
	glVertex2f(375,625);
	glVertex2f(375,610);
	glEnd();
	//left doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(324,625);
	glVertex2f(319,640);
	glVertex2f(324,660);
	glVertex2f(350,670);
	glVertex2f(375,660);
	glVertex2f(380,640);
	glVertex2f(375,625);
	glEnd();
//center side1 right
	glBegin(GL_LINE_STRIP);
	glVertex2f(595,590);
	glVertex2f(595,600);
	glVertex2f(684,600);
	glVertex2f(684,590);
	glEnd();
	//2
	glBegin(GL_LINE_STRIP);
	glVertex2f(600,600);
	glVertex2f(600,605);
	glVertex2f(679,605);
	glVertex2f(679,600);
	glEnd();
//3
	glBegin(GL_LINE_STRIP);
	glVertex2f(605,605);
	glVertex2f(605,610);
	glVertex2f(674,610);
	glVertex2f(674,605);
	glEnd();
	//right side box
	glBegin(GL_LINE_STRIP);
	glVertex2f(615,610);
	glVertex2f(615,625);
	glVertex2f(664,625);
	glVertex2f(664,610);
	glEnd();
	//right doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(615,625);
	glVertex2f(610,640);
	glVertex2f(615,660);
	glVertex2f(640,670);
	glVertex2f(664,660);
	glVertex2f(669,640);
	glVertex2f(664,625);
	glEnd();
	//
	int x1=280,y1=565;
	glColor3f(1.0,0.0,0.0);
	for(x1=280;x1<=710;x1+=7.5)
	{
	glBegin(GL_POINTS);
	glVertex2f(x1,y1);
	glEnd();
	}
	int x2=280,y2=585;
	glColor3f(1.0,0.0,0.0);
	for(x2=280;x2<=710;x2+=7.5)
	{
	glBegin(GL_POINTS);
	glVertex2f(x2,y2);
	glEnd();
	}

	night4r();
	glTranslatef(50,0,0);
	night4r();
	glTranslatef(280,0,0);
	night4r();
	glTranslatef(50,0,0);
	night4r();


}
void night6r()
{
	glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINE_STRIP);
	glVertex2f(415,500);
	glVertex2f(415,540);
	glVertex2f(455,550);
	glVertex2f(495,555);
	glVertex2f(535,550);
	glVertex2f(575,540);
	glVertex2f(575,500);
	glEnd();

}
//blue colored palace
void night4b()
{//dwarakas//left and right total4
	glColor3f(0.0,0.0,1.0);
	int x=285,y=500;
    for(y=500;y<545;y+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x,y);
		glEnd();
	}
	int x1=325,y1=500;
	glColor3f(0.0,0.0,1.0);
	 for(y1=500;y1<545;y1+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x1,y1);
		glEnd();
	}
	 glColor3f(0.0,0.0,1.0);
	  for(int x3=285,y3=545;y3<=560;x3+=5.0,y3+=5.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x3,y3);
		glEnd();
	}
	  glColor3f(0.0,0.0,1.0);
  for(int x4=325,y4=545;y4<=563;x4-=4.0,y4+=4.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x4,y4);
		glEnd();
	}
}
  void night5b()
  {
	  glColor3f(0.0,0.0,1.0);
  int x5=385,y5=500;
   for(y5=500;y5<545;y5+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x5,y5);
		glEnd();
	}
   int x8=405,y8=500;
   glColor3f(0.0,0.0,1.0);
    for(y8=500;y8<545;y8+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x8,y8);
		glEnd();
	}

	 glColor3f(0.0,0.0,1.0);
	  for(int x6=385,y6=545;y6<=555;x6+=5.0,y6+=5.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x6,y6);
		glEnd();
	}
	  glColor3f(0.0,0.0,1.0);
  for(int x7=405,y7=545;y7<=555;x7-=4.0,y7+=4.0)
	{
		glBegin(GL_POINTS);
		glVertex2f(x7,y7);
		glEnd();
	}
}
void night1b()
{   //side walls
	int x=150,y=500;
	glColor3f(0.0,0.0,1.0);
	for(x=150;x<=190;x+=7.5)
	{
	for(y=500;y<=650;y+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x,y);
		glEnd();
	}

	}
	//upper part of wall
	int x1=153,y1=655;
	glColor3f(0.0,0.0,1.0);
	for(x1=153;x1<=185;x1+=7.5)
	{
	for(y1=655;y1<=665;y1+=7.5)
	{
		glBegin(GL_POINTS);
		glVertex2f(x1,y1);
		glEnd();
	}

	}
	//doom
	glColor3f(0.0,0.0,1.0);
glBegin(GL_LINE_STRIP);
    glVertex2f(153,660);
	glVertex2f(147,682);
    glVertex2f(153,695);
	glVertex2f(170,705);
	glVertex2f(183,695);
	glVertex2f(190,682);
	glVertex2f(183,660);
	glEnd();
	glBegin(GL_POINTS);
	glVertex2f(170,705);
	glEnd();

}
void night2b()
{
	glColor3f(0.0,0.0,1.0);
	int x3=190,y3=500;
	for(x3=190;x3<=240;x3+=7.5)
	{
		for(y3=500;y3<=610;y3+=7.5)
		{
			glBegin(GL_POINTS);
			glVertex2f(x3,y3);
			glEnd();
		}
	}


}

void night3b()
{
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(150,500);
	glVertex2f(840,500);
	glEnd();

	//line strip above the dwaraka

	glBegin(GL_LINE_STRIP);
	glVertex2f(280,565);
	glVertex2f(330,585);
	glVertex2f(380,565);
	glVertex2f(430,585);
	glVertex2f(480,565);
	glVertex2f(530,585);
	glVertex2f(580,565);
	glVertex2f(630,585);
	glVertex2f(680,565);
	glVertex2f(710,585);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(435,590);
	glVertex2f(463,620);
	glVertex2f(495,615);
	glVertex2f(523,620);
	glVertex2f(555,590);
	glEnd();
	//curve2
	glBegin(GL_LINE_STRIP);
	glVertex2f(455,590);
	glVertex2f(470,600);
	glVertex2f(495,605);
	glVertex2f(520,600);
	glVertex2f(535,590);
	glEnd();
	//curve3
	glBegin(GL_LINE_STRIP);
	glVertex2f(465,590);
	glVertex2f(480,595);
	glVertex2f(495,600);
	glVertex2f(510,595);
	glVertex2f(525,590);
	glEnd();
	//box1
	glBegin(GL_LINE_STRIP);
	glVertex2f(463,620);
	glVertex2f(463,650);
	glVertex2f(479,650);
	glEnd();
    glBegin(GL_LINE_STRIP);
	glVertex2f(509,650);
	glVertex2f(524,650);
	glVertex2f(524,620);
	glEnd();

	//box2
	glBegin(GL_LINE_STRIP);
	glVertex2f(479,615);
	glVertex2f(479,670);
	glVertex2f(509,670);
	glVertex2f(509,615);
	glVertex2f(495,615);
	glEnd();
	//center doom1
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(479,670);
	glVertex2f(474,692);
	glVertex2f(479,705);
	glVertex2f(494,715);
	glVertex2f(509,705);
	glVertex2f(514,692);
	glVertex2f(509,670);
	glEnd();
   /*glColor3f(0.6,0.0,0.0);
	glBegin(GL_POINTS);
    glVertex2f(494,717);
	glEnd();*/

	//center side box 1
	glBegin(GL_LINE_STRIP);
	glVertex2f(425,590);
	glVertex2f(425,620);
	glVertex2f(435,620);
	glVertex2f(435,590);
	glEnd();
//2
	glBegin(GL_LINE_STRIP);
	glVertex2f(555,590);
	glVertex2f(555,620);
	glVertex2f(565,620);
	glVertex2f(565,590);
	glEnd();
	//1doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(425,620);
	glVertex2f(420,625);
	glVertex2f(425,630);
	glVertex2f(430,640);
	glVertex2f(435,630);
	glVertex2f(440,625);
	glVertex2f(435,620);
	glEnd();
	//2doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(555,620);
	glVertex2f(550,625);
	glVertex2f(555,630);
	glVertex2f(560,640);
	glVertex2f(565,630);
	glVertex2f(570,625);
	glVertex2f(565,620);
	glEnd();
	//center side1left
	glBegin(GL_LINE_STRIP);
	glVertex2f(304,590);
	glVertex2f(304,600);
	glVertex2f(395,600);
	glVertex2f(395,590);
	glEnd();
	//2
	glBegin(GL_LINE_STRIP);
	glVertex2f(309,600);
	glVertex2f(309,605);
	glVertex2f(390,605);
	glVertex2f(390,600);
	glEnd();
	//3
	glBegin(GL_LINE_STRIP);
	glVertex2f(314,605);
	glVertex2f(314,610);
	glVertex2f(385,610);
	glVertex2f(385,605);
	glEnd();
	//box side left
	glBegin(GL_LINE_STRIP);
	glVertex2f(324,610);
	glVertex2f(324,625);
	glVertex2f(375,625);
	glVertex2f(375,610);
	glEnd();
	//left doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(324,625);
	glVertex2f(319,640);
	glVertex2f(324,660);
	glVertex2f(350,670);
	glVertex2f(375,660);
	glVertex2f(380,640);
	glVertex2f(375,625);
	glEnd();
//center side1 right
	glBegin(GL_LINE_STRIP);
	glVertex2f(595,590);
	glVertex2f(595,600);
	glVertex2f(684,600);
	glVertex2f(684,590);
	glEnd();
	//2
	glBegin(GL_LINE_STRIP);
	glVertex2f(600,600);
	glVertex2f(600,605);
	glVertex2f(679,605);
	glVertex2f(679,600);
	glEnd();
//3
	glBegin(GL_LINE_STRIP);
	glVertex2f(605,605);
	glVertex2f(605,610);
	glVertex2f(674,610);
	glVertex2f(674,605);
	glEnd();
	//right side box
	glBegin(GL_LINE_STRIP);
	glVertex2f(615,610);
	glVertex2f(615,625);
	glVertex2f(664,625);
	glVertex2f(664,610);
	glEnd();
	//right doom
	glBegin(GL_LINE_STRIP);
	glVertex2f(615,625);
	glVertex2f(610,640);
	glVertex2f(615,660);
	glVertex2f(640,670);
	glVertex2f(664,660);
	glVertex2f(669,640);
	glVertex2f(664,625);
	glEnd();
	//
	int x1=280,y1=565;
	glColor3f(0.0,0.0,1.0);
	for(x1=280;x1<=710;x1+=7.5)
	{
	glBegin(GL_POINTS);
	glVertex2f(x1,y1);
	glEnd();
	}
	int x2=280,y2=585;
	glColor3f(0.0,0.0,1.0);
	for(x2=280;x2<=710;x2+=7.5)
	{
	glBegin(GL_POINTS);
	glVertex2f(x2,y2);
	glEnd();
	}

	night4b();
	glTranslatef(50,0,0);
	night4b();
	glTranslatef(280,0,0);
	night4b();
	glTranslatef(50,0,0);
	night4b();


}
void night6b()
{
	glColor3f(0.0,0.0,1.0);
glBegin(GL_LINE_STRIP);
	glVertex2f(415,500);
	glVertex2f(415,540);
	glVertex2f(455,550);
	glVertex2f(495,555);
	glVertex2f(535,550);
	glVertex2f(575,540);
	glVertex2f(575,500);
	glEnd();

}
void streetlightsnight()

{//1
	//pole
	int x=365,y=200,p=365,q=300,i;
	for(i=0;i<3;i++)
	{
		glColor3f(0.70,0.70,0.70);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x,y+100);
	glVertex2f(x+5,y+100);
	glVertex2f(x+5,y);
	glEnd();
	//light
glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(p,q);
	glVertex2f(p-5,q+10);
	glVertex2f(p+2,q+20);
	glVertex2f(p+10,q+10);
	glVertex2f(p+5,q);
	glEnd();
	x=x+25;y=y+90;p=p+25;q=q+90;
	}
	//right
	//pole
	int a=615,b=200,c=615,d=300,j;
	for(j=0;j<3;j++)
	{
		glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(a,b);
	glVertex2f(a,b+100);
	glVertex2f(a+5,b+100);
	glVertex2f(a+5,b);
	glEnd();
	//light
glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(c,d);
	glVertex2f(c-5,d+10);
	glVertex2f(c+2,d+20);
	glVertex2f(c+10,d+10);
	glVertex2f(c+5,d);
	glEnd();
	a=a-25;b=b+90;c=c-25;d=d+90;
	}
	//side of main road
	//left
	//pole
	int e=5,f=200,g=5,h=250,k;
	for(k=0;k<5;k++)
	{
		glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(e,f);
	glVertex2f(e,f+50);
	glVertex2f(e+5,f+50);
	glVertex2f(e+5,f);
	glEnd();
	//light
glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(g,h);
	glVertex2f(g-5,h+10);
	glVertex2f(g+2,h+20);
	glVertex2f(g+10,h+10);
	glVertex2f(g+5,h);
	glEnd();
	g=g+80;e=e+80;
	}
	//right
	//pole
	int l=990,m=200,n=990,r=250,s;
	for(s=0;s<5;s++)
	{
		glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(l,m);
	glVertex2f(l,m+50);
	glVertex2f(l+5,m+50);
	glVertex2f(l+5,m);
	glEnd();
	//light
glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(n,r);
	glVertex2f(n-5,r+10);
	glVertex2f(n+2,r+20);
	glVertex2f(n+10,r+10);
	glVertex2f(n+5,r);
	glEnd();
	l=l-80;n=n-80;}
}

void streetlightsnightred()

{//1
	//pole
	int x=365,y=200,p=365,q=300,i;
	for(i=0;i<3;i++)
	{
		glColor3f(0.70,0.70,0.70);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x,y+100);
	glVertex2f(x+5,y+100);
	glVertex2f(x+5,y);
	glEnd();
	//light
glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(p,q);
	glVertex2f(p-5,q+10);
	glVertex2f(p+2,q+20);
	glVertex2f(p+10,q+10);
	glVertex2f(p+5,q);
	glEnd();
	x=x+25;y=y+90;p=p+25;q=q+90;
	}
	//right
	//pole
	int a=615,b=200,c=615,d=300,j;
	for(j=0;j<3;j++)
	{
		glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(a,b);
	glVertex2f(a,b+100);
	glVertex2f(a+5,b+100);
	glVertex2f(a+5,b);
	glEnd();
	//light
glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(c,d);
	glVertex2f(c-5,d+10);
	glVertex2f(c+2,d+20);
	glVertex2f(c+10,d+10);
	glVertex2f(c+5,d);
	glEnd();
	a=a-25;b=b+90;c=c-25;d=d+90;
	}
	//side of main road
	//left
	//pole
	int e=5,f=200,g=5,h=250,k;
	for(k=0;k<5;k++)
	{
		glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(e,f);
	glVertex2f(e,f+50);
	glVertex2f(e+5,f+50);
	glVertex2f(e+5,f);
	glEnd();
	//light
glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(g,h);
	glVertex2f(g-5,h+10);
	glVertex2f(g+2,h+20);
	glVertex2f(g+10,h+10);
	glVertex2f(g+5,h);
	glEnd();
	g=g+80;e=e+80;
	}
	//right
	//pole
	int l=990,m=200,n=990,r=250,s;
	for(s=0;s<5;s++)
	{
		glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(l,m);
	glVertex2f(l,m+50);
	glVertex2f(l+5,m+50);
	glVertex2f(l+5,m);
	glEnd();
	//light
glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(n,r);
	glVertex2f(n-5,r+10);
	glVertex2f(n+2,r+20);
	glVertex2f(n+10,r+10);
	glVertex2f(n+5,r);
	glEnd();
	l=l-80;n=n-80;}
}


void streetlightsnightblue()

{//1
	//pole
	int x=365,y=200,p=365,q=300,i;
	for(i=0;i<3;i++)
	{
		glColor3f(0.70,0.70,0.70);
	glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x,y+100);
	glVertex2f(x+5,y+100);
	glVertex2f(x+5,y);
	glEnd();
	//light
glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(p,q);
	glVertex2f(p-5,q+10);
	glVertex2f(p+2,q+20);
	glVertex2f(p+10,q+10);
	glVertex2f(p+5,q);
	glEnd();
	x=x+25;y=y+90;p=p+25;q=q+90;
	}
	//right
	//pole
	int a=615,b=200,c=615,d=300,j;
	for(j=0;j<3;j++)
	{
		glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(a,b);
	glVertex2f(a,b+100);
	glVertex2f(a+5,b+100);
	glVertex2f(a+5,b);
	glEnd();
	//light
glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(c,d);
	glVertex2f(c-5,d+10);
	glVertex2f(c+2,d+20);
	glVertex2f(c+10,d+10);
	glVertex2f(c+5,d);
	glEnd();
	a=a-25;b=b+90;c=c-25;d=d+90;
	}
	//side of main road
	//left
	//pole
	int e=5,f=200,g=5,h=250,k;
	for(k=0;k<5;k++)
	{
		glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(e,f);
	glVertex2f(e,f+50);
	glVertex2f(e+5,f+50);
	glVertex2f(e+5,f);
	glEnd();
	//light
glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(g,h);
	glVertex2f(g-5,h+10);
	glVertex2f(g+2,h+20);
	glVertex2f(g+10,h+10);
	glVertex2f(g+5,h);
	glEnd();
	g=g+80;e=e+80;
	}
	//right
	//pole
	int l=990,m=200,n=990,r=250,s;
	for(s=0;s<5;s++)
	{
		glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(l,m);
	glVertex2f(l,m+50);
	glVertex2f(l+5,m+50);
	glVertex2f(l+5,m);
	glEnd();
	//light
glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(n,r);
	glVertex2f(n-5,r+10);
	glVertex2f(n+2,r+20);
	glVertex2f(n+10,r+10);
	glVertex2f(n+5,r);
	glEnd();
	l=l-80;n=n-80;}
}

void nightfence()
{
	//left lines
	glColor3f(0.8,0.8,0.8);
	glBegin(GL_LINE_STRIP);
	glVertex2f(415,500);
	glVertex2f(400,450);
	glVertex2f(0,450);
    glEnd();
    glBegin(GL_LINE_STRIP);
	glVertex2f(445,500);
	glVertex2f(420,415);
	glVertex2f(0,415);
    glEnd();
	//right lines
	glBegin(GL_LINE_STRIP);
	glVertex2f(575,500);
	glVertex2f(590,450);
	glVertex2f(999,450);
    glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(545,500);
	glVertex2f(565,415);
	glVertex2f(999,415);
    glEnd();
	//left side

    glBegin(GL_LINE_STRIP);
	glVertex2f(0,415);
	glVertex2f(20,450);
	glVertex2f(40,415);
	glVertex2f(60,450);
	glVertex2f(80,415);
	glVertex2f(100,450);
	glVertex2f(120,415);
	glVertex2f(140,450);
	glVertex2f(160,415);
	glVertex2f(180,450);
	glVertex2f(200,415);
	glVertex2f(220,450);
	glVertex2f(240,415);
	glVertex2f(260,450);
	glVertex2f(280,415);
	glVertex2f(300,450);
	glVertex2f(320,415);
	glVertex2f(340,450);
	glVertex2f(360,415);
	glVertex2f(380,450);
	glVertex2f(400,415);
	glVertex2f(420,415);
	glVertex2f(400,450);
	glVertex2f(432,455);
	glVertex2f(408,480);
	glVertex2f(445,500);
	glEnd();


//right side
	  glBegin(GL_LINE_STRIP);
	glVertex2f(999,415);
	glVertex2f(979,450);
	glVertex2f(959,415);
	glVertex2f(939,450);
	glVertex2f(919,415);
	glVertex2f(899,450);
	glVertex2f(879,415);
	glVertex2f(859,450);
	glVertex2f(839,415);
	glVertex2f(819,450);
	glVertex2f(799,415);
	glVertex2f(779,450);
	glVertex2f(759,415);
	glVertex2f(739,450);
	glVertex2f(719,415);
	glVertex2f(699,450);
	glVertex2f(679,415);
	glVertex2f(659,450);
	glVertex2f(639,415);
	glVertex2f(619,450);
	glVertex2f(599,415);
	glVertex2f(590,450);
	glVertex2f(560,435);
	glVertex2f(585,470);
	glVertex2f(550,480);
	glVertex2f(575,500);
	glEnd();

}
void moon()
{

	glColor3f(1.0,1.0,1.0);
	circle1(300.0,850.0,30.0);
	glColor3f(0.0,0.0,0.0);
    circle1(800.0,860.0,30.0);
}
void stars()
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(20,812.5);
glVertex2f(30,805);
glVertex2f(10,805);
glVertex2f(20,802.5);
glVertex2f(10,810);
glVertex2f(30,810);
glEnd();
}
void disstars()
{   //glPushMatrix();
	stars();
	glTranslatef(300.0,50.0,0.0);
	stars();
	glTranslatef(220.0,-100.0,0.0);
	stars();
	glTranslatef(100.0,80.0,0.0);
	stars();
	glTranslatef(-720.0,-30.0,0.0);
		stars();
	glTranslatef(300.0,-40.0,0.0);
		stars();
		glTranslatef(740.0,100.0,0.0);
		stars();
	glTranslatef(-100.0,-40.0,0.0);
		stars();
		//glPopmatrix();
	glTranslatef(-842,0,0);
}
void nightroad()
{
glColor3f(0.15,0.15,0.15);
	glBegin(GL_POLYGON);
	glVertex2i(0,100);
	glVertex2i(1000,100);
	glVertex2i(1000,200);
	glVertex2i(0,200);
	glEnd();


	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(100,148);
	glVertex2i(150,148);
	glVertex2i(150,152);
	glVertex2i(100,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(200,148);
	glVertex2i(250,148);
	glVertex2i(250,152);
	glVertex2i(200,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(300,148);
	glVertex2i(350,148);
	glVertex2i(350,152);
	glVertex2i(300,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(400,148);
	glVertex2i(450,148);
	glVertex2i(450,152);
	glVertex2i(400,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(500,148);
	glVertex2i(550,148);
	glVertex2i(550,152);
	glVertex2i(500,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(600,148);
	glVertex2i(650,148);
	glVertex2i(650,152);
	glVertex2i(600,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(700,148);
	glVertex2i(750,148);
	glVertex2i(750,152);
	glVertex2i(700,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(900,148);
	glVertex2i(950,148);
	glVertex2i(950,152);
	glVertex2i(900,152);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(800,148);
	glVertex2i(850,148);
	glVertex2i(850,152);
	glVertex2i(800,152);
	glEnd();
    // connection from palace to road
	glColor3f(0.15,0.15,0.15);
    glBegin(GL_POLYGON);
	glVertex2f(445,500);
	glVertex2f(545,500);
	glVertex2f(565,415);
	glVertex2f(620,200);
	glVertex2f(365,200);
	glVertex2f(420,415);
	glEnd();
}
void insidebox()
{//left
//first inside//1
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(160,550);
	glVertex2f(160,600);
	glVertex2f(180,600);
	glVertex2f(180,550);
	glEnd();
	//inside//2
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(250,550);
	glVertex2f(250,600);
	glVertex2f(270,600);
	glVertex2f(270,550);
	glEnd();
	//left middle inside
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(190,510);
	glVertex2f(240,510);
	glVertex2f(190,525);
	glVertex2f(240,525);
    glVertex2f(190,600);
	glVertex2f(240,600);
	glVertex2f(190,585);
	glVertex2f(240,585);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(200,525);
	glVertex2f(200,560);
	glVertex2f(215,585);
	glVertex2f(230,560);
    glVertex2f(230,525);
    glEnd();
	//right
	//inside//1
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(720,550);
	glVertex2f(720,600);
	glVertex2f(740,600);
	glVertex2f(740,550);
	glEnd();
	//inside2
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(810,550);
	glVertex2f(810,600);
	glVertex2f(830,600);
	glVertex2f(830,550);
	glEnd();
		//inside middle
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(750,510);
	glVertex2f(800,510);
	glVertex2f(750,525);
	glVertex2f(800,525);
	glVertex2f(750,600);
	glVertex2f(800,600);
	glVertex2f(750,585);
	glVertex2f(800,585);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(760,525);
	glVertex2f(760,560);
	glVertex2f(775,585);
	glVertex2f(790,560);
	glVertex2f(790,525);
	glEnd();
}
void nightpalacered()
{
	glPushMatrix();
//insidebox();
night1r();
night2r();
night3r();

glTranslatef(-287,0,0);
night1r();
glTranslatef(470,0,0);
night1r();night2r();
glTranslatef(90,0,0);
night1r();
glTranslatef(-652,0,0);
night5r();
glTranslatef(200,0,0);
night5r();
glTranslatef(-200,0,0);
night6r();

glPopMatrix();

}


void nightpalaceblue()
{glPushMatrix();
insidebox();
night1b();
night2b();
night3b();

glTranslatef(-287,0,0);
night1b();
glTranslatef(470,0,0);
night1b();night2b();
glTranslatef(90,0,0);
night1b();
glTranslatef(-652,0,0);
night5b();
glTranslatef(200,0,0);
night5b();
glTranslatef(-200,0,0);
night6b();

glPopMatrix();
}


void nightpalaceyellow()
{
night1y();
night2y();
night3y();

glTranslatef(-287,0,0);
night1y();
glTranslatef(470,0,0);
night1y();night2y();
glTranslatef(90,0,0);
night1y();
glTranslatef(-652,0,0);
night5y();
glTranslatef(200,0,0);
night5y();
glTranslatef(-200,0,0);
night6y();

}


void musicians()
{
	glColor3f(0.7,0.7,0.7);
	//big drum
	circle1(480,173,20);

	//head
	glColor3ub(255,191,128);
	//glColor3f(0.7,0.6,0.0);
	circle1(500,200,13);
	glColor3f(0.0,0.0,0.0);
	circle1(495,200,2.5);
	//phatha
	glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(493,212);
	glVertex2f(507,212);
	glVertex2f(507,220);
	glVertex2f(493,220);
	glEnd();
    //neck
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(495,188);
	glVertex2f(505,188);
	glVertex2f(505,180);
	glVertex2f(495,180);
	glEnd();
	//body
	glBegin(GL_POLYGON);
	glVertex2f(493,180);
	glVertex2f(508,180);
	glVertex2f(508,155);
	glVertex2f(493,155);
	glEnd();

	//right leg
	glBegin(GL_POLYGON);
	glVertex2f(495,155);
	glVertex2f(500,155);
	glVertex2f(495,140);
	glVertex2f(490,140);
	glEnd();

    //left leg
	glBegin(GL_POLYGON);
	glVertex2f(501,155);
	glVertex2f(506,155);
	glVertex2f(506,140);
	glVertex2f(501,140);
	glEnd();
	//hand
	glBegin(GL_POLYGON);
	glVertex2f(493,180);
	glVertex2f(480,185);
	glVertex2f(480,180);
	glVertex2f(493,174);
	glEnd();

}
void man()
{
	glColor3f(0,0,0);
	glPushMatrix();
		glTranslatef(270,105,0);
		glutSolidTorus(1,15,100,90);
	glPopMatrix();
	//hands
	glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(295,78);
		glVertex2i(305,63);
		glVertex2i(297,64);
		glVertex2i(292,72);
	glEnd();
	glBegin(GL_POLYGON);
		 glVertex2i(305,63);
		glVertex2i(286,48);
		 glVertex2i(286,55);
		 glVertex2i(297,64);
	glEnd();
//hands2
	glBegin(GL_POLYGON);
		glVertex2i(245,78);
		glVertex2i(235,63);
		glVertex2i(243,64);
		glVertex2i(248,72);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2i(235,63);
		glVertex2i(254,48);
		glVertex2i(254,55);
		glVertex2i(243,64);
		glEnd();
//fill face
	glColor3f(255,191,128);
	glPushMatrix();
		glTranslatef(270,105,0);
		glutSolidTorus(7,7,100,90);
	glPopMatrix();
//draw nose  eyebrow
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
		glVertex2i(270,107);
		glVertex2i(270,100);
 		glVertex2i(261,113);
		glVertex2i(267,113);
 		glVertex2i(273,113);
		glVertex2i(279,113);
	glEnd();
 // eyes
	glBegin(GL_POLYGON);
		glVertex2i(263,111);
		glVertex2i(265,111);
		glVertex2i(265,109);
		glVertex2i(263,109);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2i(275,111);
		glVertex2i(277,111);
		glVertex2i(277,109);
		glVertex2i(275,109);
	glEnd();
 // mouth
	glBegin(GL_POLYGON);
		glVertex2i(266,97);
		glVertex2i(270,95);
		glVertex2i(274,97);
		glVertex2i(270,95);
	glEnd();
//shirt
	 glBegin(GL_POLYGON);
		glColor3ub(55,50,70);
		glVertex2i(259,90);
		glVertex2i(281,90);
		glVertex2i(296,79);
		glVertex2i(291,71);
		glVertex2i(286,75);
		glVertex2i(286,55);
		glVertex2i(254,55);
		glVertex2i(254,75);
		glVertex2i(249,70);
		glVertex2i(244,79);
	glEnd();

 // belt
	glBegin(GL_POLYGON);
		glColor3ub(100,120,130);
		glVertex2i(286,55);
		glVertex2i(254,55);
		glVertex2i(254,50);
		glVertex2i(286,50);
	glEnd();
// collar
	glBegin(GL_POLYGON);
		glColor3ub(200,140,110);
		glVertex2i(259,90);
		glVertex2i(281,90);
		glVertex2i(276,80);
		glVertex2i(264,80);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3ub(20,140,110);
		glVertex2i(270,87);
		glVertex2i(275,80);
		glVertex2i(265,80);
	glEnd();
// buttons
	glColor3ub(0,0,0);
	glPushMatrix();
		glTranslatef(270,75,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(270,68,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(270,61,0);
		glutSolidTorus(1,1,100,90);
	glPopMatrix();
// pant
	glBegin(GL_POLYGON);
		glColor3ub(10,10,10);
		glVertex2i(285,50);
		glVertex2i(254,50);
		glVertex2i(250,15);
		glVertex2i(260,15);
		glVertex2i(263,48);
		glVertex2i(280,15);
		glVertex2i(290,15);
	glEnd();
}

void scaleman()
{
	int x=-125,y=350;
	for(int i=0;i<25;i++)
	{
		for(int j=3;j!=0;j--)
		{
	glPushMatrix();
		glTranslated(x,y,0);
		glScaled(0.55,0.57,0.0);
		man();
		glPopMatrix();
		y-=25;
		}
		x+=40;y=350;
	}

}
void multiplemusicians()
{
	glPushMatrix();
	glTranslatef(-50,40,0);
	musicians();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-70,-40,0);
	musicians();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(50,40,0);
	musicians();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(70,-40,0);
	musicians();
	glPopMatrix();
}
void flute()
{
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(848,215);
glVertex2f(850,210);
glVertex2f(830,200);
glVertex2f(825,205);
glEnd();
glColor3f(1.0,1.0,0.0);
glBegin(GL_POINTS);
glVertex2f(828,205);
glVertex2f(832,208);
glVertex2f(836,211);
glVertex2f(840,213);
glVertex2f(844,215);
glEnd();

}
void man1()
{
	glPushMatrix();
	glTranslated(538,33,0);
	//pant
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(300,100);
	glVertex2f(310,100);
	glVertex2f(325,150);
	glVertex2f(310,150);
	glEnd();

	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(330,100);
	glVertex2f(340,100);
	glVertex2f(330,150);
	glVertex2f(310,150);
	glEnd();

	//shoes
     glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(300,100);
	glVertex2f(310,100);
	glVertex2f(310,90);
	glVertex2f(300,90);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(330,100);
	glVertex2f(340,100);
	glVertex2f(340,90);
	glVertex2f(330,90);
	glEnd();


	//head
	glColor3ub(255,191,128);
	//glColor3f(0.67,0.8,1.0);
	circle1(320,185,10.0);
glEnd();
glColor3f(0.0,0.0,0.0);
circle1(315,185,2.5);
	 glEnd();

glEnd();
//hat

glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(310,190);
	glVertex2f(330,190);
	glVertex2f(328,205);
	glVertex2f(312,205);
	glEnd();
//body
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(310,150);
	glVertex2f(330,150);
	glVertex2f(330,175);
	glVertex2f(310,175);
	glEnd();
	//hands
    glColor3ub(255,191,128);
	//glColor3f(0.67,0.8,0.3);
	glBegin(GL_POLYGON);
	glVertex2f(320,175);
	glVertex2f(290,168);
	glVertex2f(290,163);
	glVertex2f(320,170);
	glEnd();

	//glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(320,172);
	glVertex2f(310,177);
	glVertex2f(310,170);
	glVertex2f(320,167);
	glEnd();
//outline
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(300,100);
	glVertex2f(310,100);
	glVertex2f(325,150);
	glVertex2f(310,150);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(330,100);
	glVertex2f(340,100);

	glEnd();

//body
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(310,150);
	glVertex2f(330,150);
	glVertex2f(330,175);
	glVertex2f(310,175);
	glEnd();

//hands
glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(310,175);
	glVertex2f(290,168);
	glVertex2f(290,163);
	glVertex2f(310,170);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(320,172);
	glVertex2f(310,177);
	glVertex2f(310,170);
	glVertex2f(320,167);
	glEnd();

	//hat

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
	glVertex2f(310,190);
	glVertex2f(330,190);
	glVertex2f(328,205);
	glVertex2f(312,205);
	glEnd();
    glPopMatrix();

flute();
}
void multipleman()
{
	//men playing flute
	glPushMatrix();
	glTranslatef(-50,30,0);
	man1();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-100,-10,0);
	man1();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-150,30,0);
	man1();
	glPopMatrix();
}
void translate()
{
	float x=0;

	for(int i=0;i<=1500;i+=100)
	{

glClear(GL_COLOR_BUFFER_BIT);
	sky();
	palace();
	mud();
	grass();
	footpath();
	scaleman();
	fence();
	tr();
	roads();
	clouds();
	sun1();
	streetlights();
	glPushMatrix();
		glTranslatef(x,0,0);
		x=x-3.0;
		musicians();
		multiplemusicians();
		man1();
		multipleman();
		glPopMatrix();
		glFlush();
	}
}


void elephantpos()
{
	glTranslatef(250,0,0);
    elephant1();
	glTranslatef(250,0,0);
	elephant1();
}
void translate2()
{
	float x=0,y=0;


	for(int i=0;i<=1500;i+=100)
	{

glClear(GL_COLOR_BUFFER_BIT);
	sky();
	palace();mud();
	grass();
	footpath();scaleman();
	tr();
	fence();
	roads();
	clouds();
	sun1();
	streetlights();
		glPushMatrix();
		glTranslatef(x,0,0);
		x=x-3.0;
		elephant();
		elephantpos();
		glPopMatrix();
		glFlush();
	}

}

void display4()
{


glClear(GL_COLOR_BUFFER_BIT);
	sky();
	palace();mud();
	grass();
	footpath();scaleman();
	tr();
	fence();

	roads();

	clouds();
	sun1();
	streetlights();

		elephant();
		elephantpos();
		glTranslatef(-500,0,0);
		glFlush();
	}

void sun()
{       glPushMatrix();
		 glTranslatef(-500,0,0);
		 sun1();
		 glPopMatrix();
}





void display1()
{

glClear(GL_COLOR_BUFFER_BIT);

	sky();mud();
grass();
footpath();
scaleman();
fence();
palace();
roads();
tr();
streetlights();
clouds();
sun1();


glFlush();

}


void display2()
{
glClear(GL_COLOR_BUFFER_BIT);

translate();
glFlush();
}
void display5()
{
glClear(GL_COLOR_BUFFER_BIT);
translate2();
glFlush();
}


void charioteele()
{
	glPushMatrix();
	glTranslated(350,0,0);
	elephant1();
	glPopMatrix();
}


void chariote()
{
	//base of vehicle
	glColor3f(0.0,0.0,0.65);
	glBegin(GL_POLYGON);
	glVertex2f(700,180);
	glVertex2f(850,180);
	glVertex2f(860,200);
	glVertex2f(690,200);
	glEnd();

	//right side
	glBegin(GL_POLYGON);
	glVertex2f(860,200);
	glVertex2f(850,200);
	glVertex2f(850,280);
	glVertex2f(860,275);
	glEnd();
    //left side
    glBegin(GL_POLYGON);
	glVertex2f(690,200);
	glVertex2f(700,200);
	glVertex2f(700,280);
	glVertex2f(690,275);
	glEnd();
	//top
    glBegin(GL_POLYGON);
	glVertex2f(700,280);
	glVertex2f(700,275);
	glVertex2f(850,275);
	glVertex2f(850,280);
	glEnd();
	//wheels
	glColor3f(0.0,0.0,0.0);//1
glBegin(GL_POLYGON);
glVertex2f(725,155);
glVertex2f(725,180);
glVertex2f(750,180);
glVertex2f(750,155);
glEnd();
glColor3f(0.0,0.0,0.0);//2
glBegin(GL_POLYGON);
glVertex2f(800,155);
glVertex2f(800,180);
glVertex2f(825,180);
glVertex2f(825,155);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POINTS);
glVertex2f(738,168);
glVertex2f(813,168);
glEnd();
//to construct veena
circle1(775,215,10);
glColor3f(0.0,1.0,.87);
glBegin(GL_POLYGON);
glVertex2f(765,210);
glVertex2f(770,200);
glVertex2f(780,200);
glVertex2f(785,210);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(785,215);
glVertex2f(820,215);
glVertex2f(820,210);
glVertex2f(785,210);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(810,200);
glVertex2f(815,200);
glVertex2f(813,213);
glEnd();
glBegin(GL_POINTS);
glVertex2f(790,217);
glVertex2f(795,217);
glVertex2f(800,217);
glVertex2f(805,217);
glVertex2f(810,217);
glVertex2f(815,217);
glEnd();
//to construct drum

glColor3f(0.6,0,0);
glBegin(GL_POLYGON);
glVertex2f(725,228);
glVertex2f(730,200);
//glEnd();
//glBegin(GL_POLYGON);
glVertex2f(751,200);
glVertex2f(755,228);
glEnd();
glColor3f(0.9,0.9,0.9);
circle1(740,225,15);
glBegin(GL_LINES);
glVertex2f(730,200);
glVertex2f(751,200);
glEnd();
glBegin(GL_LINES);
glVertex2f(733,200);
glVertex2f(733,212);
glEnd();
glBegin(GL_LINES);
glVertex2f(738,200);
glVertex2f(738,212);
glEnd();
glBegin(GL_LINES);
glVertex2f(742,200);
glVertex2f(742,212);
glEnd();
glBegin(GL_LINES);
glVertex2f(746,200);
glVertex2f(746,212);
glEnd();
glBegin(GL_LINES);
glVertex2f(749,200);
glVertex2f(749,212);
glEnd();
//flute
glBegin(GL_POLYGON);
glVertex2f(848,215);
glVertex2f(850,210);
glVertex2f(830,200);
glVertex2f(825,205);
glEnd();
glColor3f(1.0,1.0,0.0);
glBegin(GL_POINTS);
glVertex2f(828,205);
glVertex2f(832,208);
glVertex2f(836,211);
glVertex2f(840,213);
glVertex2f(844,215);
glEnd();

//jointer between chariot and elephant
//below
glColor3f(0.9,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(690,205);
glVertex2f(690,210);
glVertex2f(650,230);
glVertex2f(640,225);
glEnd();
//above
glBegin(GL_POLYGON);
glVertex2f(690,265);
glVertex2f(690,270);
glVertex2f(650,260);
glVertex2f(640,250);
glEnd();
charioteele();
}


void hillpos()
{
	glPushMatrix();
	glTranslated(-300,0,0);
	chamundihill();
	glPopMatrix();
}
void translate3()
{
	GLfloat x=0.0;
	for(int i=0;i<1500;i+=100)
	{
	glClear(GL_COLOR_BUFFER_BIT);
	sky();
	palace();mud();
	grass();
	footpath();
	scaleman();
	fence();

	roads();
	clouds();
	sun1();
	streetlights();
	tr();
	glPushMatrix();
	glTranslatef(x,0,0);
	x=x-3.0;
	hillpos();
	chariote();
	glPopMatrix();
		glFlush();
}
}

void display3()
{
	glClear(GL_COLOR_BUFFER_BIT);
translate3();

glFlush();
}



void display6()
{
	glColor3f(0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	disstars();
	nightpalaceyellow();
	insidebox();
	moon();
	nightfence();
	nightroad();

	streetlightsnight();

	glFlush();
}

void display6r()
{
	glColor3f(0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	disstars();
	nightpalacered();
	insidebox();
	moon();
	nightfence();
	nightroad();

	streetlightsnightred();

	glFlush();
}

void display6b()
{
	glColor3f(0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	disstars();
	nightpalaceblue();
	insidebox();
	moon();
	nightfence();
	nightroad();

	streetlightsnightblue();

	glFlush();
}
void mykeys(unsigned char key,int x,int y)
{

	     if(key=='1')display1();
	else if(key=='2')display2();
else if(key=='3')display3();
	else if(key=='4')display4();
	else if(key=='5')display5();
    else if(key=='6')display6();

}



void display(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	glRasterPos2i(200,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'D');
	glRasterPos2i(230,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');
	glRasterPos2i(260,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'S');
	glRasterPos2i(290,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');
	glRasterPos2i(320,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
	glRasterPos2i(350,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');
	glRasterPos2i(500,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'P');
	glRasterPos2i(530,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'R');
	glRasterPos2i(560,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'O');
	glRasterPos2i(590,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'C');
	glRasterPos2i(620,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'E');
	glRasterPos2i(650,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'S');
	glRasterPos2i(680,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'S');
	glRasterPos2i(710,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'I');
	glRasterPos2i(740,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'O');
	glRasterPos2i(770,500);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'N');

	glFlush();
}
void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(3.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,999.0,0.0,999.0);
}


void colors(int id)
{
	switch(id)
	{
	case 1:display6r();

		break;
	case 2:display6b();
		break;
	case 3:exit(0);
	}

}



int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("dasara procession");
	glutDisplayFunc(display);
	glutKeyboardFunc(mykeys);

	glutCreateMenu(colors);
	glutAddMenuEntry("Red",1);
	glutAddMenuEntry("Blue",2);
	glutAddMenuEntry("Quit",3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
    myinit();
	glutMainLoop();
}
