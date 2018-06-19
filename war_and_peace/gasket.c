#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>


void circle(GLfloat x, GLfloat y, GLdouble radius) {
	float x2, y2;
	float angle;
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	for (angle = 0.0; angle < 6.3; angle += 0.01)
	{
		x2 = x + sin(angle)*radius;
		y2 = y + cos(angle)*radius;
		glVertex2f(x2, y2);
	}
	glEnd();
}
void DrawEllipse_purple(float cx, float cy, float rx, float ry)
{
	float the = 2 * 3.1415926 / 360;
	float c = cosf(the);//precalculate the sine and cosine
	float s = sinf(the);
	float t;

	float x = 1;//we start at angle = 0 
	float y = 0;

	glColor3f(1.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (int ii = 0; ii < 360; ii++)
	{
		//apply radius and offset
		glVertex2f(x * rx + cx, y * ry + cy);//output vertex 

											 //apply the rotation matrix
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();
}
void DrawEllipse_blue(float cx, float cy, float rx, float ry)
{
	float the = 2 * 3.1415926 / 360;
	float c = cosf(the);
	float s = sinf(the);
	float t;
	float x = 1;
	float y = 0;
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	for (int ii = 0; ii < 360; ii++)
	{
		glVertex2f(x * rx + cx, y * ry + cy);
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();
}
void DrawEllipse_lightblue(float cx, float cy, float rx, float ry)
{
	float the = 2 * 3.1415926 / 360;
	float c = cosf(the);
	float s = sinf(the);
	float t;
	float x = 1;
	float y = 0;
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	for (int ii = 0; ii < 360; ii++)
	{
		glVertex2f(x * rx + cx, y * ry + cy);
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();
}
void DrawEllipse_black(float cx, float cy, float rx, float ry)
{
	float the = 2 * 3.1415926 / 360;
	float c = cosf(the);
	float s = sinf(the);
	float t;
	float x = 1;
	float y = 0;
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_POLYGON);
	for (int ii = 0; ii < 360; ii++)
	{
		glVertex2f(x * rx + cx, y * ry + cy);
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();
}
void DrawEllipse_skin(float cx, float cy, float rx, float ry)
{
	float the = 2 * 3.1415926 / 360;
	float c = cosf(the);
	float s = sinf(the);
	float t;
	float x = 1;
	float y = 0;
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	for (int ii = 0; ii < 360; ii++)
	{
		glVertex2f(x * rx + cx, y * ry + cy);
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();
}
void DrawEllipse_red(float cx, float cy, float rx, float ry)
{
	float the = 2 * 3.1415926 / 360;
	float c = cosf(the);
	float s = sinf(the);
	float t;
	float x = 1;
	float y = 0;
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (int ii = 0; ii < 360; ii++)
	{
		glVertex2f(x * rx + cx, y * ry + cy);
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();
}
void DrawEllipse_darkgreen(float cx, float cy, float rx, float ry)
{
	float the = 2 * 3.1415926 / 360;
	float c = cosf(the);
	float s = sinf(the);
	float t;
	float x = 1;
	float y = 0;
	glColor3f(0.137, 0.556, 0.137);
	glBegin(GL_POLYGON);
	for (int ii = 0; ii < 360; ii++)
	{
		glVertex2f(x * rx + cx, y * ry + cy);
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();
}
void DrawEllipse_grey(float cx, float cy, float rx, float ry)
{
	float the = 2 * 3.1415926 / 360;
	float c = cosf(the);
	float s = sinf(the);
	float t;
	float x = 1;
	float y = 0;
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_POLYGON);
	for (int ii = 0; ii < 360; ii++)
	{
		glVertex2f(x * rx + cx, y * ry + cy);
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();
}
void drawText(float x, float y, char* str, int size)
{
	int len = strlen(str);
	//glPushMatrix();
	glRasterPos2f(x, y);
	//glTranslatef(x,y, 0);
	//glScalef(0.5, 0.5, 0.5);
	for (int i = 0; i<len; i++)
	{
		if (size == 1)
			//glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, str[i]);
		else if (size == 2)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str[i]);
		else if (size == 3)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
	}
}

void arc(GLfloat x, GLfloat y, GLdouble radius, GLfloat i, GLfloat j) {
	//i is intial angle,j is final angle of arc
	float x2, y2;
	float angle;
	glLineWidth(3.0);
	glBegin(GL_LINE_STRIP);
	for (angle = i; angle <= j; angle += 0.01)
	{
		x2 = x + sin(angle)*radius;
		y2 = y + cos(angle)*radius;
		glVertex2f(x2, y2);
	}
	glEnd();
}
void drawBG1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	//base left
	glVertex2d(0, 100);
	glVertex2d(125, 100);
	//base right
	glVertex2d(375, 100);
	glVertex2d(500, 100);
	//cover base left
	glVertex2d(0, 110);
	glVertex2d(125, 110);
	//cover base right
	glVertex2d(375, 110);
	glVertex2d(500, 110);
	//base inside
	glVertex2d(125, 130);
	glVertex2d(375, 130);
	//switch middle
	glVertex2d(398, 305);
	glVertex2d(402, 305);
	//diagonal left
	glVertex2d(30, 500);
	glVertex2d(75, 450);
	//diagonal right
	glVertex2d(425, 450);
	glVertex2d(470, 500);
	//base divide
	glVertex2d(125, 130);
	glVertex2d(375, 130);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2d(125, 100);
	glVertex2d(125, 400);
	glVertex2d(375, 400);
	glVertex2d(375, 100);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2d(75, 110);
	glVertex2d(75, 450);
	glVertex2d(425, 450);
	glVertex2d(425, 110);
	glEnd();
	//window
	//glBegin(GL_LINE_STRIP);
	//glVertex2d(125, 350);
	//glVertex2d(165, 350);
	//glVertex2d(165, 220);
	//glVertex2d(125, 220);
	//glEnd();
	//switch board
	glColor3f(0.309f, 0.184f, 0.184f);
	glBegin(GL_POLYGON);
	glVertex2d(390, 330);
	glVertex2d(410, 330);
	glVertex2d(410, 280);
	glVertex2d(390, 280);
	glEnd();

	//light pink
	glBegin(GL_LINE_LOOP);
	glVertex2d(375, 110);
	glVertex2d(425, 110);
	glVertex2d(425, 450);
	glVertex2d(75, 450);
	glVertex2d(75, 110);
	glVertex2d(125, 110);
	glVertex2d(125, 450);
	glVertex2d(375, 450);
	glEnd();

	//orange base
	glColor4f(0.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(125, 130);
	glVertex2d(375, 130);
	glVertex2d(375, 0);
	glVertex2d(125, 0);
	glEnd();
	glColor4f(0.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(125, 0);
	glVertex2d(0, 0);
	glVertex2d(0, 100);
	glVertex2d(125, 100);
	glEnd();
	glColor4f(0.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(500, 0);
	glVertex2d(375, 0);
	glVertex2d(375, 100);
	glVertex2d(500, 100);
	glEnd();
	//color base inside
	glColor3f(0.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(125, 130);
	glVertex2d(375, 130);
	glVertex2d(375, 400);
	glVertex2d(125, 400);
	glEnd();

	//window base color
	glColor3f(0.647f, 0.164f, 0.1647f);
	//#declare Brown = color red 0.647059 green 0.164706 blue 0.164706
	glBegin(GL_POLYGON);
	glVertex2d(125, 350);
	glVertex2d(165, 350);
	glVertex2d(165, 220);
	glVertex2d(125, 220);
	glEnd();

	//left bottom
	glColor3f(0.749f, 0.847f, 0.847f);
	//#declare LightBlue = color red 0.74902 green 0.847059 blue 0.847059
	glBegin(GL_POLYGON);
	glVertex2d(125, 224);
	glVertex2d(138, 224);
	glVertex2d(138, 283);
	glVertex2d(125, 283);
	glEnd();
	//left top
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(125, 287);
	glVertex2d(138, 287);
	glVertex2d(138, 346);
	glVertex2d(125, 346);
	glEnd();
	//right bottom
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(142, 224);
	glVertex2d(161, 224);
	glVertex2d(161, 283);
	glVertex2d(142, 283);
	glEnd();
	//right top
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(142, 287);
	glVertex2d(161, 287);
	glVertex2d(161, 346);
	glVertex2d(142, 346);
	glEnd();

	//#declare Plum = color red 0.917647 green 0.678431 blue 0.917647
	//#declare Pink = color red 0.737255 green 0.560784 blue 0.560784
	//glColor3f(0.917f, 0.678f, 0.917f);
	//glColor3f(0.937f, 0.560f, 0.560f);
	glColor3f(1.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(0, 100);
	glVertex2d(125, 100);
	glVertex2d(125, 110);
	glVertex2d(0, 110);
	glEnd();
	//glColor3f(0.937f, 0.560f, 0.560f);
	glColor3f(1.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(375, 100);
	glVertex2d(500, 100);
	glVertex2d(500, 110);
	glVertex2d(375, 110);
	glEnd();
	//plum blocks
	glColor3f(0.937f, 0.560f, 0.560f);
	glBegin(GL_POLYGON);
	glVertex2d(375, 110);
	glVertex2d(425, 110);
	glVertex2d(425, 450);
	glVertex2d(375, 450);
	glEnd();
	glColor3f(0.937f, 0.560f, 0.560f);
	glBegin(GL_POLYGON);
	glVertex2d(75, 110);
	glVertex2d(125, 110);
	glVertex2d(125, 450);
	glVertex2d(75, 450);
	glEnd();
	glColor3f(0.937f, 0.560f, 0.560f);
	glBegin(GL_POLYGON);
	glVertex2d(75, 450);
	glVertex2d(425, 450);
	glVertex2d(425, 400);
	glVertex2d(75, 400);
	glEnd();

	//double-border violet
	glColor3f(1.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(30, 500);
	glVertex2d(40, 500);
	glVertex2d(75, 460);
	glVertex2d(75, 450);
	glEnd();
	glColor3f(1.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(425, 450);
	glVertex2d(425, 460);
	glVertex2d(75, 460);
	glVertex2d(75, 450);
	glEnd();
	glColor3f(1.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(425, 450);
	glVertex2d(425, 460);
	glVertex2d(460, 500);
	glVertex2d(470, 500);
	glEnd();

	//plum top
	glColor3f(0.937f, 0.560f, 0.560f);
	glBegin(GL_POLYGON);
	glVertex2d(40, 500);
	glVertex2d(460, 500);
	glVertex2d(425, 460);
	glVertex2d(75, 460);
	glEnd();
	glColor3f(0.937f, 0.560f, 0.560f);
	glBegin(GL_POLYGON);
	glVertex2d(30, 500);
	glVertex2d(75, 450);
	glVertex2d(75, 110);
	glVertex2d(0, 110);
	glVertex2d(0, 500);
	glEnd();
	glColor3f(0.937f, 0.560f, 0.560f);
	glBegin(GL_POLYGON);
	glVertex2d(470, 500);
	glVertex2d(425, 450);
	glVertex2d(425, 110);
	glVertex2d(500, 110);
	glVertex2d(500, 500);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2d(75, 110);
	glVertex2d(75, 450);
	glVertex2d(425, 450);
	glVertex2d(425, 110);
	glEnd();

	//switch board
	glColor3f(0.309f, 0.184f, 0.184f);
	glBegin(GL_POLYGON);
	glVertex2d(390, 330);
	glVertex2d(410, 330);
	glVertex2d(410, 280);
	glVertex2d(390, 280);
	glEnd();

	//switches
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(398, 312);
	glVertex2d(402, 312);
	glVertex2d(402, 305);
	glVertex2d(398, 305);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(398, 298);
	glVertex2d(402, 298);
	glVertex2d(402, 305);
	glVertex2d(398, 305);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2d(398, 305);
	glVertex2d(402, 305);
	glEnd();


	//circle
	//glColor3f(0.0, 0.0, 0.0);
	//glBegin(GL_POLYGON);
	//for (int i = 0; i < 360; i++)
	//{
	//	theta = i*3.142/180;
	//	glVertex2f(250+50*cos(theta),250+50*sin(theta));
	//}
	//glEnd();

	DrawEllipse_blue(250, 60, 70, 30);
	DrawEllipse_purple(250, 60, 50, 15);
	DrawEllipse_blue(250, 60, 30, 5);

	//dialogue dad
	DrawEllipse_grey(210, 360, 20, 25);
	DrawEllipse_grey(230, 340, 20, 25);
	DrawEllipse_grey(188, 345, 20, 25);
	DrawEllipse_grey(195, 320, 15, 20);
	DrawEllipse_grey(220, 320, 20, 25);
	glColor3f(0.0f, 0.0f, 0.0f);
	drawText(175, 342, "I always wanted a boy. ", 2);
	drawText(178, 332, "I will never be able", 2);
	drawText(190, 319, "to accept her.", 2);
	glFlush();
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_POLYGON);
	glVertex2d(220, 310);
	glVertex2d(235, 310);
	glVertex2d(230, 286);
	glEnd();
	//dialogue mom
	DrawEllipse_grey(300, 350, 25, 30);
	DrawEllipse_grey(320, 325, 20, 25);
	DrawEllipse_grey(278, 330, 20, 25);
	DrawEllipse_grey(285, 305, 15, 20);
	DrawEllipse_grey(310, 305, 20, 25);
	glColor3f(0.0f, 0.0f, 0.0f);
	drawText(285, 358, "How is that ", 2);
	drawText(275, 345, "my fault? Even", 2);
	drawText(265, 332, "I always wanted a boy.", 2);
	drawText(265, 319, " Why does your family", 2);
	drawText(278, 306, " blame me?", 2);
	glFlush();
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_POLYGON);
	glVertex2d(278, 300);
	glVertex2d(293, 300);
	glVertex2d(273, 268);
	glEnd();

	glFlush();
}
void drawDad1() {

	//man's hand
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2f(234.0, 220.0);
	glVertex2f(240.0, 233.0);
	glVertex2f(238.0, 236.0);
	glVertex2f(232.0, 230.0);
	glEnd();
	//man's palm
	DrawEllipse_skin(240, 236, 2, 2);
	//man's shirt
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2f(225.0, 260.0);
	glVertex2f(217.0, 210.0);
	glVertex2f(238.0, 210.0);
	glEnd();
	//man's neck
	DrawEllipse_skin(228, 256, 3, 3);
	//man's collar
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2f(225.0, 260.0);
	glVertex2f(222.0, 255.0);
	glVertex2f(230.0, 240.0);
	glVertex2f(235.0, 245.0);
	glEnd();
	//man's pant
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2f(217, 210);
	glVertex2f(220, 150);
	glVertex2f(228, 150);
	glVertex2f(228, 210);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(235, 210);
	glVertex2f(235, 155);
	glVertex2f(228, 155);
	glVertex2f(228, 210);
	glEnd();
	//man's shoe
	DrawEllipse_skin(224, 146, 5, 5);
	DrawEllipse_skin(232, 151, 5, 5);
	//man's head
	DrawEllipse_skin(230, 268, 10, 12);
	//hair
	DrawEllipse_black(230, 279, 9, 6);
	DrawEllipse_black(222, 270, 3, 8);
	DrawEllipse_skin(225, 268, 2, 4);


	glColor3f(0.0, 0.0, 0.0);
	//eyes
	DrawEllipse_black(235, 271, 1, 2);

	//mouth
	glColor3f(0.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(240, 267);
	glVertex2d(235, 263);
	glVertex2d(240, 260);
	glEnd();

	glFlush();
}
void moveDadUP(int x, int y) {
	//man's hand
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2f(x + 230.0, y + 220.0);
	glVertex2f(x + 240.0, y + 233.0);
	glVertex2f(x + 238.0, y + 236.0);
	glVertex2f(x + 228.0, y + 230.0);
	glEnd();

	//man's palm
	DrawEllipse_skin(x + 239, y + 236, 2, 2);
	//man's shirt
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2f(225.0, 260.0);
	glVertex2f(217.0, 210.0);
	glVertex2f(238.0, 210.0);
	glEnd();
	//man's neck
	DrawEllipse_skin(228, 256, 3, 3);
	//man's collar
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2f(225.0, 260.0);
	glVertex2f(222.0, 255.0);
	glVertex2f(230.0, 240.0);
	glVertex2f(235.0, 245.0);
	glEnd();
	//man's pant
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2f(217, 210);
	glVertex2f(220, 150);
	glVertex2f(228, 150);
	glVertex2f(228, 210);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(235, 210);
	glVertex2f(235, 155);
	glVertex2f(228, 155);
	glVertex2f(228, 210);
	glEnd();
	//man's shoe
	DrawEllipse_skin(224, 146, 5, 5);
	DrawEllipse_skin(232, 151, 5, 5);
	//man's head
	DrawEllipse_skin(230, 268, 10, 12);
	//hair
	DrawEllipse_black(230, 279, 9, 6);
	DrawEllipse_black(222, 270, 3, 8);
	DrawEllipse_skin(225, 268, 2, 4);

	glColor3f(0.0, 0.0, 0.0);
	//eyes
	DrawEllipse_black(235, 271, 1, 2);


	//mouth
	glColor3f(0.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(240, 267);
	glVertex2d(235, 263);
	glVertex2d(240, 260);
	glEnd();


}
void moveDadDOWN(int x, int y) {
	//man's hand
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2f(x + 230.0, 230.0 - y);
	glVertex2f(x + 240.0, 243.0 - y);
	glVertex2f(x + 238.0, 246.0 - y);
	glVertex2f(x + 228.0, 240.0 - y);
	glEnd();

	//man's palm
	DrawEllipse_skin(x + 239, 246 - y, 2, 2);
	//man's shirt
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2f(225.0, 260.0);
	glVertex2f(217.0, 210.0);
	glVertex2f(238.0, 210.0);
	glEnd();
	//man's neck
	DrawEllipse_skin(228, 256, 3, 3);
	//man's collar
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2f(225.0, 260.0);
	glVertex2f(222.0, 255.0);
	glVertex2f(230.0, 240.0);
	glVertex2f(235.0, 245.0);
	glEnd();
	//man's pant
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2f(217, 210);
	glVertex2f(220, 150);
	glVertex2f(228, 150);
	glVertex2f(228, 210);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(235, 210);
	glVertex2f(235, 155);
	glVertex2f(228, 155);
	glVertex2f(228, 210);
	glEnd();
	//man's shoe
	DrawEllipse_skin(224, 146, 5, 5);
	DrawEllipse_skin(232, 151, 5, 5);
	//man's head
	DrawEllipse_skin(230, 268, 10, 12);
	//hair
	DrawEllipse_black(230, 279, 9, 6);
	DrawEllipse_black(222, 270, 3, 8);
	DrawEllipse_skin(225, 268, 2, 4);

	glColor3f(0.0, 0.0, 0.0);
	//eyes
	DrawEllipse_black(235, 271, 1, 2);

	//mouth
	glColor3f(0.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(240, 267);
	glVertex2d(235, 263);
	glVertex2d(240, 260);
	glEnd();
}
void drawMom1() {
	//mom's skirt
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(255, 210);
	glVertex2f(250, 180);
	glVertex2f(273, 180);
	glVertex2f(270, 210);
	glEnd();

	//mom's waist
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(255, 210);
	glVertex2f(255, 225);
	glVertex2f(270, 225);
	glVertex2f(270, 210);
	glEnd();
	//mom's top
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(255, 225);
	glVertex2f(270, 225);
	glVertex2f(271, 238);
	glVertex2d(268, 250);
	//glVertex2f(265, 240);
	glVertex2f(260, 250);
	glVertex2f(254, 238);
	glEnd();
	//mom's hand
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(258, 235);
	glVertex2f(258, 228);
	glVertex2f(248, 223);
	glVertex2f(248, 230);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(243, 235);
	glVertex2f(248, 223);
	glVertex2f(252, 227);
	glVertex2f(245, 238);
	glEnd();
	//mom's palm
	DrawEllipse_skin(244, 238, 2, 2);

	//mom's leg
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(256, 180);
	glVertex2d(256, 150);
	glVertex2d(258, 150);
	glVertex2d(258, 180);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(265, 180);
	glVertex2d(265, 150);
	glVertex2d(267, 150);
	glVertex2d(267, 180);
	glEnd();
	//mom's shoe
	DrawEllipse_red(257, 148, 5, 5);
	DrawEllipse_red(266, 148, 5, 5);
	DrawEllipse_skin(257, 150, 3, 3);
	DrawEllipse_skin(266, 150, 3, 3);
	//hair back
	DrawEllipse_black(266, 257, 10, 14);
	DrawEllipse_black(254, 262, 2, 3);
	//mom's head
	DrawEllipse_skin(263, 257, 10, 12);
	DrawEllipse_skin(263, 245, 3, 3);
	//hair
	DrawEllipse_black(263, 267, 10, 6);
	DrawEllipse_black(271, 262, 3, 8);
	DrawEllipse_black(271, 255, 3, 10);
	DrawEllipse_skin(269, 257, 1, 3);

	//eyes
	DrawEllipse_black(257, 259, 1, 2);

	//mouth
	glColor3f(0.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(252, 256);
	glVertex2d(257, 253);
	glVertex2d(252, 250);
	glEnd();
	glFlush();
}
void moveMomUP(int x, int y) {
	//mom's skirt
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(255, 210);
	glVertex2f(250, 180);
	glVertex2f(273, 180);
	glVertex2f(270, 210);
	glEnd();

	//mom's waist
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(255, 210);
	glVertex2f(255, 225);
	glVertex2f(270, 225);
	glVertex2f(270, 210);
	glEnd();
	//mom's top
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(255, 225);
	glVertex2f(270, 225);
	glVertex2f(271, 238);
	glVertex2d(268, 250);
	//glVertex2f(265, 240);
	glVertex2f(260, 250);
	glVertex2f(254, 238);
	glEnd();
	//mom's hand
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(258 + x, 235 + y);
	glVertex2f(258 + x, 228 + y);
	glVertex2f(248 + x, 223 + y);
	glVertex2f(248 + x, 230 + y);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(243 + x, 235 + y);
	glVertex2f(248 + x, 223 + y);
	glVertex2f(252 + x, 227 + y);
	glVertex2f(245 + x, 238 + y);
	glEnd();
	//mom's palm
	DrawEllipse_skin(244 + x, 238 + y, 2, 2);

	//mom's leg
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(256, 180);
	glVertex2d(256, 150);
	glVertex2d(258, 150);
	glVertex2d(258, 180);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(265, 180);
	glVertex2d(265, 150);
	glVertex2d(267, 150);
	glVertex2d(267, 180);
	glEnd();
	//mom's shoe
	DrawEllipse_red(257, 148, 5, 5);
	DrawEllipse_red(266, 148, 5, 5);
	DrawEllipse_skin(257, 150, 3, 3);
	DrawEllipse_skin(266, 150, 3, 3);

	//hair back
	DrawEllipse_black(266, 257, 10, 14);
	DrawEllipse_black(254, 262, 2, 3);
	//mom's head
	DrawEllipse_skin(263, 257, 10, 12);
	DrawEllipse_skin(263, 245, 3, 3);
	//hair
	DrawEllipse_black(263, 267, 10, 6);
	DrawEllipse_black(271, 262, 3, 8);
	DrawEllipse_black(271, 255, 3, 10);
	DrawEllipse_skin(269, 257, 1, 3);
	//eyes
	DrawEllipse_black(257, 259, 1, 2);

	//mouth
	glColor3f(0.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(252, 256);
	glVertex2d(257, 253);
	glVertex2d(252, 250);
	glEnd();
	glFlush();
}
void moveMomDOWN(int x, int y) {
	//mom's skirt
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(255, 210);
	glVertex2f(250, 180);
	glVertex2f(273, 180);
	glVertex2f(270, 210);
	glEnd();

	//mom's waist
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(255, 210);
	glVertex2f(255, 225);
	glVertex2f(270, 225);
	glVertex2f(270, 210);
	glEnd();
	//mom's top
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(255, 225);
	glVertex2f(270, 225);
	glVertex2f(271, 238);
	glVertex2d(268, 250);
	//glVertex2f(265, 240);
	glVertex2f(260, 250);
	glVertex2f(254, 238);
	glEnd();
	//mom's hand
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(258 + x, 245 - y);
	glVertex2f(258 + x, 238 - y);
	glVertex2f(248 + x, 233 - y);
	glVertex2f(248 + x, 240 - y);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(243 + x, 245 - y);
	glVertex2f(248 + x, 233 - y);
	glVertex2f(252 + x, 237 - y);
	glVertex2f(245 + x, 248 - y);
	glEnd();
	//mom's palm
	DrawEllipse_skin(244 + x, 248 - y, 2, 2);

	//mom's leg
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(256, 180);
	glVertex2d(256, 150);
	glVertex2d(258, 150);
	glVertex2d(258, 180);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(265, 180);
	glVertex2d(265, 150);
	glVertex2d(267, 150);
	glVertex2d(267, 180);
	glEnd();
	//mom's shoe
	DrawEllipse_red(257, 148, 5, 5);
	DrawEllipse_red(266, 148, 5, 5);
	DrawEllipse_skin(257, 150, 3, 3);
	DrawEllipse_skin(266, 150, 3, 3);

	//hair back
	DrawEllipse_black(266, 257, 10, 14);
	DrawEllipse_black(254, 262, 2, 3);
	//mom's head
	DrawEllipse_skin(263, 257, 10, 12);
	DrawEllipse_skin(263, 245, 3, 3);
	//hair
	DrawEllipse_black(263, 267, 10, 6);
	DrawEllipse_black(271, 262, 3, 8);
	DrawEllipse_black(271, 255, 3, 10);
	DrawEllipse_skin(269, 257, 1, 3);
	//eyes
	DrawEllipse_black(257, 259, 1, 2);

	//mouth
	glColor3f(0.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2d(252, 256);
	glVertex2d(257, 253);
	glVertex2d(252, 250);
	glEnd();
	glFlush();
}
void drawTukku1() {
	//girl's top
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(67, 162);
	glVertex2f(62, 115);
	glVertex2f(78, 115);
	glVertex2f(73, 162);
	glEnd();
	//border
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(62, 115);
	glVertex2f(62, 112);
	glVertex2f(78, 112);
	glVertex2f(78, 115);
	glEnd();
	//girl's leg
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(66, 112);
	glVertex2d(66, 92);
	glVertex2d(68, 92);
	glVertex2d(68, 112);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(72, 112);
	glVertex2d(72, 92);
	glVertex2d(74, 92);
	glVertex2d(74, 112);
	glEnd();

	//girl's shoe
	DrawEllipse_blue(67, 91, 3, 3);
	DrawEllipse_blue(73, 91, 3, 3);

	//girl's hand
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(58, 132);
	glVertex2f(60, 128);
	glVertex2f(69, 150);
	glVertex2f(67, 156);
	glEnd();
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(73, 156);
	glVertex2f(71, 150);
	glVertex2f(80, 128);
	glVertex2f(82, 132);
	glEnd();
	//girl's palm
	DrawEllipse_skin(59, 131, 2, 2);
	DrawEllipse_skin(81, 131, 2, 2);
	//hair back
	DrawEllipse_black(70, 175, 10, 8);
	DrawEllipse_black(63, 183, 5, 8);
	DrawEllipse_black(77, 183, 5, 8);
	//girl's head
	DrawEllipse_skin(70, 170, 8, 10);
	DrawEllipse_skin(70, 160, 3, 3);
	//hair
	DrawEllipse_black(70, 181, 10, 4);
	DrawEllipse_blue(63, 186, 2, 2);
	DrawEllipse_blue(77, 186, 2, 2);
	DrawEllipse_black(63, 177, 2, 2);
	DrawEllipse_black(77, 177, 2, 2);

	//doormat
	DrawEllipse_blue(250, 60, 70, 30);
	DrawEllipse_purple(250, 60, 50, 15);
	DrawEllipse_blue(250, 60, 30, 5);
	//eyes
	DrawEllipse_black(67, 171, 1, 2);
	DrawEllipse_black(73, 171, 1, 2);

	//mouth
	glBegin(GL_LINES);
	glVertex2d(67, 165);
	glVertex2d(73, 165);
	glEnd();

	glFlush();
}
void drawBG2() {
	glClear(GL_COLOR_BUFFER_BIT);
	//lawn
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(0, 0);
	glVertex2d(500, 0);
	glVertex2d(500, 200);
	glVertex2d(0, 200);
	glEnd();

	//road
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_POLYGON);
	glVertex2d(300, 30);
	glVertex2d(420, 30);
	glVertex2d(460, 0);
	glVertex2d(340, 0);
	glEnd();
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_POLYGON);
	glVertex2d(0, 30);
	glVertex2d(500, 30);
	glVertex2d(500, 100);
	glVertex2d(0, 100);
	glEnd();

	//house block1
	glColor3f(0.1, 0.1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0, 400);
	glVertex2d(0, 110);
	glVertex2d(80, 110);
	glVertex2d(80, 350);
	glEnd();
	//house block2
	glColor3f(0.1, 0.1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(75, 110);
	glVertex2d(155, 110);
	glVertex2d(155, 250);
	glVertex2d(115, 285);
	glVertex2d(75, 250);
	glEnd();
	//home stairs
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(5, 100);
	glVertex2d(85, 100);
	glVertex2d(85, 105);
	glVertex2d(5, 105);
	glEnd();
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(10, 105);
	glVertex2d(80, 105);
	glVertex2d(80, 110);
	glVertex2d(10, 110);
	glEnd();
	//door
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(20, 190);
	glVertex2d(70, 190);
	glVertex2d(70, 110);
	glVertex2d(20, 110);
	glEnd();
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(0, 200);
	glVertex2d(80, 200);
	glVertex2d(80, 210);
	glVertex2d(0, 210);
	glEnd();

	//shade
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(70, 245);
	glVertex2d(115, 285);
	glVertex2d(115, 295);
	glVertex2d(70, 255);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2d(115, 295);
	glVertex2d(115, 285);
	glVertex2d(160, 245);
	glVertex2d(160, 255);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2d(0, 400);
	glVertex2d(90, 340);
	glVertex2d(90, 350);
	glVertex2d(0, 410);
	glEnd();

	//door blocks
	//bottom left
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(25, 115);
	glVertex2d(25, 145);
	glVertex2d(43, 145);
	glVertex2d(43, 115);
	glEnd();
	//top left
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(25, 155);
	glVertex2d(25, 185);
	glVertex2d(43, 185);
	glVertex2d(43, 155);
	glEnd();
	//bottom right
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(48, 115);
	glVertex2d(48, 145);
	glVertex2d(65, 145);
	glVertex2d(65, 115);
	glEnd();
	//top right
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(48, 155);
	glVertex2d(48, 185);
	glVertex2d(65, 185);
	glVertex2d(65, 155);
	glEnd();
	//window
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(95, 170);
	glVertex2d(140, 170);
	glVertex2d(140, 230);
	glVertex2d(95, 230);
	glEnd();
	//window blocks
	//bottom left
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(100, 175);
	glVertex2d(115, 175);
	glVertex2d(115, 198);
	glVertex2d(100, 198);
	glEnd();
	//top left
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(100, 203);
	glVertex2d(115, 203);
	glVertex2d(115, 225);
	glVertex2d(100, 225);
	glEnd();
	//bottom right
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(120, 175);
	glVertex2d(135, 175);
	glVertex2d(135, 198);
	glVertex2d(120, 198);
	glEnd();
	//top right
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(120, 203);
	glVertex2d(135, 203);
	glVertex2d(135, 225);
	glVertex2d(120, 225);
	glEnd();



	//red house 
	//block1
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(340, 100);
	glVertex2d(440, 100);
	glVertex2d(440, 280);
	glVertex2d(340, 280);
	glEnd();
	//block2
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(440, 100);
	glVertex2d(500, 100);
	glVertex2d(500, 200);
	glVertex2d(440, 200);
	glEnd();

	//shade light red
	glColor3f(1.0f, 0.25f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(440, 200);
	glVertex2d(500, 200);
	glVertex2d(500, 260);
	glVertex2d(440, 260);
	glEnd();
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_LINES);
	glVertex2d(440, 200);
	glVertex2d(500, 200);
	glVertex2d(440, 210);
	glVertex2d(500, 210);
	glVertex2d(500, 220);
	glVertex2d(440, 220);
	glVertex2d(500, 230);
	glVertex2d(440, 230);
	glVertex2d(500, 240);
	glVertex2d(440, 240);
	glVertex2d(500, 250);
	glVertex2d(440, 250);
	glEnd();
	//triangle1
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(325, 280);
	glVertex2d(455, 280);
	glVertex2d(390, 400);
	glEnd();
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(330, 210);
	glVertex2d(450, 210);
	glVertex2d(440, 240);
	glVertex2d(340, 240);
	glEnd();

	//door
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(360, 100);
	glVertex2d(420, 100);
	glVertex2d(420, 180);
	glVertex2d(360, 180);
	glEnd();
	//windows
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(450, 120);
	glVertex2d(465, 120);
	glVertex2d(465, 180);
	glVertex2d(450, 180);
	glEnd();
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(475, 120);
	glVertex2d(490, 120);
	glVertex2d(490, 180);
	glVertex2d(475, 180);
	glEnd();
	//windows
	//center
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(380, 245);
	glVertex2d(400, 245);
	glVertex2d(400, 275);
	glVertex2d(380, 275);
	glEnd();
	//right
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(405, 245);
	glVertex2d(425, 245);
	glVertex2d(425, 275);
	glVertex2d(405, 275);
	glEnd();
	//left
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(375, 245);
	glVertex2d(355, 245);
	glVertex2d(355, 275);
	glVertex2d(375, 275);
	glEnd();

	//lamp post
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(312, 100);
	glVertex2d(320, 100);
	glVertex2d(318, 160);
	glVertex2d(314, 160);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(312, 160);
	glVertex2d(320, 160);
	glVertex2d(322, 165);
	glVertex2d(310, 165);
	glEnd();
	//pole
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(315, 165);
	glVertex2d(317, 165);
	glVertex2d(317, 350);
	glVertex2d(315, 350);
	glEnd();
	//light base
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(312, 350);
	glVertex2d(320, 350);
	glVertex2d(320, 355);
	glVertex2d(312, 355);
	glEnd();
	//light
	glColor3f(0.753f, 0.753f, 0.753f);
	glBegin(GL_POLYGON);
	glVertex2d(312, 355);
	glVertex2d(320, 355);
	glVertex2d(330, 395);
	glVertex2d(302, 395);
	glEnd();
	//light top
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(302, 395);
	glVertex2d(330, 395);
	glVertex2d(330, 400);
	glVertex2d(302, 400);
	glEnd();
	glColor3f(0.753f, 0.753f, 0.753f);
	glBegin(GL_POLYGON);
	glVertex2d(313, 400);
	glVertex2d(319, 400);
	glVertex2d(319, 405);
	glVertex2d(313, 405);
	glEnd();
	//cloud
	DrawEllipse_lightblue(410, 480, 40, 50);
	DrawEllipse_lightblue(440, 490, 25, 30);
	DrawEllipse_lightblue(370, 475, 25, 30);
	DrawEllipse_lightblue(350, 485, 25, 28);
	//tree
	DrawEllipse_darkgreen(200, 320, 30, 35);
	DrawEllipse_darkgreen(220, 295, 25, 30);
	DrawEllipse_darkgreen(178, 300, 25, 30);
	DrawEllipse_darkgreen(185, 265, 20, 25);
	DrawEllipse_darkgreen(210, 265, 25, 30);
	//tree stem
	// Brown = color red 0.647059 green 0.164706 blue 0.164706
	glColor3f(0.647f, 0.2f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2d(195, 100);
	glVertex2d(206, 100);
	glVertex2d(202, 275);
	glVertex2d(198, 315);
	glEnd();
	glColor3f(0.647f, 0.2f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2d(200, 262);
	glVertex2d(215, 278);
	glVertex2d(200, 249);
	glEnd();
	glColor3f(0.647f, 0.2f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2d(198, 245);
	glVertex2d(178, 275);
	glVertex2d(198, 255);
	glEnd();

	//dialogue
	DrawEllipse_grey(270, 310, 25, 30);
	DrawEllipse_grey(290, 285, 20, 25);
	DrawEllipse_grey(248, 290, 20, 25);
	DrawEllipse_grey(255, 265, 15, 20);
	DrawEllipse_grey(280, 270, 15, 25);
	glColor3f(0.0f, 0.0f, 0.0f);
	drawText(240, 297, "Why do my parents ", 2);
	drawText(235, 282, "hate me so much? Am", 2);
	drawText(245, 267, "I not a good girl?", 2);
	glFlush();
	DrawEllipse_grey(265, 240, 7, 7);
	DrawEllipse_grey(260, 228, 4, 4);

	glFlush();

}
void drawTukku2() {
	//girl's top
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(238, 125);
	glVertex2f(262, 125);
	glVertex2f(253, 183);
	glVertex2f(247, 183);
	glEnd();
	//border
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(238, 125);
	glVertex2f(262, 125);
	glVertex2f(262, 120);
	glVertex2f(238, 120);
	glEnd();
	//girl's leg
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(244, 120);
	glVertex2d(248, 120);
	glVertex2d(248, 95);
	glVertex2d(244, 95);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(252, 120);
	glVertex2d(256, 120);
	glVertex2d(256, 95);
	glVertex2d(252, 95);
	glEnd();
	//girl's hand
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(230, 143);
	glVertex2f(247, 183);
	glVertex2f(251, 178);
	glVertex2f(234, 138);
	glEnd();
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(270, 143);
	glVertex2f(253, 183);
	glVertex2f(249, 178);
	glVertex2f(266, 138);
	glEnd();
	//girl's palm
	DrawEllipse_skin(232, 140, 4, 4);
	DrawEllipse_skin(268, 140, 4, 4);

	//girl's shoe
	DrawEllipse_blue(246, 96, 4, 4);
	DrawEllipse_blue(254, 96, 4, 4);

	//hair back
	DrawEllipse_black(250, 203, 12, 12);
	DrawEllipse_black(242, 214, 5, 8);
	DrawEllipse_black(258, 214, 5, 8);
	//girl's head
	DrawEllipse_skin(250, 198, 10, 14);
	DrawEllipse_skin(250, 184, 4, 4);
	//hair
	DrawEllipse_black(250, 208, 10, 4);
	DrawEllipse_blue(242, 211, 2, 2);
	DrawEllipse_blue(258, 211, 2, 2);
	DrawEllipse_black(242, 205, 2, 2);
	DrawEllipse_black(258, 204, 2, 2);

	//mouth
	glColor3f(0.0, 0.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	arc(250.0, 183.0, 7, -0.64, 0.64);
	/**glBegin(GL_LINES);
	glVertex2d(246, 190);
	glVertex2d(254, 190);
	glEnd(); **/
	glPointSize(1.0);
	//eyes
	DrawEllipse_black(246, 198, 1, 2);
	DrawEllipse_black(254, 198, 1, 2);
	//tears
	DrawEllipse_lightblue(246, 194, 1, 2);
	DrawEllipse_lightblue(254, 194, 1, 2);
	DrawEllipse_lightblue(246, 189, 1, 2);
	DrawEllipse_lightblue(254, 189, 1, 2);
	DrawEllipse_lightblue(246, 184, 1, 2);
	DrawEllipse_lightblue(254, 184, 1, 2);
	//arc(248, 190, 5, 2.2, 2.8);


	glFlush();
}
void drawBG3() {
	float theta;
	//lawn
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(0, 0);
	glVertex2d(500, 0);
	glVertex2d(500, 200);
	glVertex2d(0, 200);
	glEnd();

	//road
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_POLYGON);
	glVertex2d(0, 50);
	glVertex2d(500, 50);
	glVertex2d(500, 150);
	glVertex2d(0, 150);
	glEnd();
	//hospital block1
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(80, 150);
	glVertex2d(280, 150);
	glVertex2d(280, 350);
	glVertex2d(180, 350);
	glVertex2d(180, 420);
	glVertex2d(80, 420);
	glEnd();
	//hospital block2
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(50, 150);
	glVertex2d(80, 150);
	glVertex2d(80, 420);
	glVertex2d(50, 350);
	glEnd();
	//border
	glColor3f(0.1, 0.1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(50, 350);
	glVertex2d(80, 420);
	glVertex2d(80, 430);
	glVertex2d(50, 360);
	glEnd();
	glColor3f(0.1, 0.1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(80, 420);
	glVertex2d(180, 420);
	glVertex2d(180, 430);
	glVertex2d(80, 430);
	glEnd();
	glColor3f(0.1, 0.1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(180, 350);
	glVertex2d(280, 350);
	glVertex2d(280, 360);
	glVertex2d(180, 360);
	glEnd();
	//door
	glColor3f(0.1, 0.1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(100, 150);
	glVertex2d(200, 150);
	glVertex2d(200, 230);
	glVertex2d(100, 230);
	glEnd();
	//
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(155, 150);
	glVertex2d(190, 150);
	glVertex2d(190, 220);
	glVertex2d(155, 220);
	glEnd();
	//
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(110, 150);
	glVertex2d(145, 150);
	glVertex2d(145, 220);
	glVertex2d(110, 220);
	glEnd();
	//window
	glColor3f(0.1, 0.1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(190, 280);
	glVertex2d(265, 280);
	glVertex2d(265, 320);
	glVertex2d(190, 320);
	glEnd();
	//
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(195, 315);
	glVertex2d(225, 315);
	glVertex2d(225, 285);
	glVertex2d(195, 285);
	glEnd();
	//
	glColor3f(0.749f, 0.847f, 0.847f);
	glBegin(GL_POLYGON);
	glVertex2d(230, 315);
	glVertex2d(260, 315);
	glVertex2d(260, 285);
	glVertex2d(230, 285);
	glEnd();
	//shade
	glColor3f(0.1, 0.1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(120, 260);
	glVertex2d(190, 260);
	glVertex2d(170, 280);
	glVertex2d(100, 280);
	glEnd();
	//
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(120, 250);
	glVertex2d(120, 260);
	glVertex2d(100, 280);
	glVertex2d(100, 270);
	glEnd();
	//
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(120, 260);
	glVertex2d(120, 250);
	glVertex2d(190, 250);
	glVertex2d(190, 260);
	glEnd();

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINES);
	glVertex2d(80, 420);
	glVertex2d(80, 150);
	glEnd();
	//circle
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(130 + 30 * cos(theta), 355 + 40 * sin(theta));
	}
	glEnd();
	//logo
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(110, 350);
	glVertex2d(150, 350);
	glVertex2d(150, 360);
	glVertex2d(110, 360);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(127, 325);
	glVertex2d(133, 325);
	glVertex2d(133, 385);
	glVertex2d(127, 385);
	glEnd();

	//cloud
	DrawEllipse_lightblue(410, 480, 40, 50);
	DrawEllipse_lightblue(440, 490, 25, 30);
	DrawEllipse_lightblue(370, 475, 25, 30);
	DrawEllipse_lightblue(350, 485, 25, 28);

	glColor3f(0.0f, 0.0f, 0.0f);
	drawText(320, 400, "Seeing their child in danger they realised how much they ", 2);
	drawText(320, 380, "loved her and it didn't matter whether it's a girl or a boy.", 2);
	glFlush();

	glFlush();
}
void drawDad3() {
	//man's shirt
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(358, 195);
	glVertex2d(362, 195);
	glVertex2d(368, 155);
	glVertex2d(352, 155);
	glEnd();
	//man's belt
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(352, 155);
	glVertex2d(368, 155);
	glVertex2d(368, 152);
	glVertex2d(352, 152);
	glEnd();
	//man's hand left
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(358, 195);
	glVertex2d(361, 190);
	glVertex2d(351, 170);
	glVertex2d(348, 175);
	glEnd();
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(346, 187);
	glVertex2d(342, 182);
	glVertex2d(351, 170);
	glVertex2d(354, 175);
	glEnd();
	//man's hand right
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(362, 195);
	glVertex2d(358, 190);
	glVertex2d(368, 170);
	glVertex2d(372, 175);
	glEnd();
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(372, 175);
	glVertex2d(372, 160);
	glVertex2d(368, 160);
	glVertex2d(368, 175);
	glEnd();
	//palm dad
	DrawEllipse_skin(344, 186, 3, 3);
	DrawEllipse_skin(370, 160, 3, 3);
	//man's pant left
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(346, 137);
	glVertex2d(352, 152);
	glVertex2d(362, 152);
	glVertex2d(354, 137);
	glEnd();
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(344, 120);
	glVertex2d(346, 137);
	glVertex2d(354, 137);
	glVertex2d(352, 120);
	glEnd();
	//man's pant right
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(360, 152);
	glVertex2d(368, 152);
	glVertex2d(370, 137);
	glVertex2d(362, 137);
	glEnd();
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(370, 120);
	glVertex2d(362, 137);
	glVertex2d(370, 137);
	glVertex2d(375, 128);
	glEnd();
	//shoe dad
	DrawEllipse_skin(348, 120, 4, 4);
	DrawEllipse_skin(372, 124, 4, 4);

	//head dad
	DrawEllipse_skin(360, 205, 6, 12);
	DrawEllipse_skin(360, 195, 3, 6);
	//hair
	DrawEllipse_black(360, 213, 6, 4);
	DrawEllipse_black(365, 205, 3, 8);
	DrawEllipse_skin(363, 204, 2, 4);
	//eyes
	DrawEllipse_black(357, 206, 1, 2);
	//mouth
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_LINES);
	glVertex2d(355, 201);
	glVertex2d(358, 199);
	glEnd();
	glFlush();
}
void moveDad3(int x, int y) {

	//man's shirt
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(x + 358, 195);
	glVertex2d(x + 362, 195);
	glVertex2d(x + 368, 155);
	glVertex2d(x + 352, 155);
	glEnd();

	//man's hand left
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(x + 358, 195);
	glVertex2d(x + 361, 190);
	glVertex2d(x + 351, 170);
	glVertex2d(x + 348, 175);
	glEnd();
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(x + 346, 187);
	glVertex2d(x + 342, 182);
	glVertex2d(x + 351, 170);
	glVertex2d(x + 354, 175);
	glEnd();
	//man's hand right
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(x + 362, 195);
	glVertex2d(x + 358, 190);
	glVertex2d(x + 368, 170);
	glVertex2d(x + 372, 175);
	glEnd();
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(x + 372, 175);
	glVertex2d(x + 372, 160);
	glVertex2d(x + 368, 160);
	glVertex2d(x + 368, 175);
	glEnd();
	//palm dad
	DrawEllipse_skin(x + 344, 186, 3, 3);
	DrawEllipse_skin(x + 370, 160, 3, 3);
	//man's pant left
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(x + 346, 137);
	glVertex2d(x + 352, 155);
	glVertex2d(x + 362, 155);
	glVertex2d(x + 354, 137);
	glEnd();
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(x + 344, 120);
	glVertex2d(x + 346, 137);
	glVertex2d(x + 354, 137);
	glVertex2d(x + 352, 120);
	glEnd();
	//man's pant right
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(x + 360, 155);
	glVertex2d(x + 368, 155);
	glVertex2d(x + 370, 137);
	glVertex2d(x + 362, 137);
	glEnd();
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(x + 370, 120);
	glVertex2d(x + 362, 137);
	glVertex2d(x + 370, 137);
	glVertex2d(x + 375, 128);
	glEnd();
	//man's belt
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(x + 352, 155);
	glVertex2d(x + 368, 155);
	glVertex2d(x + 368, 152);
	glVertex2d(x + 352, 152);
	glEnd();
	//shoe dad
	DrawEllipse_skin(x + 348, 120, 4, 4);
	DrawEllipse_skin(x + 372, 124, 4, 4);

	//head dad
	DrawEllipse_skin(x + 360, 205, 6, 12);
	DrawEllipse_skin(x + 360, 195, 3, 6);
	//hair
	DrawEllipse_black(x + 360, 213, 6, 4);
	DrawEllipse_black(x + 365, 205, 3, 8);
	DrawEllipse_skin(x + 363, 204, 2, 4);
	//eyes
	DrawEllipse_black(x + 357, 206, 1, 2);
	//mouth
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_LINES);
	glVertex2d(x + 355, 201);
	glVertex2d(x + 358, 199);
	glEnd();
	//for (int j = 0; j < 10000; j++) {
	//		glFlush();
	//	}
	//glFlush();
}
void moveMom3(int x, int y) {
	//mom's top
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(x + 418, 190);
	glVertex2d(x + 424, 190);
	glVertex2d(x + 424, 160);
	glVertex2d(x + 414, 160);
	glVertex2d(x + 413, 178);
	glEnd();
	//mom's hand left
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(x + 418, 195);
	glVertex2d(x + 421, 190);
	glVertex2d(x + 411, 170);
	glVertex2d(x + 408, 175);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(x + 406, 187);
	glVertex2d(x + 402, 182);
	glVertex2d(x + 411, 170);
	glVertex2d(x + 414, 175);
	glEnd();
	//mom's hand right
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(x + 422, 195);
	glVertex2d(x + 418, 190);
	glVertex2d(x + 428, 170);
	glVertex2d(x + 432, 175);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(x + 432, 175);
	glVertex2d(x + 432, 160);
	glVertex2d(x + 428, 160);
	glVertex2d(x + 428, 175);
	glEnd();
	//palm mom
	DrawEllipse_skin(x + 404, 186, 3, 3);
	DrawEllipse_skin(x + 430, 160, 3, 3);
	//mom's skirt
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(x + 414, 160);
	glVertex2f(x + 424, 160);
	glVertex2f(x + 427, 140);
	glVertex2f(x + 409, 140);
	glEnd();
	//mom's leg left
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(x + 408, 130);
	glVertex2d(x + 412, 140);
	glVertex2d(x + 416, 140);
	glVertex2d(x + 412, 130);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(x + 406, 117);
	glVertex2d(x + 408, 130);
	glVertex2d(x + 412, 130);
	glVertex2d(x + 410, 117);
	glEnd();
	//mom's leg right
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(x + 420, 140);
	glVertex2d(x + 424, 140);
	glVertex2d(x + 424, 130);
	glVertex2d(x + 420, 130);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(x + 428, 117);
	glVertex2d(x + 420, 130);
	glVertex2d(x + 424, 130);
	glVertex2d(x + 432, 117);
	glEnd();
	//shoe mom
	DrawEllipse_red(x + 408, 117, 4, 4);
	DrawEllipse_red(x + 427, 119, 4, 4);
	DrawEllipse_skin(x + 408, 119, 2, 2);
	DrawEllipse_skin(x + 427, 121, 2, 2);
	//hair back
	DrawEllipse_black(x + 418, 200, 6, 12);
	DrawEllipse_black(x + 423, 200, 6, 12);
	//head mom
	DrawEllipse_skin(x + 420, 200, 6, 12);
	DrawEllipse_skin(x + 420, 190, 3, 6);
	//hair
	DrawEllipse_black(x + 420, 211, 6, 6);
	DrawEllipse_black(x + 425, 205, 3, 8);
	DrawEllipse_black(x + 425, 198, 3, 8);
	DrawEllipse_skin(x + 422, 200, 1, 3);
	//eyes
	DrawEllipse_black(x + 417, 201, 1, 2);
	//mouth
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_LINES);
	glVertex2d(x + 415, 196);
	glVertex2d(x + 418, 194);
	glEnd();
	//for (int j = 0; j < 10000; j++) {
	//	glFlush();
	//}
	//glFlush();
}
void drawMom3() {
	//mom's top
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(418, 190);
	glVertex2d(424, 190);
	glVertex2d(424, 160);
	glVertex2d(414, 160);
	glVertex2d(413, 178);
	glEnd();
	//mom's hand left
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(418, 195);
	glVertex2d(421, 190);
	glVertex2d(411, 170);
	glVertex2d(408, 175);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(406, 187);
	glVertex2d(402, 182);
	glVertex2d(411, 170);
	glVertex2d(414, 175);
	glEnd();
	//mom's hand right
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(422, 195);
	glVertex2d(418, 190);
	glVertex2d(428, 170);
	glVertex2d(432, 175);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(432, 175);
	glVertex2d(432, 160);
	glVertex2d(428, 160);
	glVertex2d(428, 175);
	glEnd();
	//palm mom
	DrawEllipse_skin(404, 186, 3, 3);
	DrawEllipse_skin(430, 160, 3, 3);
	//mom's skirt
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(414, 160);
	glVertex2f(424, 160);
	glVertex2f(427, 140);
	glVertex2f(409, 140);
	glEnd();
	//mom's leg left
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(408, 130);
	glVertex2d(412, 140);
	glVertex2d(416, 140);
	glVertex2d(412, 130);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(406, 117);
	glVertex2d(408, 130);
	glVertex2d(412, 130);
	glVertex2d(410, 117);
	glEnd();
	//mom's leg right
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(420, 140);
	glVertex2d(424, 140);
	glVertex2d(424, 130);
	glVertex2d(420, 130);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(428, 117);
	glVertex2d(420, 130);
	glVertex2d(424, 130);
	glVertex2d(432, 117);
	glEnd();
	//shoe mom
	DrawEllipse_red(408, 117, 4, 4);
	DrawEllipse_red(427, 119, 4, 4);
	DrawEllipse_skin(408, 119, 2, 2);
	DrawEllipse_skin(427, 121, 2, 2);
	//hair back
	DrawEllipse_black(418, 200, 6, 12);
	DrawEllipse_black(423, 200, 6, 12);
	//head mom
	DrawEllipse_skin(420, 200, 6, 12);
	DrawEllipse_skin(420, 190, 3, 6);
	//hair
	DrawEllipse_black(420, 211, 6, 6);
	DrawEllipse_black(425, 205, 3, 8);
	DrawEllipse_black(425, 198, 3, 8);
	DrawEllipse_skin(422, 200, 1, 3);
	//eyes
	DrawEllipse_black(417, 201, 1, 2);
	//mouth
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_LINES);
	glVertex2d(415, 196);
	glVertex2d(418, 194);
	glEnd();

	glFlush();
}
void drawBG4() {
	//Silver = color red 0.90 green 0.91 blue 0.98
	//background
	glColor3f(0.90, 0.91, 0.98);
	glBegin(GL_POLYGON);
	glVertex2d(0, 0);
	glVertex2d(500, 0);
	glVertex2d(500, 500);
	glVertex2d(0, 500);
	glEnd();
	glFlush();
}
void drawDad4() {
	//man's shirt
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(235, 275);
	glVertex2d(255, 275);
	glVertex2d(260, 210);
	glVertex2d(230, 210);
	glEnd();
	//man's belt
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(230, 210);
	glVertex2d(260, 210);
	glVertex2d(260, 205);
	glVertex2d(230, 205);
	glEnd();
	//man's hand left
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(235, 275);
	glVertex2d(240, 265);
	glVertex2d(215, 220);
	glVertex2d(210, 230);
	glEnd();
	//man's hand right
	glColor3f(0.4, 0.0, 0.34);
	glBegin(GL_POLYGON);
	glVertex2d(255, 275);
	glVertex2d(250, 265);
	glVertex2d(275, 220);
	glVertex2d(280, 230);
	glEnd();
	//neck dad
	DrawEllipse_skin(245, 282, 7, 7);
	//man's collar
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(235, 283);
	glVertex2d(230, 278);
	glVertex2d(240, 268);
	glVertex2d(245, 273);
	glEnd();
	glColor3f(0.4, 0.0, 0.1);
	glBegin(GL_POLYGON);
	glVertex2d(255, 283);
	glVertex2d(260, 278);
	glVertex2d(250, 268);
	glVertex2d(245, 273);
	glEnd();
	//man's pant
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(230, 205);
	glVertex2d(230, 130);
	glVertex2d(242, 130);
	glVertex2d(246, 205);
	glEnd();
	glColor3f(0.5f, 0.35f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex2d(244, 205);
	glVertex2d(248, 130);
	glVertex2d(260, 130);
	glVertex2d(260, 205);
	glEnd();
	//shoe dad
	DrawEllipse_skin(236, 128, 7, 7);
	DrawEllipse_skin(254, 128, 7, 7);
	//palm dad
	DrawEllipse_skin(213, 225, 5, 5);
	DrawEllipse_skin(278, 225, 5, 5);
	//hair back
	DrawEllipse_black(245, 302, 16, 16);
	DrawEllipse_black(245, 305, 14, 16);
	//head dad
	DrawEllipse_skin(245, 295, 14, 18);
	//hair
	DrawEllipse_black(245, 308, 14, 4);
	DrawEllipse_black(245, 310, 8, 4);
	//eyes
	DrawEllipse_black(241, 297, 1, 3);
	DrawEllipse_black(249, 297, 1, 3);
	//mouth
	arc(245.0, 294.0, 10, 2.12, 4);

	glFlush();
}
void drawMom4() {
	//mom's top
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(300, 220);
	glVertex2d(325, 220);
	glVertex2d(322, 240);
	glVertex2d(303, 240);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(322, 240);
	glVertex2d(325, 260);
	glVertex2d(300, 260);
	glVertex2d(303, 240);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(300, 260);
	glVertex2d(328, 260);
	glVertex2d(323, 270);
	glVertex2d(303, 270);
	glEnd();
	//mom's hand left
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(303, 270);
	glVertex2d(308, 260);
	glVertex2d(290, 220);
	glVertex2d(285, 230);
	glEnd();
	//mom's hand right
	glColor3f(1.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2d(323, 270);
	glVertex2d(318, 260);
	glVertex2d(337, 220);
	glVertex2d(342, 230);
	glEnd();
	//mom's skirt
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(300, 220);
	glVertex2f(325, 220);
	glVertex2f(333, 170);
	glVertex2f(293, 170);
	glEnd();
	//mom's left leg
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2f(305, 170);
	glVertex2f(309, 170);
	glVertex2f(309, 130);
	glVertex2f(305, 130);
	glEnd();
	//mom's right leg
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2f(317, 170);
	glVertex2f(321, 170);
	glVertex2f(321, 130);
	glVertex2f(317, 130);
	glEnd();
	//moms's shoe
	DrawEllipse_red(307, 128, 6, 6);
	DrawEllipse_red(319, 128, 6, 6);
	DrawEllipse_skin(307, 132, 4, 4);
	DrawEllipse_skin(319, 132, 4, 4);
	//palm
	DrawEllipse_skin(286, 225, 5, 5);
	DrawEllipse_skin(339, 225, 5, 5);
	//mom's neck
	DrawEllipse_skin(313, 270, 6, 6);

	//hair back
	DrawEllipse_black(322, 294, 10, 22);
	DrawEllipse_black(304, 292, 10, 20);
	//mom's head
	DrawEllipse_skin(313, 290, 14, 18);
	//hair
	DrawEllipse_black(315, 310, 14, 10);
	DrawEllipse_black(327, 294, 4, 14);
	DrawEllipse_black(300, 294, 2, 14);
	DrawEllipse_black(305, 304, 4, 3);
	//eyes
	DrawEllipse_black(309, 293, 1, 3);
	DrawEllipse_black(317, 293, 1, 3);

	//mouth
	//arc(400.0, 288.0, 25, -0.64, 0.64);
	arc(313.0, 290.0, 10, 2.12, 4);

	glFlush();
}
void drawTukku4() {

	//girl's top
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(160, 155);
	glVertex2f(190, 155);
	glVertex2f(183, 220);
	glVertex2f(167, 220);
	glEnd();
	//border
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(160, 155);
	glVertex2f(190, 155);
	glVertex2f(190, 150);
	glVertex2f(160, 150);
	glEnd();
	//girl's leg
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(172, 150);
	glVertex2d(168, 150);
	glVertex2d(168, 130);
	glVertex2d(172, 130);
	glEnd();
	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);
	glVertex2d(178, 150);
	glVertex2d(182, 150);
	glVertex2d(182, 130);
	glVertex2d(178, 130);
	glEnd();
	//girl's hand
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(183, 220);
	glVertex2f(205, 225);
	glVertex2f(205, 218);
	glVertex2f(171, 208);
	glEnd();
	glColor3f(0.2, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(167, 220);
	glVertex2f(167, 208);
	glVertex2f(152, 178);
	glVertex2f(150, 188);
	glEnd();
	//girl's palm
	DrawEllipse_skin(207, 222, 4, 4);
	DrawEllipse_skin(152, 183, 4, 4);

	//girl's shoe
	DrawEllipse_blue(170, 130, 4, 4);
	DrawEllipse_blue(180, 130, 4, 4);
	//girl's neck
	DrawEllipse_skin(175, 220, 5, 5);
	//hair back
	DrawEllipse_black(175, 238, 12, 10);
	DrawEllipse_black(167, 247, 5, 8);
	DrawEllipse_black(183, 247, 5, 8);
	//girl's head
	DrawEllipse_skin(175, 233, 10, 12);
	//hair
	DrawEllipse_black(175, 242, 10, 4);
	DrawEllipse_blue(167, 246, 2, 2);
	DrawEllipse_blue(183, 246, 2, 2);
	DrawEllipse_black(167, 239, 2, 2);
	DrawEllipse_black(183, 239, 2, 2);
	//eyes
	DrawEllipse_black(172, 234, 1, 2);
	DrawEllipse_black(178, 234, 1, 2);
	//mouth
	glPointSize(1.0);
	arc(175.0, 233.0, 8, 2.2, 3.8);

	glFlush();
}
void display1() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawBG1();
	drawDad1();
	drawMom1();
	drawTukku1();
	glColor3f(0.0f, 0.0f, 1.0f);
	drawText(400, 30, "Enter '2' or '3' to move", 2);
	drawText(400, 15, "hands up and down", 2);
	glFlush();
}
void display2() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawBG1();
	drawTukku1();
	for (int i = 0; i <= 10; i++) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		drawBG1();
		drawTukku1();
		for (int j = 0; j < 10; j++) {

			moveDadUP(0, i);
			moveMomUP(0, i);
			glFlush();
		}
	}
	glFlush();
}
void display3() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawBG1();
	drawTukku1();
	for (int i = 0; i <= 10; i++) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		drawBG1();
		drawTukku1();
		for (int j = 0; j < 10; j++) {
			moveDadDOWN(0, i);
			moveMomDOWN(0, i);
			glFlush();
		}
	}
	glColor3f(0.0f, 0.0f, 1.0f);
	drawText(400, 30, "Enter '4' to continue ", 2);
	glFlush();
}
void display4() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 0.0);
	drawBG2();
	drawTukku2();
	glColor3f(0.0f, 0.0f, 1.0f);
	drawText(400, 30, "Enter '5' to continue ", 2);
	glFlush();

}
void display5() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glClearColor(0.2, 0.7, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	drawText(120, 250, "The girl in her absent mind meets with an accident and gets severely injured.", 2);
	glFlush();
	glColor3f(0.0f, 0.0f, 1.0f);
	drawText(400, 30, "Enter '6' to continue ", 2);
	glFlush();
}
void display6() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glClearColor(1.0, 1.0, 1.0, 0.0);
	drawBG3();
	drawDad3();
	drawMom3();
	glColor3f(0.0f, 0.0f, 1.0f);
	drawText(400, 30, "Enter '7' to continue ", 2);
	glFlush();
}
void display7() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 0.0);
	drawBG3();
	drawDad3();
	drawMom3();
	for (int i = 0; i > -150; i--) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		drawBG3();
		for (int j = 0; j < 10; j++) {
			//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			moveDad3(i, 195);
			moveMom3(i, 196);
			glFlush();
		}

		//glFlush();
	}

	glColor3f(0.0f, 0.0f, 1.0f);
	drawText(400, 30, "Enter '8' to continue ", 2);
	glFlush();
}
void display8() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawBG4();
	drawDad4();
	drawMom4();
	drawTukku4();
	glColor3f(0.0f, 0.0f, 1.0f);
	drawText(220, 400, "HAPPY FAMILY ", 2);
	drawText(400, 30, "THE END! ", 2);
	glFlush();
}
void display0() {
	glClearColor(0.0, 0.2, 0.4, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.2);
	//continue option
	drawText(380, 90, "Press C to continue", 2);
	drawText(380, 60, "At any time, press 1-8 ", 2);
	drawText(380, 30, "to switch among slides", 2);
	//Team Members
	drawText(10, 90, "Team Members:", 2);
	drawText(20, 60, "1. Neha Thakur (USN: 1DS15CS064)", 2);
	drawText(20, 35, "2. Rashi Verma (USN: 1DS15CS081)", 2);

	//guidance
	drawText(198, 270, "Under the guidance of:", 2);
	drawText(100, 235, "Prof. Shubha Bhat", 2);
	drawText(300, 235, "Prof. Ravichandra H", 2);

	glColor3f(1.0, 1.0, 1.0);
	//Topic
	//print(200, 350, "WAR AND PEACE");
	drawText(195, 360, "WAR AND PEACE", 3);
	drawText(195, 320, "The Unwanted Child", 3);
	glFlush();
}
void myKeyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case '1':display1();
		break;
	case '2':display2();
		break;
	case '3':display3();
		break;
	case '4':display4();
		break;
	case '5':display5();
		break;
	case '6':display6();
		break;
	case '7':display7();
		break;
	case '8':display8();
		break;
	case 'x':display0();
		break;
	case 'X':display0();
		break;
	case 'c':display1();
		break;
	case 'C':display1();
		break;
	}
}
int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("WAR AND PEACE");
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
	glutDisplayFunc(display0);
	glutKeyboardFunc(myKeyboard);
	glutMainLoop();
}
