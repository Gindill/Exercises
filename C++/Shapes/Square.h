// ����� ��������, ������� ������ ������
#pragma once
#include "Shape.h"

namespace nsShape
{
    class Square :
        public Shape
    {
    public:
        Square() :E()   // ����������� �� ���������
        {
        }
        Square(int e) :E(e) // ����������� � �������� �������, ���������� �� ���������
        {
        }
        Square(int x, int y, int e) :Shape(x, y), E(e)   // ����������� � �����������
        {
        }
        ~Square()
        {
        }

        void draw(HDC hdc)  // ���������; �������� ��������� � ����� ������� ����
        {
            for (int i = X; i <= X + E; i++)
            {
                SetPixel(hdc, i, Y, RGB(255, 255, 255));
            }
            for (int i = Y; i <= Y + E; i++)
            {
                SetPixel(hdc, X + E, i, RGB(255, 255, 255));
            }
            for (int i = X + E; i >= X; i--)
            {
                SetPixel(hdc, i, Y + E, RGB(255, 255, 255));
            }
            for (int i = Y + E; i >= Y; i--)
            {
                SetPixel(hdc, X, i, RGB(255, 255, 255));
            }
        }

        void setEdge(int e) // ��������� ������� ��������
        {
            E = e;
        }

        int getEdge()     // ��������� ������� ��������
        {
            return E;
        }

    protected:
        int E;
    };
}


