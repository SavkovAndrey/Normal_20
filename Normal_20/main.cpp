#include <iostream>
#include <string>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------

void Enter(string &str)
{
	cout << "Enter the string:\n";
		cin >> str;
}

void Process(string str, int& count)
{
	bool uniq = true;
	int t_count = 0;

	cout << "\nProcessing the data...\n";
	for (int i = 0; i < str.size(); i++)
	{
		uniq = true;
		t_count = 0;

		for (int j = 0; j < i; j++)
		{
			if (str[i] == str[j])
			{
				uniq = false;
			}
		}

		if (uniq)
		{
			for (int k = i; k < str.size(); k++)
			{
				if (str[i] == str[k])
				{
					t_count++;
				}
			}
		}

		if (t_count > count)
		{
			count = t_count;
		}

	}
}

void Print(string str, int count)
{
	cout << "\nString:  " << str << "\nResult:  " << count << endl;
}


//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	int x = 1;
	string str;
	int count = 0;

	while (x != 0)
	{
		cout << "\nMenu:\n";
		cout << "1 - To Enter the string\n";
		cout << "2 - To process the data\n";
		cout << "3 - To see result\n";
		cout << "0 - Exit\n";
		cout << "Please, enter your choice:";
		cin >> x;

		switch (x)
		{
		case 1:
		{
			Enter(str);
		}
		break;
		case 2:
		{
			Process(str, count);
		}
		break;
		case 3:
		{
			Print(str, count);
		}
		break;
		case 0:
		{
			cout << "Exiting the program!\n";
		}
		break;
		default:
			break;
		}
	}








	system("pause");
	return 0;
}
