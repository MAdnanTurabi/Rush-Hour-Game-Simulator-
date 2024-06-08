//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}
string displayscore;
int xI = 25, yI = 730;
int x2=500, y2=730, x3=65, y3=580, x4=65, y4=310, x5=65, y5=50, x6=600, y6=600, x7=700, y7=340, x8=780, y8=300, x9=830, y9=450, x10=880, y10=600, x11=930, y11=160;
void drawCar() {
	DrawSquare(xI, yI, 20, colors[YELLOW]);
	DrawSquare(x2, y2, 20, colors[GOLD]);
	DrawSquare(x3, y3, 20, colors[GOLD]);
	DrawSquare(x4, y4, 20, colors[GOLD]);
	DrawSquare(x5, y5, 20, colors[GOLD]);
	DrawSquare(x6, y6, 20, colors[GOLD]);
	DrawSquare(x7, y7, 20, colors[GOLD]);
	DrawSquare(x8, y8, 20, colors[GOLD]);
	DrawSquare(x9, y9, 20, colors[GOLD]);
	DrawSquare(x10, y10, 20, colors[GOLD]);
	DrawSquare(x11, y11, 20, colors[GOLD]);
	glutPostRedisplay();
}



bool flag = true;
void moveCar() {
	
	if (xI > 1010 && flag) {
		xI -= 10;
		//cout << "going left";
		if(xI < 100)
			
			flag = false;

	}
	else if (xI < 1010 && !flag) {
		//cout << "go right";
		xI += 10;
		if (xI > 900)
			flag = true;
	}
}

bool flag2 = true;
void moveCar2() {
	
	if (x2 > 10 && flag2) {
		x2 -= 10;
		//cout << "going left";
		if(x2 < 20)
			
			flag2 = false;

	}
	else if (x2 < 1010 && !flag2) {
		//cout << "go right";
		x2 += 10;
		if (x2 > 990)
			flag2 = true;
	}
}
bool flag3 = true;
void moveCar3() {
	
	if (x3 > 10 && flag3) {
		x3 -= 10;
		//cout << "going left";
		if(x3 < 20)
			
			flag3 = false;

	}
	else if (x3 < 1010 && !flag3) {
		//cout << "go right";
		x3 += 10;
		if (x3 > 380)
			flag3 = true;
	}
}
bool flag4 = true;
void moveCar4() {
	
	if (x4 > 10 && flag4) {
		x4 -= 10;
		//cout << "going left";
		if(x4 < 20)
			
			flag4 = false;

	}
	else if (x4 < 1010 && !flag4) {
		//cout << "go right";
		x4 += 10;
		if (x4 > 230)
			flag4 = true;
	}
}
bool flag5 = true;
void moveCar5() {
	
	if (x5 > 10 && flag5) {
		x5 -= 10;
		//cout << "going left";
		if(x5 < 20)
			
			flag5 = false;

	}
	else if (x5 < 1010 && !flag5) {
		//cout << "go right";
		x5 += 10;
		if (x5 > 990)
			flag5 = true;
	}
}
bool flag6 = true;
void moveCar6() {
	
	if (x6 > 10 && flag6) {
		x6 -= 10;
		//cout << "going left";
		if(x6 < 480)
			
			flag6 = false;

	}
	else if (x6 < 1010 && !flag6) {
		//cout << "go right";
		x6 += 10;
		if (x6 > 740)
			flag6 = true;
	}
}
bool flag7 = true;
void moveCar7() {
	
	if (x7 > 10 && flag7) {
		x7 -= 10;
		//cout << "going left";
		if(x7 < 480)
			
			flag7 = false;

	}
	else if (x7 < 1010 && !flag7) {
		//cout << "go right";
		x7 += 10;
		if (x7 > 740)
			flag7 = true;
	}
}
bool flag8 = true;
void moveCar8() {
	
	if (y8 > 10 && flag8) {
		y8 -= 10;
		//cout << "going down";
		if(y8 < 160)
			
			flag8 = false;

	}
	else if (y8 < 1010 && !flag8) {
		//cout << "go up";
		y8 += 10;
		if (y8 > 620)
			flag8 = true;
	}
}
bool flag9 = true;
void moveCar9() {
	
	if (y9 > 10 && flag9) {
		y9 -= 10;
		//cout << "going down";
		if(y9 < 160)
			
			flag9 = false;

	}
	else if (y9 < 1010 && !flag9) {
		//cout << "go up";
		y9 += 10;
		if (y9 > 620)
			flag9 = true;
	}
}
bool flag10 = true;
void moveCar10() {
	
	if (y10 > 10 && flag10) {
		y10 -= 10;
		//cout << "going down";
		if(y10 < 160)
			
			flag10 = false;

	}
	else if (y10 < 1010 && !flag10) {
		//cout << "go up";
		y10 += 10;
		if (y10 > 620)
			flag10 = true;
	}
}
bool flag11 = true;
void moveCar11() {
	
	if (y11 > 10 && flag11) {
		y11 -= 10;
		//cout << "going down";
		if(y11 < 160)
			
			flag11 = false;

	}
	else if (y11 < 1010 && !flag11) {
		//cout << "go up";
		y11 += 10;
		if (y11 > 620)
			flag11 = true;
	}
}

