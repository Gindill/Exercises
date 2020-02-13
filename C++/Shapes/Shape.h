// ������� ����������� ����� ������
#pragma once
#include <windows.h>

namespace nsShape
{
    class Point
    {
    public:
        int first;
        int second;
    };

    class Shape
    {
    public:
        Shape() :X(), Y()   // ����������� �� ���������
        {
        }
        Shape(int x, int y) :X(x), Y(y)   // ����������� � �����������
        {
        }
        virtual ~Shape()    // ����������� ����������, �.�. ���������� � ������ ������-����������
        {
        }

        virtual void draw(HDC hdc) = 0; // ����� ����������� ������� ��������� ������
                                        // ������ ���� ����������� � ������ ������-����������

        void setCoord(int x, int y) // ��������� ��������� ������
        {
            X = x;
            Y = y;
        }

        void setCoord(Point c) // ��������� ��������� ������ ����� ����� Point
        {
            X = c.first;
            Y = c.second;
        }

        Point getCoord()      // ��������� ��������� ������
        {
            Point p;
            p.first = X;
            p.second = Y;

            return p;
        }

    protected:
        int X;   // ���������� ������ ������
        int Y;
    };
}

