#pragma once
//
// A.L. Khizha, 2016-10-22
//
#ifndef _GRAPHICS_
#define _GRAPHICS_

#include <objidl.h>
#include <gdiplus.h>

namespace Grfx
{

	class Graphics
	{
		HWND hWnd;
		HDC hDC;
		Gdiplus::Color color;
		Gdiplus::Graphics * gr;
		ULONG_PTR           gdiplusToken;
		Gdiplus::Size	sz;
	public:

		Graphics();
		~Graphics();
		void setcolor(int c);
		void line(int x, int y, int x2, int y2);
		void circle(int x, int y, int r);
		void rectangle(int x, int y, int x2, int y2);
		// 2017-04-01 11:50 alkhizha
		void cls();
		// 2017-04-01 11:50 alkhizha
		void windowSize();
		int hSize();
		int vSize();

	}; // class Graphics

}; // namespace Grfx

#endif