int score;

int circle1x=150,circle1y=460;
int circle2x=650,circle2y=460;     //co ordinates of passengers
int circle3x=1005,circle3y=710;
int circle4x=1005,circle4y=75;
int circle5x=700,circle5y=320;	
	
bool pick1=false;
bool pick2=false;
bool pick3=false;
bool pick4=false;
bool pick5=false;

void drawpass()                   // draws passengers
{
if(pick1==false)
{
DrawCircle(circle1x,circle1y,10,colors[RED]);
}
}


void drawpass2()
{
if(pick2==false)
{
DrawCircle(circle2x,circle2y,10,colors[RED]);
}
}


void drawpass3()
{
if(pick3==false)
{
DrawCircle(circle3x,circle3y,10,colors[RED]);
}
}

void drawpass4()
{
if(pick4==false)
{
DrawCircle(circle4x,circle4y,10,colors[RED]);
}
}

void drawpass5()
{
if(pick5==false)
{
DrawCircle(circle5x,circle5y,10,colors[RED]);
}
}



int dropx1=800 , dropy1=460;
int dropx2=500 , dropy2=40;           //print drop locations
int dropx3=700 , dropy3=40;
int dropx4=900 , dropy4=460;
int dropx5=550 , dropy5=700;






void pickpass()                     //picking passenger
{

if(pick1==false and pick2==false and pick3==false and pick4==false and pick5==false) //so only can pick when no passenger is in taxi
{
int highx1=0 , lowx1=0 , highy1=0 , lowy1=0;

//range from which you can pick passenger
highx1=circle1x+5;
lowx1=circle1x-5;

lowy1=circle1y-10;
highy1=circle1y+10;


if((xI<=highx1 and xI>=lowx1)and (yI<=highy1 and yI>=lowy1) )  //for choosing which passenger to pick
{
circle1x=250;
circle1y=170;

pick1=true;
}



int highx2=0 , lowx2=0 , highy2=0 , lowy2=0;

highx2=circle2x+5;
lowx2=circle2x-10;

lowy2=circle2y-10;
highy2=circle2y+10;


if((xI<=highx2 and xI>=lowx2)and (yI<=highy2 and yI>=lowy2) )
{
circle2x=500;
circle2y=170;
pick2=true;
}



int highx3=0 , lowx3=0 , highy3=0 , lowy3=0;

highx3=circle3x+5;
lowx3=circle3x-10;

lowy3=circle3y-10;
highy3=circle3y+10;


if((xI<=highx3 and xI>=lowx3)and (yI<=highy3 and yI>=lowy3) )
{
circle3x=350;
circle3y=570;
pick3=true;
}



int highx4=0 , lowx4=0 , highy4=0 , lowy4=0;

highx4=circle4x+5;
lowx4=circle4x-10;

lowy4=circle4y-10;
highy4=circle4y+10;


if((xI<=highx4 and xI>=lowx4)and (yI<=highy4 and yI>=lowy4) )
{
circle4x=100;
circle4y=170;
pick4=true;
}



int highx5=0 , lowx5=0 , highy5=0 , lowy5=0;

highx5=circle5x+5;
lowx5=circle5x-10;

lowy5=circle5y-10;
highy5=circle5y+10;


if((xI<=highx5 and xI>=lowx5)and (yI<=highy5 and yI>=lowy5) )
{
circle5x=350;
circle5y=170;
pick5=true;
}

}
}




