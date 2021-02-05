#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int L1(vector<int>& arr, int delete_num, int le1)
{
	
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == delete_num)
		{
			break;
		}
		{
			le1 += 1;
		}
			
    }
	return le1;
}

void Delete(vector<int>& arr, int delete_num)
{
	for (int i = 0; i < arr.size(); i++)
	{
		
		if (arr[i] == delete_num)
		{
			arr.erase(arr.begin() + i);
		}
		else
		{
			continue;
		}
	}

}
void Swap(vector<int>& arr, int le1)
{
	reverse(begin(arr)+le1, end(arr));
}

int main()
{
	setlocale(LC_ALL, "ru");
	vector <int> arr;
	int size_arr = 0;
	
	cout << "Введите размер массива\n";
	cin >> size_arr;
	system("cls");
    arr.resize(size_arr);
	for (int i = 0; i < size_arr; i++)
	{
		cout << "Введите " << i + 1 << "ое число массива\n";
		cin >> arr[i];
		system("cls");

	}
	cout << "Введите число которое нужно удалить\n";
	int delete_num;
	cin >> delete_num;
	int le1 = 0;

	le1 = L1(arr, delete_num, le1);
	Delete(arr, delete_num);
	Swap(arr, le1);
	system("cls");

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i];
	}
	

}