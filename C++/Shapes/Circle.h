// ����� ����������, ������� ������ ������
#pragma once
#define _USE_MATH_DEFINES
#include "Shape.h"
#include <math.h>

namespace nsShape
{
    class Circle :
        public Shape
    {
    public:
        Circle() : R()   // ����������� �� ���������   
        {
        }
        Circle(int r) : R(r) // ����������� � �������� �������, ���������� �� ���������
        {
        }
        Circle(int x, int y, int r) : Shape(x, y), R(r)   // ����������� � �����������
        {
        }
        ~Circle()
        {
        }

        void draw(HDC hdc)  // ���������; �������� ��������� � ������ ����������
        {
            for (float i = 0; i < M_PI * 2; i += 0.001)
            {
                SetPixel(hdc, X + R * cos(i), Y + R * sin(i), RGB(255, 255, 255));
            }
        }

        void setRadius(int r) // ��������� ������� ����������
        {
            R = r;
        }

        int getRadius()     // ��������� ������� ����������
        {
            return R;
        }

    protected:
        int R;
    };
}