void droppass()
{


//for dropping of passengers
if (pick1==true)
{
int highx1=0 , lowx1=0 , highy1=0 , lowy1=0;
//range in which you can drop
highx1=dropx1+20;
lowx1=dropx1-20;

lowy1=dropy1-15;
highy1=dropy1+20;

if((xI<=highx1 and xI>=lowx1)and (yI<=highy1 and yI>=lowy1) )
{
//dropx1+=150;
pick1=false;
score+=10;
}
}



if(pick2==true)
{
int highx2=0 , lowx2=0 , highy2=0 , lowy2=0;

highx2=dropx2+20;
lowx2=dropx2-20;

lowy2=dropy2-15;
highy2=dropy2+20;

if((xI<=highx2 and xI>=lowx2)and (yI<=highy2 and yI>=lowy2) )
{
//dropx2+=300;
//dropy2+=200;
pick2=false;
score+=10;
}
}



if (pick3==true)
{int highx3=0 , lowx3=0 , highy3=0 , lowy3=0;

highx3=dropx3+20;
lowx3=dropx3-20;

lowy3=dropy3-15;
highy3=dropy3+20;

if((xI<=highx3 and xI>=lowx3)and (yI<=highy3 and yI>=lowy3) )
{
//dropx3+=150;
pick3=false;
score+=10;
}
}



if (pick4==true)
{int highx4=0 , lowx4=0 , highy4=0 , lowy4=0;

highx4=dropx4+20;
lowx4=dropx4-20;

lowy4=dropy4-15;
highy4=dropy4+20;

if((xI<=highx4 and xI>=lowx4)and (yI<=highy4 and yI>=lowy4) )
{
//dropx4-=150;
//dropy4-=300;
pick4=false;
score+=10;
}
}



if (pick5==true)
{int highx5=0 , lowx5=0 , highy5=0 , lowy5=0;

highx5=dropx5+20;
lowx5=dropx5-20;

lowy5=dropy5-15;
highy5=dropy5+20;

if((xI<=highx5 and xI>=lowx5)and (yI<=highy5 and yI>=lowy5) )
{
//dropx4-=150;
//dropy4-=300;
pick5=false;
score+=10;
}
}

 
}



void DrawDrop()  //for drawing drop off location
{
if(pick1==true)
{
DrawSquare(dropx1, dropy1, 40, colors[RED]);
}


if(pick2==true)
{
DrawSquare(dropx2, dropy2, 40, colors[RED]);
}

if(pick3==true)
{
DrawSquare(dropx3, dropy3, 40, colors[RED]);
}

if(pick4==true)
{
DrawSquare(dropx4, dropy4, 40, colors[RED]);
}

if(pick5==true)
{
DrawSquare(dropx5, dropy5, 40, colors[RED]);
}
}



/*
 * Main Canvas drawing function.
 * */


