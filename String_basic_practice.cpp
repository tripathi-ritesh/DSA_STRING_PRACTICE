#include<iostream>
#include<string>
using namespace std;
int count(string str, char c)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == c)
		{
			count++;
		}
	}
	return count;
}
void removeSpaces(char st[],int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (st[i] != ' ')
		{
			st[count++] = st[i];
			st[count] = '\0';

		}
		cout << st;
	}
	
}
int main()
{
	//cout << "\n Enter Your Name :";
	//string str;
	//cin >> str;
	//cout << "\nYour Name is " << str;
	//cout << "\nLength Is " << str.length() << endl;
	//char ch;
	//cin >> ch;
	//cout << ch << " is present " << count(str, ch) << " times ::" << endl;
	cout << "\n ==========================================================\n";
	char st[] = "g  eeks   for ge eeks  ";
	cout << st << endl;
	int size = sizeof(st) / sizeof(st[0]);
	cout <<"\nSize is : "<<size ;
	removeSpaces(st,size);
	return 0;
}