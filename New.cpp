#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream> 
#include <iostream> 
#include <string>
#include <conio.h>
#include <queue>
using namespace std;
int main()
{
	queue<int> que1;
	queue<int> que2;
	queue<int> que3;
	setlocale(LC_ALL, "Russian");
	cout << "������� n/ 1. ����� ������ ������� � ������ ������� n/ 2. ����� ������ ������� �� ������ ������� n/ 3. ����� ���������� ������� �� ������ ������� n/ 4. ����� ���������� ������� �� ������ ������� n/ 5. ����� �������� �������� ������ ������� n/ 6. ����� �������� �������� ������ ������� n/ 7. ����� �������� �������� �������� n/ 8. ������� " << endl;
	int p1 = 0;
	int p2 = 0;
	int variant = 0;
	int s = 1;
	switch (variant) {
	case 1:
		while (s != 0)
		{ 
			s = 1;
			cout << "������� �����" << endl;
			cin >> p1;
			que1.push(p1);
			cout << "n\ ��� ������ ������� Escape, ��� ����� ��� ������ ����� Enter" << endl;
			int i_input;
			i_input = _getch();
			switch (i_input)
			{
			case 27:
				s = 0;
			}
		}
		break;
	case 2:
		while (s != 0)
		{
			s = 1;
			cout << "������� �����" << endl;
			cin >> p2;
			que2.push(p2);
			cout << "n\ ��� ������ ������� Escape, ��� ����� ��� ������ ����� Enter" << endl;
			int i_input;
			i_input = _getch();
			switch (i_input)
			{
			case 27:
				s = 0;
			}
		}
		break;
	case 3:
		while (s != 0)
		{
			s = 1;
			que1.pop();
			cout << "n\ ��� ������ ������� Escape, ��� ������������ ��� ������ ����� Enter" << endl;
			int i_input;
			i_input = _getch();
			switch (i_input)
			{
			case 27:
				s = 0;
			}
		}
		break;
	case 4:
		while (s != 0)
		{
			s = 1;
			que2.pop();
			cout << "n\ ��� ������ ������� Escape, ��� ������������ ��� ������ ����� Enter" << endl;
			int i_input;
			i_input = _getch();
			switch (i_input)
			{
			case 27:
				s = 0;
			}
		}
		break;
	case 5:
		que3 = que1;
		while (!que3.empty())
		{
			cout << que3.front() << " ";
			que3.pop();
		}
		break;
	case 6:
		que3 = que2;
		while (!que3.empty())
		{
			cout << que3.front() << " ";
			que3.pop();
		}
		break;
	case 7:
		break;
	case 8:
		break;
	default:
	{
			   cout << "����� �� ���������..." << endl;
			   exit(EXIT_SUCCESS);
			   break;
	}
	}
	
	cout << ("��������� ���������. ��������� ��������") << endl;
}