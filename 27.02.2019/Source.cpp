#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<locale.h>

using namespace std;

void CountChar(char *str)
{
	int alpha_c = 0;
	int digit_c = 0;
	int others_c = 0;

	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			alpha_c++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			digit_c++;
		}
		else
		{
			others_c++;
		}
	}
	cout << alpha_c << " ";
	cout << digit_c << " ";
	cout << others_c << endl;
}

void CountWords(char *str)
{
	int Words = 0;

	for (size_t i = 0; i < strlen(str); i++)
	{
		if ( str[i] == ' ')
		{
			if (str[i-1] == ' ')
			{
				continue;
			}

			Words++;
		}
	}
	if (str[0] == ' ')
	{
		Words--;
	}
	if (str[strlen(str) - 1] == ' ')
	{
		Words--;
	}

	Words = Words + 1;
	cout << Words << endl;
}

bool CorrectBrackets(char *str)
{
	int Brackets = 0;

	for (size_t i = 0; i < strlen(str); i++)
	{

		if (str[i] == '(')
		{
			Brackets++; 
		}
		else if (str[i] == ')')
		{
			Brackets--;
		}

		if (Brackets < 0)
		{
			return 0;
		}

	}
	if (Brackets == 0)
	{
		return 1;
	}
	else
		return 0;

}

void strlen1(char *str)
{
	int i = 0;
	do
	{
		i++;

	} while (str[i] != '\0');

	cout << i << endl;
}

int HowManyWords(char *str)
{
	int k = 0;
	for (size_t i = 0; i < strlen(str) - 4; i++)
	{
		if (str[i] == 't' || str[i] == 'T')
		{
			if (str[i+1] == 'e' || str[i] == 'E')
			{
				if (str[i+2] == 'x' || str[i] == 'X')
				{
					if (str[i+3] == 't' || str[i] == 'T')
					{
						if (str[i+4] == ' ' || str[i + 4] == '\0' || str[i + 4] == '.' || str[i + 4] == ',')
						{
							k++;
						}

					}

				}

			}

		}

	}

	return k;
}


int main()
{
	int flag;
	char str[100] = { 't','e','x','t','\0' };
	char *p, *context;

	//strcpy_s(str, "Hello, World!");


	//cout << str << endl;
	//cout << strlen(str) << endl;

	cin.getline(str, 100);



	system("pause");

}

//int flag;
//char str[100] = { 't','e','x','t','\0' };
//char *p, *context;
//
////strcpy_s(str, "Hello, World!");
//
//
////cout << str << endl;
////cout << strlen(str) << endl;/////////////////////////////////////////////STRTOK
//
//cin.getline(str, 100);
//
//p = strtok_s(str, " ", &context);
//
//while (p != NULL)
//{
//	cout << p << endl;
//	p = strtok_s(context, " ", &context);
//}



//int flag;
//char str[100] = { 't','e','x','t','\0' };
//strcpy_s(str, "Hello, World!1 2 3");