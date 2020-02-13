// ����� ��������������� ������������, ������� ������ ������
#pragma once
#include "Shape.h"
#include <math.h>

namespace nsShape
{
    class Triangle :
        public Shape
    {
    public:
        Triangle() : E()   // ����������� �� ���������
        {
        }
        Triangle(int e) : E(e) // ����������� � �������� �������, ���������� �� ���������
        {
        }
        Triangle(int x, int y, int e) : Shape(x, y), E(e)   // ����������� � �����������
        {
        }
        ~Triangle()
        {
        }

        void draw(HDC hdc)  // ���������; �������� ��������� � ������� ���� 
        {
            for (float i = X; i <= X + 0.5 * E; i += 0.1)
            {
                SetPixel(hdc, i, Y + (i - X) * float(sqrt(3.0)), RGB(255, 255, 255));
            }
            for (int i = X + 0.5 * E; i >= X - 0.5 * E; i--)
            {
                SetPixel(hdc, i, Y + E * sqrt(3.0) / 2, RGB(255, 255, 255));
            }
            for (float i = X - 0.5 * E; i <= X; i += 0.1)
            {
                SetPixel(hdc, i, Y - (i - X) * float(sqrt(3.0)), RGB(255, 255, 255));
            }
        }

        void setEdge(int e) // ��������� ������� ������������
        {
            E = e;
        }

        int getEdge()     // ��������� ������� ������������
        {
            return E;
        }

    protected:
        int E;
    };
}
