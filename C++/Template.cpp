// ������. ����� ������, ��������� �� �������� ��������� ���� �� 'a' �� 'e' � �������������� ������ '?'. 
// ����� ��������, ��� ������ ������������� �������,  ���� ��� ���������� �� ������� 
// ������� ���� �������������� ������ �� �������� ��������� ����� �� 'a' �� 'e'. 
// ���� �������������� ������ � ������� ���������, ��� ����� ���� �������� �� ������ �����. 
// ��������, ������� "a?b?" ������������� ������ "aabc", "aebd", "aaba" � ��. 
// �������� ��� ������, ��������������� ������� �������, � ������������������ �������.
//
// ������� ������
// ������ - ������, ��������� �� �������� ��������� ���� �� 'a' �� 'e' � �������������� ������ '?'.
//
// �������� ������
// �������� ��� ������, ��������������� �������, � ������������������ �������.
//
// ������� ����������� ���������

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// ����� ������� ����� � ����
void out(string& str)
{
    ofstream coutf;
    static int s;

    if (s) coutf.open("output.txt", ios_base::app);
    else   coutf.open("output.txt");

    coutf << ++s << "\t" << str[0];
    for (int i = 1; i < str.length(); i++)
        coutf << " " << str[i];
    coutf << endl;

    coutf.close();
}

// ����������� ���������� ����� �� �������
void ord(const string& temp, string& str, string& symb, int idx) 
{
    if (idx == temp.length())
    {
        out(str);
        return;
    }

    if (temp[idx] != '?')
    {
        str[idx] = temp[idx];
        ord(temp, str, symb, idx + 1);
    }
    else
        for (int i = 0; i < symb.length(); i++)
        {
            str[idx] = symb[i];
            ord(temp, str, symb, idx + 1);
        }
}

int main()
{
    setlocale(LC_ALL, "ru");

    string temp;
    cout << "������� ������" << endl;
    cin >> temp;

    string str(temp.length(), '?');
    string symb = "abcde";

    ord(temp, str, symb, 0);

    cout << "����� � ����� \"output.txt\"" << endl;

    system("pause");
    return 0;
}