void GameDisplay()/**/{

//for deducting score of collisions
if((xI>=x2-10 && xI<=x2+10)&&(yI>=y2-10 && yI<=y2+10)||(xI>=x3-10 && xI<=x3+10)&&(yI>=y3-10 && yI<=y3+10)||(xI>=x4-10 && xI<=x4+10)&&(yI>=y4-10 && yI<=y4+10)||(xI>=x5-10 && xI<=x5+10)&&(yI>=y5-10 && yI<=y5+10)||(xI>=x6-10 && xI<=x6+10)&&(yI>=y6-10 && yI<=y6+10)||(xI>=x7-10 && xI<=x7+10)&&(yI>=y7-10 && yI<=y7+10)||(xI>=x8-20 && xI<=x8+20)&&(yI>=y8-20 && yI<=y8+20)||(xI>=x9-20 && xI<=x9+20)&&(yI>=y9-20 && yI<=y9+20)||(xI>=x10-20 && xI<=x10+20)&&(yI>=y10-20 && yI<=y10+20)||(xI>=x11-20 && xI<=x11+20)&&(yI>=y11-20 && yI<=y11+20))
{
score = score-10;
}
displayscore=to_string(score);

	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Red Square
	//DrawSquare(400, dropx, dropy, colors[RED]);
	
	
	
	
	//Display Score
	
	
	DrawString( 50, 800, "Score=", colors[BLACK]);
	DrawString(120,800,displayscore,colors[BLACK]);
	
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	DrawLine( 0 , 0 ,  0 , 960 , 10 , colors[BLACK] );	
	
	DrawLine( 65 , 0 ,  65 , 780 , 1 , colors[BLACK] );	
	DrawLine( 115 , 0 ,  115 , 780 , 1 , colors[BLACK] );
	DrawLine( 165 , 0 ,  165 , 780 , 1 , colors[BLACK] );  //grid lines
	DrawLine( 215 , 0 ,  215 , 780 , 1 , colors[BLACK] );	
	DrawLine( 265 , 0 ,  265 , 780 , 1 , colors[BLACK] );
	DrawLine( 315 , 0 ,  315 , 780 , 1 , colors[BLACK] );
	DrawLine( 365 , 0 ,  365 , 780 , 1 , colors[BLACK] );
	DrawLine( 415 , 0 ,  415 , 780 , 1 , colors[BLACK] );
	DrawLine( 465 , 0 ,  465 , 780 , 1 , colors[BLACK] );
	DrawLine( 515 , 0 ,  515 , 780 , 1 , colors[BLACK] );									
	DrawLine( 565 , 0 ,  565 , 780 , 1 , colors[BLACK] );	
	DrawLine( 615 , 0 ,  615 , 780 , 1 , colors[BLACK] );	
	DrawLine( 665 , 0 ,  665 , 780 , 1 , colors[BLACK] );	
	DrawLine( 715 , 0 ,  715 , 780 , 1 , colors[BLACK] );	
	DrawLine( 765 , 0 ,  765 , 780 , 1 , colors[BLACK] );	
	DrawLine( 815 , 0 ,  815 , 780 , 1 , colors[BLACK] );	
	DrawLine( 865 , 0 ,  865 , 780 , 1 , colors[BLACK] );
	DrawLine( 915 , 0 ,  915 , 780 , 1 , colors[BLACK] );		 
	DrawLine( 965 , 0 ,  965 , 780 , 1 , colors[BLACK] );
			
	 
        DrawLine( 1020 , 0 ,  1020 , 960 , 10 , colors[BLACK] );	
	
	DrawLine( 1020 , 0 ,  0 , 0 , 10 , colors[BLACK] );
	
	DrawLine( 1020 , 840 ,  0 ,840 , 10 , colors[BLACK] );	
	
	DrawLine( 1020 , 780 ,  0 ,780 , 5 , colors[BLACK] );	
	
	
	
	
      
       
	
	//black curbs
	DrawRoundRect(113,650,152,50,colors[BLACK],0); //top left;1 building
	//bounds
	if((xI>100)&&(yI>630)&&(yI<700)&&(xI<110))
	{
	xI -=10;
	}
	if((xI>100)&&(yI>630)&&(xI<250)&&(yI<660))
	{
	yI -=10;
	}
	if((xI<260)&&(yI>630)&&(yI<700)&&(xI>250))
	{
	xI +=10;
	}
	if((xI>100)&&(yI<700)&&(xI<250)&&(yI>660))
	{
	yI +=10;
	}
	
	
	DrawRoundRect(513,650,545,50,colors[BLACK],0); //2
	if((xI>500)&&(yI>630)&&(yI<700)&&(xI<510))
	{
	xI -=10;
	}
	if((xI>500)&&(yI>630)&&(yI<650))
	{
	yI -=10;
	}
	if((xI>500)&&(yI<700)&&(yI>670))
	{
	yI+=10;
	}
	
	
	
	DrawRoundRect(513,100,545,50,colors[BLACK],0); //3
       if((xI>500)&&(yI>80)&&(yI<300)&&(xI<520)) 
       {
       xI -=10;
       }
       if((yI>250)&&(xI>500)&&(xI<560)&&(yI<300))
       {
       yI +=10;
       }
       if((xI>500)&&(yI>80)&&(yI<100))
       {
       yI -=10;
       }
       if((xI<560)&&(xI>550)&&(yI>80)&&(yI<300))
       {
       xI +=10;
       }	
       if((xI>500)&&(yI>100)&&(yI<150))
       {
       yI +=10;
       }
	
	DrawRoundRect(113,470,102,50,colors[BLACK],0);
	DrawRoundRect(165,380,50,132,colors[BLACK],0);
	if((xI>100)&&(yI>450)&&(yI<520)&&(xI<110))
	{
	xI -=10;
	}
	if((xI>100)&&(yI<520)&&(xI<210)&&(yI>460))
	{
	yI +=10;
	}
	if((xI>200)&&(xI<215)&&(yI<520)&&(yI>360))
	{
	xI +=10;
	}
	if((xI>100)&&(xI<210)&&(yI>450)&&(yI<470))
	{
	yI-=10;
	}
	if((xI>150)&&(xI<210)&&(yI>360)&&(yI<380))
	{
	yI-=10;
	}
	if((xI>150)&&(xI<170)&&(yI<520)&&(yI>360))
	{
	xI -=10;
	}
	
	
	
	DrawRoundRect(115,110,100,132,colors[BLACK],0);
	if((xI>100)&&(yI>90)&&(yI<240)&&(xI<120))
	{
	xI -=10;
	}
	if((xI>100)&&(xI<210)&&(yI>90)&&(yI<110))
	{
	yI -=10;
	}
	if((xI<210)&&(xI>190)&&(yI>90)&&(yI<240))
	{
	xI +=10;
	}
	if((xI>100)&&(xI<210)&&(yI<240)&&(yI>220))
	{ 
	yI +=10;
	}
	
	DrawRoundRect(265,200,50,200,colors[BLACK],0);
	if((xI>250)&&(yI>180)&&(yI<400)&&(xI<270))
	{
	xI -=10;
	}
	if((xI<310)&&(xI>280)&&(yI>180)&&(yI<400))
	{
	xI +=10;
	}
	if((xI>250)&&(xI<310)&&(yI>180)&&(yI<200))
	{
	yI -=10;
	}
	if((xI>250)&&(xI<310)&&(yI<400)&&(yI>380))
	{
	yI +=10;
	}
	
	
	DrawRoundRect(515,100,50,200,colors[BLACK],0);
	
	DrawRoundRect(613,470,102,50,colors[BLACK],0);
	DrawRoundRect(665,380,50,132,colors[BLACK],0);
	if((xI>600)&&(yI>450)&&(yI<520)&&(xI<620))
	{
	xI -=10;
	}
	if((xI>600)&&(xI<650)&&(yI>450)&&(yI<470))
	{
	yI -=10;
	}
	if((xI>650)&&(xI<660)&&(yI<470)&&(yI>360))
	{
	xI -=10;
	}
	if((xI>650)&&(xI<760)&&(yI>360)&&(yI<380))
	{
	yI -=10;
	}
	if((xI<760)&&(xI>740)&&(yI>360)&&(yI<580))
	{
	xI +=10;
	}
	if((xI>700)&&(xI<760)&&(yI<580)&&(yI>560))
	{
	yI +=10;
	}
	if((xI>700)&&(xI<720)&&(yI>470)&&(yI<580))
	{
	xI -=10;
	}
	if((xI>600)&&(xI<700)&&(yI==510))
	{
	yI +=10;
	}
	
	
	DrawRoundRect(712,380,53,200,colors[BLACK],0);

       DrawRoundRect(412,100,53,600,colors[BLACK],0);
       DrawRoundRect(412,470,102,50,colors[BLACK],0);
       if((xI>400)&&(yI>80)&&(yI<700)&&(xI<420))
       {
       xI -=10;
       }
       if((xI>430)&&(yI>80)&&(yI<700)&&(xI<460))
       {
       xI +=10;
       }
       if((xI>400)&&(xI<460)&&(yI>680)&&(yI<700))
       {
       yI +=10;
       }
       if((xI>400)&&(xI<460)&&(yI>80)&&(yI<100))
       {
       yI -=10;
       }
       if((xI<510)&&(xI>500)&&(yI>450)&&(yI<520))
       {
       xI +=10;
       }
       if((xI>460)&&(xI<510)&&(yI>450)&&(yI<470))
       {
       yI -=10;
       }
       if((xI>460)&&(xI<510)&&(yI<520)&&(yI>500))
       {
       yI +=10;
       }
       
       
 
       if(yI>760) //top bound
       {
       yI -=10;
       }
       if(xI<0)  //left bound
       {
       xI +=10;
       }
       if(xI>1000) //right bound
       {
       xI -=10;
       }
       if(yI<5) //bottom bound
       {
       yI +=10;
       }
       
       
       
       
       
       DrawDrop();
       drawCar();
       drawpass();
       drawpass2();
       drawpass3();
       drawpass4();
       drawpass5();
       glutSwapBuffers(); // do not modify this line..
       if(score>=100)
       {
       exit(0);
       }

}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/
	 

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	//if (key == 'b' || key == 'B') //Key for placing the bomb
	//		{
		//do something if b is pressed
	//	cout << "b pressed" << endl;

	
	
	if (key == 32)
	{
	pickpass();         //when space pressed function called to check if in location of pick or drop and then picks / drops
	droppass();
	
	}
	glutPostRedisplay();
}



/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */

void Timer(int m) {


	// implement your functionality here
	moveCar();
	moveCar2();
	moveCar3();
	moveCar4();
	moveCar5();
	moveCar6();
	moveCar7();
	moveCar8();
	moveCar9();
	moveCar10();
	moveCar11();
       
	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour by M Adnan Turabi"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */
