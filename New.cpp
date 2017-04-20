#include <fstream> 
#include <iostream> 
#include <queue>
using namespace std;
int main()
{
	queue<int> que1;
	queue<int> que2;
	queue<int> que3;
	int p1 = 0;
	int p2 = 0;
	int variant = 0;
	int x = 0;
	int s = 0;
	setlocale(LC_ALL, "Russian");
	while (s == 0)
	{
		cout << "Ќажмите \n 1. чтобы внести элемент в первую очередь \n 2. чтобы внести элемент во вторую очередь \n 3. чтобы вытолкнуть элемент из первой очереди \n 4. чтобы вытолкнуть элемент из второй очереди \n 5. чтобы показать элементы первой очереди \n 6. чтобы показать элементы второй очереди \n 7. сли€ние \n 8. выход \n 9. дл€ вывода очередей " << endl;
		cin >> variant;
		switch (variant)
		{
		case 1:
			system("cls");
			cout << "¬ведите число" << endl;
			cin >> p1;
			que1.push(p1);
			break;

		case 2:
			system("cls");
			cout << "¬ведите число" << endl;
			cin >> p2;
			que2.push(p2);
			break;

		case 3:
			system("cls");
			if (que1.empty() == true)
			{
				cout << "ѕерва€ очередь пуста" << endl;
			}
			else
			{
					que1.pop();
			}
			break;

		case 4:
			system("cls");
			if (que2.empty() == true)
			{
				cout << "¬тора€ очередь пуста" << endl;
			}
			else
			{
					que2.pop();
			}
			break;
		case 5:
			system("cls");
			if (que1.empty() == true)
			{
				cout << "ѕерва€ очередь пуста" << endl;
			}
			else
			{	
				cout << "Ёлементы первой очереди" << endl;
				que3 = que1;
				while (!que3.empty())
				{
					cout << que3.front() << " ";
					que3.pop();
				}
				cout << endl;
			}
			break;
		case 6:
			system("cls");
			if (que2.empty() == true)
			{
			cout << "¬тора€ очередь пуста" << endl;
			}
			else
			{
			que3 = que2;
			cout << "Ёлементы второй очереди" << endl;
			while (!que3.empty())
			{
				cout << que3.front() << " ";
				que3.pop();
			}
			cout << endl;
		break;
		case 7:
			cout << "—колько элементов убрать?" << endl;
			cin >> x;
			if (x < que1.size())
			{

				for (int i = 0; i < x; i++)
					que1.pop();
				while (!que2.empty())
				{
					que1.push(que2.front());
					que2.pop();
				}
			}
			else
				cout << "ќшибка" << endl;
			break;

		case 8:
			s = 1;
			break;

		case 9:
			system("cls");
			if (que1.empty() == true)
			{
				cout << "ѕерва€ очередь пуста" << endl;
			}
			else
			{
				cout << "Ёлементы первой очереди" << endl;
				que3 = que1;
				while (!que3.empty())
				{
					cout << que3.front() << " ";
					que3.pop();
				}
				cout << endl;
			}
			if (que2.empty() == true)
			{
				cout << "¬тора€ очередь пуста" << endl;
			}
			else
			{
				cout << "Ёлементы второй очереди" << endl;
				que3 = que2;
				while (!que3.empty())
				{
					cout << que3.front() << " ";
					que3.pop();
				}
				cout << endl;
			}
			break;
		default:
		{
				   cout << "ќшибка" << endl;
				   break;
		}
		}
		}
	}
	cout<< "ѕрограмма завершена. –езультат сохранен" << endl;
}