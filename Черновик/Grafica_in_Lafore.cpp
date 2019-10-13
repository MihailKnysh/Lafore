// cf. C:\Users\alkhizha\OldDrive\users\alkhizha\work\C++\graphics_in_console3\graphics_in_console.cpp
/*
#include <conio.h>
#include <iostream>
#include "GRAFICA.h"

Grfx::Graphics console_graphics;

const char LARROW = 'K';
const char RARROW = 'M';
const char UARROW = 'H';
const char DARROW = 'P';
const char ClearScreen = 'c';
const char ScreenSize = 's';
const char CIRCLE = '1';
const char SEGMENT = '2';
const char RECTANGLE = '3';
const int  BGCOLOR = 0;
const int  COLOR = 2;
const int  STEP = 10;

class Shape
{
protected:
	int x, y, color;
public:
	Shape(int a, int b, int c) : x(a), y(b), color(c) {}
	virtual void draw(int c) = 0;
	void show() { draw(color); }
	void hide() { draw(BGCOLOR); }
	void move(int dx, int dy) { hide(); x += dx; y += dy; show(); }
};

class Segment : public Shape
{
	int dx, dy;
public:
	Segment(int a, int b, int da, int db, int c) : Shape(a, b, c), dx(da), dy(db) { show(); }
	void draw(int c)
	{
		console_graphics.setcolor(c); console_graphics.line(x, y, x + dx, y + dy);
	}
};

class Circle : public Shape
{
	int rad;
public:
	Circle(int a, int b, int radius, int c) : Shape(a, b, c),rad(radius) { show(); }
	void draw(int c)
	{
		console_graphics.setcolor(c); console_graphics.circle(x, y, rad);
	}
};

class Rectangl : public Shape
{
	int dx, dy;
public:
	Rectangl(int a, int b, int da, int db, int c) : Shape(a, b, c), dx(da), dy(db) { show(); }
	void draw(int c)
	{
		console_graphics.setcolor(c); console_graphics.rectangle(x, y, x + dx, y + dy);
	}
};

int main() {

	//system("cls");

	Segment s(200, 200, 100, 100, COLOR);
	Circle c(300, 300, 20, COLOR);
	Rectangl r(200, 200, 100, 100, COLOR);

	char ch;
	while (ch = _getch(), ch != 27)
	{
		if (ch == '\xe0')
		{
			ch = _getch();

			switch (ch)
			{
			case LARROW:
				c.move(-STEP, 0);
				break;
			case RARROW:
				c.move(+STEP, 0);
				break;
			case UARROW:
				c.move(0, -STEP);
				break;
			case DARROW:
				c.move(0, +STEP);
				break;
			}
		}
		else
			switch (ch)
			{
			case ClearScreen:
				console_graphics.cls();
				break;

			case ScreenSize:
				int vs = console_graphics.vSize();
				int hs = console_graphics.hSize();
				std::cout << hs << ' ' << vs << std::endl;

				break;
			}
	}

	return 0;
}
*/