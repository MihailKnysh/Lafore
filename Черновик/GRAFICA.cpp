//
// A.L. Khizha, 2016-10-22
//
#include "GRAFICA.h"
//#include<iostream>
using namespace Grfx;

Graphics::Graphics()
{
	// Инициализация графики
	// Initialize GDI+.
	Gdiplus::GdiplusStartupInput gdiplusStartupInput;
	Gdiplus::GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

	hWnd = GetConsoleWindow();
	hDC = GetDC(hWnd);
	gr = new Gdiplus::Graphics(hDC); // Remarks (https://msdn.microsoft.com/en-us/library/ms536160(v=vs.85).aspx):
									 // When you use this constructor to create a Graphics::Graphics object,
									 // make sure that the Graphics::Graphics object is deleted or goes out of scope
									 // before the device context is released
									 // В частности, это заставляет поместить автоматическое создание объекта графики
									 // внуть функции - либо создавать/уничтожать объект динамически.
									 // Иначе возникает ошибка во время выполнения при попытке GdiplusShutdown

	Gdiplus::Color blackColor(255, 0, 0, 0);
	gr->Clear(blackColor);
	// 2017-04-07 12:21 alkhizha
	windowSize();

}
Graphics::~Graphics()
{
	delete gr;
	Gdiplus::GdiplusShutdown(gdiplusToken);
	ReleaseDC(hWnd, hDC);
}

void Graphics::setcolor(int c)
{
	BYTE byRed = 0, byGreen = 0, byBlue = 0;
	byRed = 255 * (c & 0x4);
	byGreen = 255 * (c & 0x2);
	byBlue = 255 * (c & 0x1);
	color = Gdiplus::Color(255, byRed, byGreen, byBlue);
}

void Graphics::line(int x, int y, int x2, int y2)
{
	Gdiplus::Pen      pen(color);
	gr->DrawLine(&pen, x, y, x2, y2);
}

void Graphics::circle(int x, int y, int r)
{
	Gdiplus::Pen      pen(color);
	gr->DrawEllipse(&pen, x - r, y - r, r, r);
}
void Graphics::rectangle(int x, int y, int x2, int y2)
{
	Gdiplus::Pen      pen(color);
	gr->DrawLine(&pen, x, y, x, y2);
	gr->DrawLine(&pen, x, y, x2, y);
	gr->DrawLine(&pen, x2, y, x2, y2);
	gr->DrawLine(&pen, x, y2, x2, y2);
}
// 2017-04-01 11:50 alkhizha
void Graphics::cls()
{
	gr->Clear(Gdiplus::Color(0, 0, 0, 0));
}
// 2017-04-01 11:50 alkhizha
void Graphics::windowSize()
{
	// Get a bounding rectangle for the clipping region.
	Gdiplus::Rect boundRect;
	gr->GetVisibleClipBounds(&boundRect);
	boundRect.GetSize(&sz);
}
int Graphics::hSize() { return sz.Width; }
int Graphics::vSize() { return sz.Height; }
