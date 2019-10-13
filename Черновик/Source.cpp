//#pragma warning(disable : 4996)
//#pragma warning(disable:4786)

#include <iostream>		//for cout
#include <iomanip>		//for setw
#include <math.h>		//for pow
#include <conio.h>		//for getche()
#include <process.h>	//for exit()
#include <stdlib.h>		//for srand, ltoa()
#include <time.h>		//for srand
#include <string.h>		//for strlen()
#include <string>		//for string
#include <typeinfo>		//for dynamic_cast, typeid
#include <sstream>		//for ostringstream
#include <fstream>		//for ofstream
#include <algorithm>	//for STL functions
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <set>
#include <map>

//#include <Windows.h>
//#include "Grafica.h"
using namespace std;

typedef unsigned int	ui;
typedef long double		ld;
typedef const int		ci;
typedef const float		cf;

/*
int main()
{
	setlocale(LC_ALL, "Russian");
	//////////////////////////////////////////////////////////////
	//Возведение в четвёртую степень целых чисел 			//////
	//////////////////////////////////////////////////////////////
	/*
	int pow = 1;
	int numb = 1;
	while(pow<10000)
	{
		cout << setw(3) << numb;
		cout << setw(20) << pow << endl;
		numb++;
		pow = numb*numb*numb*numb;
	}
	cout << endl;
	*/

	/*
	//////////////////////////////////////////
	//Верхняя граница диапозона 		//////
	//////////////////////////////////////////
	
	cout << setprecision(30) << (pow(2, sizeof(unsigned int) * 8.0) - 1) << endl;
	cout << setprecision(30) << (pow(2, sizeof(double) * 8.0 - 1) - 1) << endl;
	*/

	/*
	//////////////////////////////////////////////////////////////
	//Генерация чисел Фибоначчи с помощью цикла while		//////
	//////////////////////////////////////////////////////////////
	
	ui limit = 4294967295;
	ui next = 0;//предпоследний член
	ui last = 1;//последний член последовательнсти
	while (next < limit/2)
	{
		cout << setprecision(30) << last << "   ";
		ui sum = next + last;
		next = last;
		last = sum;
	}
	cout << endl;
	*/

	/*
	//////////////////////////////////
	//Применение цикла  do		//////
	//////////////////////////////////
	
	int dividend, divisor;
	char ch;
	do
	{
		cout << "Enter dividend: "; cin >> dividend;
		cout << "Enter divisor:	"; cin >> divisor;
		cout << "After /= " << dividend / divisor << endl;
		cout << "Remainder of the division= " << dividend % divisor << endl;
		cout << "Again? (y/n): "; cin >> ch;
	} 
	while (ch != 'n');
	*/

	/*
	//////////////////////////////////
	//Число простое?			//////
	//////////////////////////////////
	
	int n;
	cout << "Enter number: "; cin >> n;
	for (int i = 2; i < n/2; i++)
	{
		if (n%i == 0)
		{
			cout << "The number is not simple!!! It divided by " << i << endl;
		}
	}
	*/

	/*
	//////////////////////////////////////////////////////
	//Счётчик символов и пробелов в строке			//////
	//////////////////////////////////////////////////////
	
	int chcount = 0;
	int wdcount = 0;
	char ch = 'a';
	cout << "Enter string: ";
	while ((ch = getche()) != '\r')
	{
		;
		if (ch == ' ')
			wdcount++;
		else
			chcount++;
	}
	cout << "Number of characters= " << chcount << endl;
	cout << "Number of white hole= " << wdcount << endl;
	*/

	/*
	//////////////////////////////////////////////////////////////////////
	//Приключенческая игра с применением ветвления if...else 		//////
	//////////////////////////////////////////////////////////////////////
	
	int x = 10, y = 10;
	char dir = 'a';
	while (dir != '\r')
	{
		cout << endl << "Your coordinates: " << x << ',' << y << endl;
		if (x < 5 || x>15)
		{
			cout << "Beware, the dragons" << endl;
		}
		cout << "Select direction (n,s,e,w): ";
		dir = getche();
		switch (dir)
		{
		case 'n': y++; break;
		case 's': y--; break;
		case 'e': x++; break;
		case 'w': x--; break;	
		}
		if (x == 7 && y == 11)
		{
			cout << "You found the treasure!!!" << endl;
			exit(0);
		}
	}
	*/

	/*
	//////////////////////////////////////////////////////////////////////////////////
	//Печать символа 'x' каждые 8 позиций с применением условной операции 		//////
	//////////////////////////////////////////////////////////////////////////////////
	
	for (int i = 0; i < 80; i++)
	{
		char ch = (i % 8) ? ' ' : 'x';
		cout << ch;
	}
	*/

	/*
	//////////////////////////////////////////////////////////
	//Распределение простых чисел (закрашивание экрана)	//////////Error!!!
	//////////////////////////////////////////////////////////
	
	const unsigned char WHITE = 219;
	const unsigned char GRAY = 176;
	unsigned char ch;
	for (int i = 0; i < 80 * 25 - 1; i++)//i —— count
	{
		ch = WHITE;
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				ch = GRAY;
				break;
			}
			cout << ch;
		}
	}
	getch();
	

	system("pause");
	return 0;
}
*/

/*	//////////////////////////////////////////////////////////////////
	//Представление игральных карт при помощи структуры 		//////
	//////////////////////////////////////////////////////////////////

	const int clubs = 0;			//масти
	const int diamonds = 1;
	const int hearts = 2;
	const int spades = 3;
	const int jack = 11;			//достоинства карт
	const int queen = 12;
	const int king = 13;
	const int ace = 14;

	struct card
	{
		int number;
		int suit;
	};
int main()
{
	card temp, chosen, prize;                  //define cards
	int position;

	card card1 = { 7, clubs };                 //initialize card1
	cout << "Card 1 is the 7 of clubs\n";

	card card2 = { jack, hearts };             //initialize card2
	cout << "Card 2 is the jack of hearts\n";

	card card3 = { ace, spades };              //initialize card3
	cout << "Card 3 is the ace of spades\n";

	prize = card3;               //copy this card, to remember it

	cout << "I'm swapping card 1 and card 3\n";
	temp = card3; card3 = card1; card1 = temp;

	cout << "I'm swapping card 2 and card 3\n";
	temp = card3; card3 = card2; card2 = temp;

	cout << "I'm swapping card 1 and card 2\n";
	temp = card2; card2 = card1; card1 = temp;

	cout << "Now, where (1, 2, or 3) is the ace of spades? ";
	cin >> position;

	switch (position)
	{
	case 1: chosen = card1; break;
	case 2: chosen = card2; break;
	case 3: chosen = card3; break;
	}
	if (chosen.number == prize.number &&        // compare cards
		chosen.suit == prize.suit)
		cout << "That's right!  You win!\n";
	else
		cout << "Sorry. You lose.\n";


	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////
//Рекурсия					//////
//////////////////////////////////

unsigned long factfunc(unsigned long);

int main()
{
	int number;
	unsigned long fuct;
	cout << "Enter integer number: ";
	cin >> number;
	fuct = factfunc(number);
	cout << "Factorial of number " << number << " = " << fuct << endl;
	system("pause");
	return 0;
}

unsigned long factfunc(unsigned long num)
{
	if (num > 1)
	{
		return num * factfunc(num - 1);
	}
	else
	{
		return 1;
	}
}
*/

/*
//////////////////////////////////////////////////////////////
//Длины в английской системе в качестве объектов		//////
//////////////////////////////////////////////////////////////

class Distance
{
private:
	int feet;
	float inches;
public:
	void setdist(int ft, float in)
	{
		feet = ft;
		inches = in;
	}
	void getdist()
	{
		cout << "Enter the number of feet: ";		cin >> feet;
		cout << "Enter the number of inches: ";		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << "\"" << endl;
	}
};

int main()
{
	Distance dist1, dist2;
	dist1.setdist(25, 6.25);
	dist2.getdist();
	dist1.showdist();
	dist2.showdist();

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////
//Счётчик в качестве объекта//////
//////////////////////////////////

class Counter
{
private:
	ui count;
public:
	Counter() : count(0) {}
	void inc_count()
	{
		count++;
	}
	void getcount()
	{
		cout << count << endl;
	}
};

int main()
{
	Counter c1, c2;
	c1.getcount();
	c2.getcount();
	c1.inc_count();
	c1.inc_count();
	c1.inc_count();
	c2.inc_count();
	c1.getcount();
	c2.getcount();
	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////////////
//Constructors, adds objects using member function	//////
//////////////////////////////////////////////////////////

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0) {}
	Distance(int ft, float in) : feet(ft), inches(in) {}
	void getdist()
	{
		cout << "Enter the number of feet: ";		cin >> feet;
		cout << "Enter the number of inches: ";		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << "\"" << endl;
	}
	void add_dist(Distance d1, Distance d2);
};

void Distance::add_dist(Distance d1, Distance d2)
{
	inches = d1.inches + d2.inches;
	feet = 0;
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
	feet += d1.feet + d2.feet;
}

int main()
{
	Distance d1, d3;
	Distance d2(10,1.25);
	d1.showdist();
	d2.showdist();
	d3.showdist();
	d1.getdist();
	d3.add_dist(d1, d2);
	d1.showdist();
	d2.showdist();
	d3.showdist();
	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////
//Игральные карты в качечтве объектов	//////
//////////////////////////////////////////////

enum Suit{clubs, diamonds, hearts, spades};
ci jack = 11;
ci queen = 12;
ci king = 13;
ci ace = 14;
//////////////////////////////////////////
class Card
{
private:
	int number;
	Suit suit;
public:
	Card() { }
	Card(int n, Suit s) : number(n), suit(s) { }
	void showcard();
	void swap(Card& c1, Card& c2);
	bool isEqual(Card);//результат сравнения карт
};

void Card::showcard()
{
	if (2 <= number&& number <= 10)
	{
		cout << number;
	}
	else
		switch (number)
		{
			case jack:	cout << "Jack";		break;
			case queen: cout << "Queen";	break;
			case king:	cout << "King";		break;
			case ace:	cout << "Ace";		break;
		}
	cout << ' ';
		switch (suit)
		{
			case clubs:		cout << "Clubs";	break;
			case diamonds:	cout << "Diamonds"; break;
			case hearts:	cout << "Hearts";	break;
			case spades:	cout << "Spades";	break;
		}
		cout << endl;
}
void Card::swap(Card& c1, Card& c2)
{
	Card temp = c1;
	c1 = c2;
	c2 = temp;
}
bool Card::isEqual(Card c1)
{
	return (number == c1.number && suit == c1.suit) ? true : false;
}

int main()
{	
	int position;
	Card temp, chosen, prize;

	Card card1(7, clubs);
	cout << "Card 1: ";
	card1.showcard();
	
	Card card2(jack, hearts);
	cout << "Card 2: ";
	card2.showcard();

	Card card3(ace, spades);
	cout << "Card 3: ";
	card3.showcard();

	prize = card3;
	cout << endl << "Swap 1 and 3" << endl;
	swap(card1, card3);
	cout << "Swap 2 and 3" << endl;
	swap(card2, card3); 
	cout << "Swap 1 and 2" << endl;
	swap(card1, card2);

	cout << endl << "To which of the three positions is the card now ";
	prize.showcard();
	cout << '?';

	cin >> position;
	switch (position)
	{
		case 1: chosen = card1; break;
		case 2: chosen = card2; break;
		case 3: chosen = card3; break;
	}
	if (chosen.isEqual(prize))
	{
		cout << "Correctly! You win!";
	}
	else
	{
		cout << "Wrong. You lose.";
	}
	cout << " You have chosen a card ";
	chosen.showcard();
	cout << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////
//Статические данные класса				//////
//////////////////////////////////////////////

class Foo
{
private:
	static int count;
public:
	Foo() { count++; }
	int getcount() { return count; }
};

int Foo::count = 0;

int main()
{
	Foo f1, f2, f3, f4, f5, f6, f7;
	cout << "Number of objects: " << f1.getcount() << endl;
	cout << "Number of objects: " << f2.getcount() << endl;
	cout << "Number of objects: " << f3.getcount() << endl;
	cout << "Number of objects: " << f4.getcount() << endl;
	cout << "Number of objects: " << f5.getcount() << endl;
	cout << "Number of objects: " << f6.getcount() << endl;
	cout << "Number of objects: " << f7.getcount() << endl;

	system("pause");
	return 0;
}
*/

///////////  Chapter 7 

/*
//////////////////////////////////////////////////////////
//Определение среднего дневного объёма продаж		//////
//////////////////////////////////////////////////////////

int main()
{
	const int size = 6;
	double sales[size];
	double total = 0.0;
	double average;

	cout << "Enter the sales volume for each of the six days: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " day: ";
		cin >> sales[i];
	}
	for (int i = 0; i < size; i++)
	{
		total += sales[i];
	}
	average = total / size;
	cout << endl << "Average sales: "<< average << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////
//Показ графика продаж		//////
//////////////////////////////////

ci DISTRICTS = 4;
ci MONTHS = 3;

int main()
{
	double sales[DISTRICTS][MONTHS];
	for (int i = 0; i < DISTRICTS; i++)
	{
		for (int j = 0; j < MONTHS; j++)
		{
			cout << "Enter the sales volume for the " << i + 1 << " district " << "for the " << j + 1 << " month: ";
			cin >> sales[i][j];
		}
		cout << endl;
	}
	cout << "\n\n";
	cout << "                        Month\n";
	cout << "                1         2         3";
	for (int i = 0; i < DISTRICTS; i++)
	{
		cout << "\nDistrict " << i + 1;
		for (int j = 0; j < MONTHS; j++)
		{
			cout << setw(10)
			<< setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2)
			<< sales[i][j];
		}
	}
	cout << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////////
//Class Stack		//////
//////////////////////////

class Stack
{
private:
	static const int MAX = 10;
	int stk[MAX];
	int top;
public:
	Stack() : top(0) 
	{ }
	void push(int var)
	{
		stk[++top] = var;
	}
	int pop()
	{
		return stk[top--];
	}
};

int main()
{
	Stack s;
	s.push(10);
	s.push(21);
	s.push(35);
	s.push(77);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	
	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////
//Массивы и объекты в английских мерах		//////
//////////////////////////////////////////////////

class Distance
{
	int feet;
	float inches;
public:
	void getdist()
	{
		cout << "Enter number of the feets: ";
		cin >> feet;
		cout << "Enter number of the inches: ";
		cin >> inches;
	}
	void showdist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

int main()
{
	const int N = 3;
	Distance dist[N];
	int n = 0;
	char ch;

	do
	{
		if (n >= N)
		{
			cout << "The array is full!" << endl << endl;
			break;
		}
		cout << "Enter distance " << n + 1 << ':' << endl;
		dist [n++].getdist();
		cout << "Continue typing? (y/n): ";
		cin >> ch;
		cout << endl;
	} while (ch != 'n');
	//system("cls");
	for (int i = 0; i < n; i++)
	{
		cout << "You enter " << i + 1 << ": ";
		dist[i].showdist();
		cout << endl;
	}

	system("pause");
	return 0;
}
*/

//дописать  //??????????????
/*
//////////////////////////////////////////////////
//Массивы и объекты в английских мерах		//////
//////////////////////////////////////////////////

enum Suit { clubs, diamonds, hearts, spades };
ci jack = 11;
ci queen = 12;
ci king = 13;
ci ace = 14;

class Card
{
private:
	int number;
	Suit suit;
public:
	Card()
	{ }
	void set(int n, Suit s)
	{
		number = n;
		suit = s;
	}
	void showCard()
	{
		if (2 <= number && number <= 10)
		{
			cout << number;
		}
		else
		{
			switch (number)
			{
				case jack:	cout << 'J'; break;
				case queen: cout << 'Q'; break;
				case king:	cout << 'K'; break;
				case ace:	cout << 'A'; break;
			}
		}
		switch (suit)
		{
		case clubs:		cout << static_cast<char>(5); break;
		case diamonds:	cout << static_cast<char>(4); break;
		case hearts:	cout << static_cast<char>(3); break;
		case spades:	cout << static_cast<char>(6); break;
		}
			

	}
};

int main()
{
	ci SIZE = 52;
	Card deck[SIZE];

	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		int num = (i % 13) + 2;
		Suit su = Suit (i / 13);
		deck[i].set(num, su);
	}
	cout << "Source deck:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		deck[i].showCard();
		cout << "  ";
		if (!((i + 1) % 13))
		{
			cout << endl;
		}
	}

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////
//Изображение переполнения буфера строках	//////
//////////////////////////////////////////////////

int main()
{
	ci MAX = 20;
	char str[MAX];
	cout << "Enter string: ";
	cin >> setw(MAX) >> str;
	cout << "You enter: " << str << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////
//Ввод нескольких строк с учётом пробелов	//////
//////////////////////////////////////////////////

int main()
{
	ci MAX = 2000;
	char str[MAX];
	cout << "Enter string: " << endl;
	cin.get(str, MAX, '#');
	cout << "You enter: "<< endl << str<< endl;
	system("pause");
	return 0;
}
*/

//?????????
/*
//////////////////////////////////////////////////
//Копирование строки с использованием цикла	//////
//////////////////////////////////////////////////

int main()
{
	char str1[] = "Happy New Year";
	ci MAX = 80;
	char str2[MAX];
	for (int i = 0; i < strlen(str1); i++)
	{
		str2[i] = str1[i];
		str2[i] = '\0';
	}
	cout << str2 << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////
//Копирование строки функцией	//////
//////////////////////////////////////

int main()
{
	char str1[] = "Happy New Year";
	ci MAX = 80;
	char str2[MAX];
	strcpy(str2, str1);

	cout << str2 << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////
//Массив строк	//////
//////////////////////

int main()
{
	ci DAYS = 7;
	ci MAX = 12;
	char str[DAYS][MAX] = { "Mo","Tu", "We", "Th", "Fr", "Sa", "Su" };
	for (int i = 0; i < DAYS; i++)
	{
		cout << str[i] << endl;
	}

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////
//Использование строк в клссе	//////
//////////////////////////////////////

class Part
{
private:
	char partname[30];
	int partnumber;
	double cost;
public:
	void setpart(char *pname, int pn, double cst)
	{
		strcpy_s(partname, pname);
		partnumber = pn;
		cost = cst;
	}
	void showpart()
	{
		cout	<< "Partname: "		<< partname		<< endl
				<< "Partnumber: "	<< partnumber	<< endl
				<< "Cost: "			<< cost			<< endl;
	}
};

int main()
{
	Part p1;
	p1.setpart("Part123", 19, 3125.625);
	p1.showpart();
	system("pause");
	return 0;
}
*/

///////////  Chapter 8

/*
//////////////////////////////////////////////
//операция ++, возвращающая значение	//////
//////////////////////////////////////////////

class count
{
private:
	ui count;
public:
	count() : count(0)
	{ }
	ui getcount()
	{
		return count;
	}
	count operator++()
	{
		 ++count;
		 count temp;
		 temp.count = count;
		 return temp;
	}
};

int main()
{
	count c1, c2, c3;
	cout << c1.getcount();
	cout << c2.getcount();
	++c1;
	++c1;
	++c2;
	cout << c1.getcount();
	cout << c2.getcount();
	c3 = ++c1;
	cout << c3.getcount();
	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////////////////////////
//префиксная и постфиксная операция ++, возвращающая значение	//////
//////////////////////////////////////////////////////////////////////

class counter
{
private:
	ui count;
public:
	counter() : count(0)
	{ }
	counter (int c) : count(c)
	{ }
	ui getcount()
	{
		return count;
	}
	counter operator++()
	{
		return counter(++count);
	}
	counter operator++(int)
	{
		return counter(count++);
	}
};

int main()
{
	counter c1, c2;
	cout << c1.getcount() << endl;
	cout << c2.getcount() << endl;
	c2 = ++c1;
	cout << c1.getcount() << endl;
	cout << c2.getcount() << endl;
	c2 = c1++;
	cout << c1.getcount() << endl;
	cout << c2.getcount() << endl;
	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////////////////////////
//перегрзка операции + для сложения переменных типа distance	//////
//////////////////////////////////////////////////////////////////////

class distance
{
private:
	int feet;
	float inches;
public:
	distance() : feet(0), inches(0)
	{ }
	distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist()
	{
		cout << "enter the number of feets: ";
		cin >> feet;
		cout << "enter the number of inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
	distance operator+(distance) const;
};
distance distance::operator+(distance d2) const
{
	int ft = feet + d2.feet;
	float in = inches + d2.inches;
	if (in >= 12)
	{
		in -= 12;
		ft++;
	}
	return distance(ft, in);
}

int main()
{
	distance d1, d3, d4;
	d1.getdist();
	distance d2(11, 6.25);
	d3 = d1 + d2;
	d4 = d3 + d3;
	d1.showdist();
	d2.showdist();
	d3.showdist();
	d4.showdist();
	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////
//Перегрузка операции + для строк	//////
//////////////////////////////////////////

class String
{
private:
	static ci MAX = 80;
	char str[MAX];
public:
	String()
	{
		strcpy_s(str, "");
	}
	String(char s[])
	{
		strcpy_s(str, s);
	}
	void showstr()
	{
		cout << str << endl;
	}
	String operator+(String ss) const
	{
		String temp;
		if (strlen(str) + strlen(ss.str) < MAX)
		{
			strcpy_s(temp.str, str);
			strcat_s(temp.str, ss.str);
		}
		else
		{
			cout << "Overflow" << endl;
			exit(1);
		}
		return temp;
	}
};

int main()
{
	String str1, str2, str3;
	str1 = "Hello, word!";
	str2 = "Hi  :)";

	str1.showstr();
	str2.showstr();
	str3.showstr();
	
	str3 = str1 + str2;
	str3.showstr();

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////
//Перегрузка операции < для сравнения длин	//////
//////////////////////////////////////////////////

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0)
	{ }
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist()
	{
		cout << "Enter the number of feets: ";
		cin >> feet;
		cout << "Enter the number of inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
	bool operator<(Distance dst) const
	{
		float bf1 = feet + inches / 12;
		float bf2 = dst.feet + dst.inches / 12;
		return (bf1 < bf2) ? true : false;
	}
};

int main()
{
	Distance dist1;
	dist1.getdist();
	Distance dist2(6, 2.5);
	dist1.showdist();
	dist2.showdist();

	if (dist1 < dist2)
		cout << "d1 < d2" << endl;
	else
		cout << "d1 >= d2" << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////
//Перегрузка операции == для строк	//////
//////////////////////////////////////////

class String
{
private:
	static ci MAX = 80;
	char str[MAX];
public:
	String()
	{
		strcpy_s(str, "");
	}
	String(char s[])
	{
		strcpy_s(str, s);
	}
	void showstr()
	{
		cout << str << endl;
	}
	void getstr()
	{
		cin.get(str, MAX);
	}
	bool operator==(String ss) const
	{
		return (strcmp(str, ss.str) == 0) ? true : false;
	}
};

int main()
{
	String s1 = "yes";
	String s2 = "no";
	String s3;
	cout << "Enter 'yes' or 'no': ";
	s3.getstr();
	if (s3 == s1)
	{
		cout << "You enter 'yes'" << endl;
	}
	else if (s3 == s2)
	{
		cout << "You enter 'no'" << endl;
	}
	else
		cout << "Follow the instructions" << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////
//Перегрузка операции += для класса Distance //////
//////////////////////////////////////////////////

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0)
	{ }
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist()
	{
		cout << "Enter the number of feet: ";
		cin >> feet;
		cout << "Enter the number of inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
	void operator+=(Distance dist)
	{
		feet += dist.feet;
		inches += dist.inches;
		if (inches >= 12)
		{
			inches -= 12.0;
			feet++;
		}
	}
};

int main()
{
	Distance dist1;
	dist1.getdist();
	Distance dist2 (11, 6.25);
	dist1.showdist();
	dist2.showdist();
	dist1 += dist2;
	cout << "d1 += d2" << endl;
	dist1.showdist();
	
	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////////////////////////
//Демонстрация создания безопасного массива,							////
//проверяющего свои индексы при использовании.							////
//Используются отдельные функции для установки и получения значения		////
////////////////////////////////////////////////////////////////////////////

ci LIMIT = 100;
class safearray
{
	int arr[LIMIT];
public:
	void putel(int n, int elvalue)
	{
		if (n<0 || n>=LIMIT)
		{
			cout << "Invalid index!" << endl;
			exit(1);
		}
		arr[n] = elvalue;
	}
	int getel(int n) const
	{
		if (n<0 || n >= LIMIT)
		{
			cout << "Invalid index!" << endl;
			exit(1);
		}
		return arr[n];
	}
};

int main()
{
	safearray sa1;
	for (int i = 0; i < LIMIT; i++)
	{
		sa1.putel(i, i * 10);
	}
	for (int i = 0; i < LIMIT; i++)
	{
		int temp = sa1.getel(i);
		cout << "Element " << i << " = " << temp << endl;
	}

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////////////////////////
//Демонстрация создания безопасного массива,							////
//проверяющего свои индексы при использовании.							////
//Используется общая функциия для установки и получения значения		////
////////////////////////////////////////////////////////////////////////////

ci LIMIT = 100;
class safearray
{
private:
	int arr[LIMIT];
public:
	int& access(int n)
	{
		if (n<0 || n >= LIMIT)
		{
			cout << "Invalid index!" << endl;
			exit(1);
		}
		return arr[n];
	}
};

int main()
{
	safearray sa;
	for (int i = 0; i < LIMIT; i++)
	{
		sa.access(i) = i * 10;
	}
	for (int i = 0; i < LIMIT; i++)
	{
		cout << "Elem " << i << " =" << sa.access(i) << endl;
	}

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////
//Демонстрация создания безопасного массива,		////
//проверяющего свои индексы при использовании.		////
//Используется перегрузка операции []				////
////////////////////////////////////////////////////////

ci LIMIT = 100;
class safearray
{
private:
	int arr[LIMIT];
public:
	int& operator[](int n)
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "Invalid index!" << endl;
			exit(0);
		}
		return arr[n];
	}
};

int main()
{
	safearray sa;
	for (int i = 0; i < LIMIT; i++)
	{
		sa[i] = i * 10;
	}
	for (int i = 0; i < LIMIT; i++)
	{
		int temp = sa[i];
		cout << "Element " << i << " =" << temp << endl;
	}

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////////////////
//Перевод длины из класса Distance в метры и обратно	//////
//////////////////////////////////////////////////////////////

class Distance
{
private:
	cf MTF;
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0), MTF(3.280833F)
	{ }
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF*meters;
		feet = static_cast<int>(fltfeet);
		inches = 12 * (fltfeet - feet);
	}
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
	{ }
	void getdist()
	{
		cout << "Enter the number of feets: ";
		cin >> feet;
		cout << "Enter the number of inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
};

int main()
{
	float mtrs;
	Distance dist1 = 2.35F;
	dist1.showdist();
	mtrs = static_cast<float>(dist1);
	cout << "dist1= " << mtrs << " meters" << endl;
	Distance dist2(5, 10.25);
	mtrs = static_cast<float>(dist2);
	cout << "dist2= " << mtrs << " meters" << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////
//Перевод обычных строк в класс String	//////
//////////////////////////////////////////////

class String
{
private:
	static ci MAX = 80;
	char str[MAX];
public:
	String()
	{
		strcpy_s(str, "");
	}
	String(char s[])
	{
		strcpy_s(str, s);
	}
	void showstr()
	{
		cout << str << endl;
	}
	operator char*()
	{
		return str;
	}
};

int main()
{
	String s1;
	char xstr[] = "Hooray, people!";
	s1 = xstr;
	s1.showstr();
	String s2 = "We win!";
	cout << static_cast<char*>(s2) << endl;

	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////////////////////////////////
//Программа перевода времени в 24-часовом написании в 12-часовое	//////
//////////////////////////////////////////////////////////////////////////

class time12
{
private:
	bool pm;
	int hrs;
	int mins;
public:
	time12() : pm(true), hrs(0), mins(0)
	{ }
	time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m)
	{ }
	void showtime() const
	{
		cout << hrs << ':';
		if (mins < 10)
			cout << '0';
		cout << mins << ' ';
		string am_pm = pm ? "p.m." : "a.m.";
		cout << am_pm;
	}
};

class time24
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	time24() : hours(0), minutes(0), seconds(0)
	{ }
	time24(int h, int m, int s) : hours(h), minutes(m), seconds(s)
	{ }
	void showtime() const
	{
		if (hours < 10)
			cout << '0';
		cout << hours << ':';
		if (minutes < 10)
			cout << '0';
		cout << minutes << ':';
		if (seconds < 10)
			cout << '0';
		cout << seconds << endl;
	}
	operator time12()const
	{
		int hrs24 = hours;
		bool pm = (hours < 12) ? false : true;
		int roundMins = (seconds < 30) ? minutes : minutes + 1;
		if (roundMins == 60)
		{
			roundMins = 0;
			++hrs24;
			if (hrs24 == 12 || hrs24 == 24)
			{
				pm = (pm == true) ? false : true;
			}
		}
		int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
		if (hrs12 == 0)
		{
			hrs12 = 12;
			pm = false;
		}
		return time12(pm, hrs12, roundMins);
	}
};

int main()
{
	int h, m, s;
	while (true)
	{
		cout << "Enter the time in the 24-hour format: " << endl;
		cout << "Hours(0-23): ";	 cin >> h;
		if (h > 23)
			return 1;
		cout << "Minutes: "; cin >> m;
		cout << "Seconds: "; cin >> s;
		time24 t24(h, m, s);
		cout << "Initial time: ";
		t24.showtime();
		time12 t12 = t24;
		cout << "The time in the 12-hour format: ";
		t12.showtime();
		cout << endl << endl;
	}

	system("pause");
	return 0;
}
*/

///////////  Chapter 9

/*
//////////////////////////////////////////
//Inheritance with Counter class	//////
//////////////////////////////////////////

class Counter
{
protected:
	ui count;
public:
	Counter() : count(0)
	{ }
	Counter(int c) : count(c)
	{ }
	ui get_count() const
	{
		return count;
	}
	Counter operator++()
	{
		return Counter(++count);
	}
};

class CountDn : public Counter
{
public:
	Counter operator--()
	{
		return Counter(--count);
	}
};

int main()
{
	CountDn c1;
	cout << c1.get_count() << endl;
	++c1;
	++c1;
	++c1;
	--c1;
	cout << c1.get_count() << endl;
	system("pause");
	return 0;
}
*/

/*
//////////////////////////////////////////////
//Конструкторы в производных классах	//////
//////////////////////////////////////////////

class Counter
{
protected:
	ui count;
public:
	Counter() : count(0)
	{ }
	Counter(int c) : count(c)
	{ }
	ui get_count() const
	{
		return count;
	}
	Counter operator++()
	{
		return Counter(++count);
	}
};

class CountDn : public Counter
{
public:
	CountDn() : Counter(0)
	{ }
	CountDn(int c) : Counter(c)
	{ }
	CountDn operator--()
	{
		return CountDn(--count);
	}
};

int main()
{
	CountDn c1;
	CountDn c2(100);
	CountDn c3;
	cout << c1.get_count() << endl;
	cout << c2.get_count() << endl;

	++c1;
	++c1;
	++c1;
	cout << c1.get_count() << endl;

	--c2;
	--c2;
	cout << c2.get_count() << endl;

	c3 = --c2;
	c3 = c2;
	cout << c3.get_count() << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////////
//Перегрузка функций базового и производного классов	////
////////////////////////////////////////////////////////////

class Stack
{
protected:
	static ci MAX = 10;
	int st[MAX];
	int top;
public:
	Stack() : top(-1)
	{ }
	void push(int var)
	{
		st[++top] = var;
	}
	int pop()
	{
		return st[top--];
	}
};

class Stack2 : public Stack
{
public:
	void push(int var)
	{
		if (top >= MAX-1)
		{
			cout << "Error: stack is full!" << endl;
			exit(1);
		}
		Stack::push(var);
	}
	int pop()
	{
		if (top < 0)
		{
			cout << "Error: stack is empty!" << endl;
			exit(1);
		}
		Stack::pop();
	}
};

int main()
{
	Stack2 s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	s.push(80);
	s.push(90);
	s.push(100);

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////////////
//Наследование в программе перевода английских мер длинны	////
////////////////////////////////////////////////////////////////

enum posneg { pos, neg };

class Distance
{
protected:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0)
	{ }
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist()
	{
		cout << "Enter the number of feet: ";
		cin >> feet;
		cout << "Enter the number of inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
};

class DistSign : public Distance
{
private:
	posneg sign;
public:
	DistSign() : Distance()
	{
		sign = pos;
	}
	DistSign(int ft, float in, posneg sg = pos) : Distance(ft, in)
	{
		sign = sg;
	}
	void getdist()
	{
		Distance::getdist();
		char ch;
		cout << "Enter the sign (+ or -): ";
		cin >> ch;
		sign = (ch == '+') ? pos : neg;
	}
	void showdist()
	{
		cout << ((sign == pos) ? "(+)" : "(-)");
		Distance::showdist();
	}
};

int main()
{
	DistSign a;
	a.getdist();
	DistSign b(11, 6.25);
	DistSign c(100, 5.5, neg);

	a.showdist();
	b.showdist();
	c.showdist();

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////////////
//Испытание классов, наследованных как public and private	////
////////////////////////////////////////////////////////////////

class A
{
private:
	int privA;
protected:
	int protA;
public:
	int publA;
};

class B : public A
{
	void f()
	{
		int a;
		a = privA;
		a = protA;
		a = publA;
	}
};

class C : protected A
{
	void f()
	{
		int a;
		a = privA;
		a = protA;
		a = publA;
	}
};
class D : private A
{
	void f()
	{
		int a;
		a = privA;
		a = protA;
		a = publA;
	}
};

int main()
{
	int a;
	B objB;
	C objC;
	D objD;

	a = objB.publA;//OK
	a = objC.publA;//NO
	a = objD.publA;//NO
	//а остальные вообще не захотели показываться. БЯКИ. Фу на вас.

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////
//Несколько уравней наследования	////
////////////////////////////////////////

ci LEN = 80;
class Employee
{
private:
	char name[LEN];
	ui number;
public:
	void getdata()
	{
		cout << "Enter surname: "; cin >> name;
		cout << "Enter your number: "; cin >> number;
	}
	void putdata() const
	{
		cout << "Surname: " << name << endl;
		cout << "Number: " << number << endl;
	}
};
class Laborer : public Employee
{

};
class Foreman : public Laborer
{
private:
	float quotas;
public:
	void getdata()
	{
		Laborer::getdata();
		cout << "Enter the output rate: "; cin >> quotas;
	}
	void putdata()
	{
		Laborer::putdata();
		cout << "Output rate: " << quotas << endl;
	}
};

int main()
{
	Laborer l1;
	Foreman f1;
	l1.getdata();
	f1.getdata();

	l1.putdata();
	f1.putdata();

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////
//Несколько уравней наследования	////
////////////////////////////////////////

ci LEN = 80;
class student             // сведения об образовании
{
private:
	char school[LEN];   // название учебного заведения
	char degree[LEN];   // уровень образования
public:
	void getedu()
	{
		cout << "  Введите название учебного заведения: ";
		cin >> school;
		cout << "  Введите степень высшего образования\n";
		cout << "  (неполное высшее, бакалавр, магистр, кандидат наук): ";
		cin >> degree;
	}
	void putedu() const
	{
		cout << "\n  Учебное заведение: " << school;
		cout << "\n  Степень: " << degree;
	}
};
///////////////////////////////////////////////////////////
class employee            // некий сотрудник
{
private:
	char name[LEN];     // имя сотрудника
	ui number; // номер сотрудника
public:
	void getdata()
	{
		cout << "\n  Введите фамилию: "; cin >> name;
		cout << "  Введите номер: ";     cin >> number;
	}
	void putdata() const
	{
		cout << "\n  Фамилия: " << name;
		cout << "\n  Номер: " << number;
	}
};
///////////////////////////////////////////////////////////
class manager : private employee, private student // менеджер
{
private:
	char title[LEN];    // должность сотрудника
	double dues;          // сумма взносов в гольф-клуб
public:
	void getdata()
	{
		employee::getdata();
		cout << "  Введите должность: "; cin >> title;
		cout << "  Введите сумму взносов в гольф-клуб: "; cin >> dues;
		student::getedu();
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n  Должность: " << title;
		cout << "\n  Сумма взносов в гольф-клуб: " << dues;
		student::putedu();
	}
};
///////////////////////////////////////////////////////////
class scientist : private employee, private student // ученый
{
private:
	int pubs;             // количество публикаций
public:
	void getdata()
	{
		employee::getdata();
		cout << "  Введите количество публикаций: "; cin >> pubs;
		student::getedu();
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n  Количество публикаций: " << pubs;
		student::putedu();
	}
};
///////////////////////////////////////////////////////////
class laborer : public employee // рабочий
{
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(0, "rus");
	manager m1;
	scientist s1, s2;
	laborer l1;

	// введем информацию о нескольких сотрудниках
	cout << endl;
	cout << "\nВвод информации о первом менеджере";
	m1.getdata();

	cout << "\nВвод информации о первом ученом";
	s1.getdata();

	cout << "\nВвод информации о втором ученом";
	s2.getdata();

	cout << "\nВвод информации о первом рабочем";
	l1.getdata();

	// выведем полученную информацию на экран
	cout << "\nИнформация о первом менеджере";
	m1.putdata();

	cout << "\nИнформация о первом ученом";
	s1.putdata();

	cout << "\nИнформация о втором ученом";
	s2.putdata();

	cout << "\nИнформация о первом рабочем";
	l1.putdata();

	cout << endl;
	return 0;
}
*/

////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////								Исходный модификатор доступа	////
///////////////////////////                          public		 private	 protected	////
///////////////////////////---------------------------------------------------			////
///////////////////////////public - наследование	|public		|private	|protected	////
///////////////////////////private - наследование	|private	|private	|private	////
///////////////////////////protected - наследование	|protected	|private	|protected	////
////////////////////////////////////////////////////////////////////////////////////////////

/*
////////////////////////////////////////////////////////////
//Программа демонстрации множественного наследования	////
////////////////////////////////////////////////////////////

class Type
{
private:
	string dimensions;
	string grade;
public:
	Type() : dimensions("N/A"), grade("N/A")
	{ }
	Type(string di, string gr) : dimensions(di), grade(gr)
	{ }
	void gettype()
	{
		cout << "Enter the dimensions (1x4, 2x4 ...): ";
		cin >> dimensions;
		cout << "Enter the grade: ";
		cin >> grade;
	}
	void showtype() const
	{
		cout << "Dimensions: " << dimensions << endl;
		cout << "Grade: " << grade << endl;
	}
};
///////////////////////////////////
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0)
	{ }
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist()
	{
		cout << "Enter the number of feet: ";
		cin >> feet;
		cout << "Enter the number of inches: ";
		cin >> inches;
	}
	void showdist() const
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
};
//////////////////////////////////
class Lumber : public Type, public Distance
{
private:
	int quantity;
	double cost;
public:
	Lumber() : Type(), Distance(), quantity(0), cost(0.0)
	{ }
	Lumber(string di, string gr, int ft, float in, int qua, double prc) : Type(di, gr), Distance(ft, in), quantity(qua), cost(prc)
	{ }
	void getlumber()
	{
		Type::gettype();
		Distance::getdist();
		cout << "Enter the quantity: " << endl;
		cin >> quantity;
		cout << "Enter the cost: ";
		cin >> cost;
	}
	void showlumber() const
	{
		Type::showtype();
		cout << "Length: ";
		Distance::showdist();
		cout << "The cost of " << quantity << " pieces: " << (cost*quantity) << endl;
	}
};

int main()
{
	Lumber studs("2x4", "const", 8, 6.25, 155, 4.45F);
	studs.showtype();
	cout << endl << endl << endl;
	studs.showlumber();

	system("pause");
	return 0;
}
*/

///////////  Chapter 10

/*
////////////////////////
//Адрес переменной	////
////////////////////////

int main()
{
	int a, b, c, d;
	a = 0;
	b = 1;
	c = 2;
	d = 3;
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	cout << &d << endl;
	ystem("pause");
,eturn 0;
,
*/

/*
////////////////////////////////////////////////////////////////////////////
//Указатели (адреса переменных) и доступ к переменной через указатель	////
////////////////////////////////////////////////////////////////////////////

int main()
{
	int a, b;
	a = 11;
	b = 22;

	cout << &a << endl;
	cout << &b << endl << endl;

	int* ptr;

	ptr = &a;
	cout << *ptr << endl;

	ptr = &b;
	cout << *ptr << endl;

	system("pause");
	return 0;
}*/

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

int main()
{
	
	int a, b;
	int* ptr;
	a = 11;
	b = 22;
	ptr = &a;
	*ptr = 37;
	b = *ptr;
	cout << b << endl;


	system("pause");
	return 0;
}
*/

/*
////////////////////////////
//Указатель на void		////
////////////////////////////

int main()
{
	int intv;
	float flov;

	int* ptrint;
	float *ptrflo;
	void* ptrvoid;

	ptrint = &intv;
	//ptrint = &flov;		//		значение типа "float *" нельзя присвоить сущности типа "int *"	
	//ptrflo = &intv;
	ptrint = reinterpret_cast<int*>(&flov);
	ptrflo = reinterpret_cast<float*>(&intv);
	ptrflo = &flov;

	ptrvoid = &intv;
	ptrvoid = &flov;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////
//Доступ к элементам массива через указатель	////
////////////////////////////////////////////////////

int main()
{
	ci MAX = 5;
	int arr[MAX] = { 31, 54, 77, 52, 93 };
	for (int i = 0; i < MAX; i++)
		cout << *(arr + i) << endl;
	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

int main()
{
	ci MAX = 5;
	int arr[MAX] = { 31, 54, 77, 52, 93 };
	int* ptrint = arr;
	for (int i = 0; i < MAX; i++)
		cout << *(ptrint++) << endl;
	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Передача массива по указателю	////
////////////////////////////////////

ci MAX = 5;
int main()
{
	void centmize(double*);
	double arr[MAX] = { 10.0, 43.1, 95.9, 58.7, 87.3 };
	centmize(arr);
	for (int i = 0; i < MAX; i++)
	{
		cout << "arr[" << i + 1 << "] = " << arr[i]<< " centimeters" << endl;
	}
	system("pause");
	return 0;
}

void centmize(double* ptrd)
{
	for (int i = 0; i < MAX; i++)
	{
		*ptrd++ *= 2.54;
	}
}
*/

/*
////////////////////////////////////////////////////
//Сортиртировка двух аргументов по указателю	////
////////////////////////////////////////////////////

int main()
{
	void order(int*, int*);
	int a = 99, b = 11;
	int c = 22, d = 88;
	order(&a, &b);
	order(&c, &d);

	cout << a << setw(4) << b << endl;
	cout << c << setw(4) << d << endl;

	system("pause");
	return 0;
}

void order(int* num1, int* num2)
{
	if (*num1 > *num2)
	{
		int tmp = *num1;
		*num1 = *num2;
		*num2 = tmp;
	}
}
*/

/*
////////////////////////////////////////////////////////
//Сортировка массива с использованием указателей	////
////////////////////////////////////////////////////////

int main()
{
	void bsort(int*, int);
	ci N = 10;
	int arr[N] = { 37,84,62,91,11,65,57,28,19,49 };
	bsort(arr, N);
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}

void bsort(int* arr, int n)
{
	//void order(int*, int*);
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
*/

/*
////////////////////////////////////////////////////////
//Описание строк через массивы и через указатели	////
////////////////////////////////////////////////////////

int main()
{
	char str1[] = "Definition through an array";
	char* str2 = "Definition through a pointer";

	cout << str1 << endl;
	cout << str2 << endl;

	str2++;
	str2++;
	cout << str2 << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////////////
//Посимвольный показ строки, определённой через указатель	////
////////////////////////////////////////////////////////////////

int main()
{
	void showstr(char*);
	char* str = "I have a dog :)";

	showstr(str);

	system("pause");
	return 0;
}

void showstr(char* ps)
{
	while (*ps)
	{
		cout << *ps++;
	}
	cout << endl;
}
*/

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

int main()
{
	void copystr(char*, const char*);
	char* str1 = "Hello, its me :)";
	char str2[80];
	copystr(str2, str1);
	cout << str2 << endl;

	system("pause");
	return 0;
}

void copystr(char* str1, const char* str2)
{
	while (*str2)
	{
		*str1++ = *str2++;
	}
	*str1 = '\0';
}
*/

/*
////////////////////
//Оператор new	////
////////////////////

int main()
{
	char* str = "Hello, its me";
	int len = strlen(str);

	char* ptr = new char[len + 1];
	strcpy(ptr, str);
	
	cout << ptr << endl;
	delete [] ptr;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////////////////
//Использование оператора new для выделения памяти под строку	////
////////////////////////////////////////////////////////////////////

class String
{
private:
	char* str;
public:
	String(char* s)
	{
		int len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	~String()
	{
		cout << "Delete the string" << endl;
		delete []str;
	}
	void showstr()
	{
		cout << str << endl;
	}
};

int main()
{
	String s = "Hello! It`s me";
	s.showstr();
	
	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////
//Доступ к членам класса через указатель	////
////////////////////////////////////////////////

class Distance
{
private:
	int feet;
	float inches;
public:
	void getdist()
	{
		cout << "Enter the number of feet: ";
		cin >> feet;
		cout << "Enter the number of inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
};

int main()
{
	Distance dist;
	dist.getdist();
	dist.showdist();

	Distance* ptrd = new Distance;
	ptrd->getdist();
	ptrd->showdist();

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Массив указателей на объекты	////
////////////////////////////////////

class Person
{
	char name[40];
public:
	void setName()
	{
		cout << "Enter your name: ";
		cin >> name;
	}
	void showname()
	{
		cout << "\n  " << name << endl;
	}
};

int main()
{
	Person* pers[100];
	int n = 0;
	char ch;
	do
	{
		pers[n] = new Person;
		pers[n]->setName();
		n++;
		cout << "Continue enter(y/n)?: ";
		cin >> ch;
	} while (ch == 'y');
	for (int i = 0; i < n; i++)
	{
		cout << "Information about the number " << i + 1;
		pers[i]->showname();
	}

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//List	////
////////////////////////////////////

struct Element
{
	int data;
	Element* next;
};

class List
{
private:
	Element* first;
	Element* last;
public:
	List()
	{
		first = NULL;
		last = first;
	}
	void addElem(int d)
	{
		last = new Element;
		last->data = d;
		last->next = first;
		first=last;
	}
	void showElements()
	{
		Element* current = first;
		while (current)
		{
			cout << current->data << " -> ";
			current = current->next;
		}
		cout << "NULL" << endl;
	}
};

int main()
{
	List L;
	L.addElem(131);
	L.addElem(117);
	L.addElem(101);
	L.addElem(93);
	L.addElem(89);
	L.addElem(73);
	L.addElem(65);
	L.addElem(45);
	L.addElem(33);
	L.addElem(12);
	L.showElements();
	system("pause");
	return 0;
}
*/

//?????????????
/*
////////////////////////////////////////////////////////////
//Сортировка объектов через массив указателей на них	////
////////////////////////////////////////////////////////////

class Person
{
protected:
	string name;
public:
	void setName()
	{
		cout << "Enter the name: ";
		cin >> name;
	}
	void showName()
	{
		cout << name << endl;
	}
	string getName()
	{
		return name;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	void bubSort(Person**, int);
	Person* pers[100];
	int n = 0;
	char ch;

	do 
	{
		pers[n] = new Person;
		pers[n]->setName();
		n++;
		cout << "Continue enter(1/0): ";
		cin >> ch;
	} while (ch != '0');
	
	cout << "\n\n\n   Unsorted list:" << endl;
	for (int i = 0; i < n; i++)
	{
		pers[i]->showName();
	}
	cout << "\n   Sorted list:" << endl;
	for (int i = 0; i < n; i++)
	{
		pers[i]->showName();
	}
	system("pause");
	return 0;
}

void bubSort(Person** pers, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n + 1; j < n; j++)
		{
			if (pers[i]->getName() > pers[j]->getName())
			{
				Person* temp = pers[i];
				pers[i] = pers[j];
				pers[j] = temp;
			}
		}
	}
}
*/

/////////////////////////////////////////////     455-465

///////////  Chapter 11

/*
////////////////////////////////////////////////
//Доступ к обычным функциям через указатели	////
////////////////////////////////////////////////

class Base
{
public:
	virtual void show() = 0;
};

class Derv1 : public Base
{
public:
	void show()
	{
		cout << "Derv1" << endl;
	}
};

class Derv2 : public Base
{
public:
	void show()
	{
		cout << "Derv2" << endl;
	}
};
int main()
{
	Base* ptr;
	Derv1 d1;
	Derv2 d2;
	//Base bs;

	ptr = &d1;
	ptr->show();

	ptr = &d2;
	ptr->show();

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////
//Виртуальные функции в классе Person	////
////////////////////////////////////////////

class Person
{
protected:
	char name[40];
public:
	void getName()
	{
		cout << "Enter name: ";
		cin >> name;
	}
	void showName()
	{
		cout << "\n  Name: " << name << endl;
	}
	virtual void getData() = 0;
	virtual bool isOutstanding() = 0;
};

class Student : public Person
{
private:
	float gpa;
public:
	void getData()
	{
		Person::getName();
		cout << "Enter the student`s average score: ";
		cin >> gpa;
	}
	bool isOutstanding()
	{
		return (gpa >= 3.5) ? true : false;
	}
};

class Professor : public Person
{
private:
	int numPubs;
public:
	void getData()
	{
		Person::getName();
		cout << "Enter the number of publications of the profesor: ";
		cin >> numPubs;
	}
	bool isOutstanding()
	{
		return (numPubs >= 100) ? true : false;
	}
};

int main()
{
	Person* pers[100];
	int n = 0;
	char ch;

	do
	{
		cout << "Student (s) or professor (p): ";
		cin >> ch;
		switch (ch)
		{
		case 's': pers[n] = new Student;	break;
		case 'p': pers[n] = new Professor;	break;
		default: cout << "Invalid input" << endl;
		}
		pers[n++]->getData();
		cout << "Continue input(y/n): ";
		cin >> ch;
	} while (ch != 'n');

	for (int i = 0; i < n; i++)
	{
		pers[i]->showName();
		if (pers[i]->isOutstanding())
		{
			cout << "This is an outstanding person!" << endl;
		}
	}


	system("pause");
	return 0;
}
*/

/*
////////////////////////////////
//Виртуаьные базовые классы	////
////////////////////////////////

class Parent
{
protected:
	int basedata;
};

class Child1 : virtual public Parent
{

};

class Child2 : virtual public Parent
{

};

class Grandchild : public Child1, public Child2
{
public:
	int getData()
	{
		return basedata;
	}
};
*/

/*
////////////////////////////
//Friend functions()	////
////////////////////////////

class Beta;

class Alfa
{
private:
	int data;
public:
	Alfa(int a) : data(a)
	{ }
	friend int frifunc(Alfa, Beta);
};

class Beta
{
private:
	int data;
public:
	Beta(int b) : data(b)
	{ }
	friend int frifunc(Alfa, Beta);
};

int frifunc(Alfa a, Beta b)
{
	return a.data + b.data;
}

int main()
{
	Alfa aa(20);
	Beta bb(175);
	cout << frifunc(aa, bb) << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////////////////////////////
//Дружественная перегружаемая операция + and friend function square()	////
////////////////////////////////////////////////////////////////////////////

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0)
	{ }
	Distance(float fltfeet)
	{
		feet = static_cast<int>(fltfeet);
		inches = 12 * (fltfeet - feet);
	}
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void showDist()
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
	friend Distance operator+(Distance d1, Distance d2)
	{
		int ft = d1.feet + d2.feet;
		float in = d1.inches + d2.inches;
		if (in >= 12)
		{
			in -= 12;
			ft++;
		}
		return Distance(ft, in);
	}
	friend float square(Distance d)
	{
		float fltfeet = d.feet + d.inches / 12;
		float feetsqr = fltfeet * fltfeet;
		return feetsqr;
	}
};

int main()
{
	Distance d1 = 2.5;
	Distance d2 = 1.25;
	Distance d3;
	d1.showDist();
	d2.showDist();
	d3.showDist();

	d3 = d1 + 10.1;
	d3.showDist();

	d3 = 10.0 + d1;
	d3.showDist();
	cout << endl;

	float sqr = square(d1);
	cout << sqr << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////
//Дружественные классы	////
////////////////////////////

class Alfa
{
private:
	int data;
public:
	Alfa() : data(10199101)
	{ }
	friend class Beta;
};

class Beta
{
public:
	void func(Alfa a)
	{
		cout << "Data = " << a.data << endl << endl;
	}
};

int main()
{
	Alfa aa;
	Beta bb;

	bb.func(aa);

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////
//Статические функции и ID объектов	////
////////////////////////////////////////

class Gamma
{
private:
	static int total;
	int id;
public:
	Gamma()
	{
		total++;
		id = total;
	}
	~Gamma()
	{
		//total--;
		cout << "Delete ID " << id << endl;
	}
	static void showTotal()
	{
		cout << "Total: " << total << endl;
	}
	void showId()
	{
		cout << "ID: " << id << endl;
	}
};
int Gamma::total = 0;

int main()
{
	Gamma g1;
	Gamma::showTotal();
		
	Gamma g2, g3;
	Gamma::showTotal();

	g1.showId();
	g2.showId();
	g3.showId();

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////
//Перегрузка операции присваивания (=)	////
////////////////////////////////////////////

class Alfa
{
private:
	int data;
public:
	Alfa() : data(0)
	{ }
	Alfa(int d) : data(d)
	{ }
	void showData()
	{
		cout << data << endl;
	}
	//Alfa 
	void operator=(Alfa& a)
	{
		cout << "Assignment operator started" << endl;
		data = a.data;
		//return Alfa(data);
	}
};

int main()
{
	Alfa a1 = 37;
	Alfa a2;
	a2 = a1;
	a2.showData();
	Alfa a3 = a2;
	a3.showData();

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////
//Конструктор копирования и перегрузка =	////
////////////////////////////////////////////////

class Alfa
{
private:
	int data;
public:
	Alfa() : data(0)
	{ }
	Alfa(int d) : data(d)
	{ }
	Alfa(Alfa& a)
	{
		data = a.data;
		cout << "The copy constructor is started" << endl;
	}
	void operator=(Alfa& a)
	{
		data = a.data;
		cout << "Assignment operator started" << endl;
	}
	void showData()
	{
		cout << data << endl;
	}
};

int main()
{
	Alfa a1 = 37;		//	Инициализация
	Alfa a2;

	a2 = a1;			//	Присваивание	
	cout << "a2 = "; a2.showData(); cout << endl;

	Alfa a3 = a1;		//	Копирование
	cout << "a3 = "; a3.showData(); cout << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

class strCount
{
	int count;
	char* str;
	friend class String;
//-------------------------------------
	strCount(char* s)
	{
		int length = strlen(s);
		str = new char[length + 1];
		strcpy(str, s);
		count = 1;
	}
//-------------------------------------
	~strCount()
	{
		delete[] str;
	}
};

class String
{
	strCount* psc;
public:
	String()
	{
		psc = new strCount("NULL");
	}
//-------------------------------------
	String(char* s)
	{
		psc = new strCount(s);
	}
//-------------------------------------
	~String()
	{
		if (psc->count == 1)
		{
			delete psc;
		}
		else
		{
			(psc->count)--;
		}
	}
//-------------------------------------
	String(String& s)
	{
		psc = s.psc;
		(psc->count)++;
	}
//-------------------------------------
	String& operator=(String& s)
	{
		if (this == &s)
		{
			return *this;
		}
		if (psc->count == 1)
		{
			delete psc;
		}
		else
		{
			psc = s.psc;
		}
		psc = s.psc;
		(psc->count)++;
		return *this;
	}
//-------------------------------------
	void showstr()
	{
		cout << psc->str << "   ";
		cout << psc << endl;
	}
};
///////////////////////////////////////
int main()
{
	String s3 = "Hello! It`s me";
	s3.showstr();

	String s1;
	s1 = s3;
	s1.showstr();

	String s2 = s3;
	s2.showstr();

	s2 = s2;
	s2.showstr();

	system("pause");
	return 0;
}
*/

/*
////////////////////////
//Указатель this	////
////////////////////////

class Where
{
private:
	char arr[10];
public:
	void reveal()
	{
		cout << "Hello! It`s me    " << this << endl;
	}
};

int main()
{
	Where w1, w2, w3;
	w1.reveal();
	w2.reveal();
	w3.reveal();

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////
//Как указатель this ссылается на данные	////
////////////////////////////////////////////////

class What
{
	int data;
public:
	void tester()
	{
		this->data = 11;
		cout << this->data << endl;
	}
};

int main()
{
	What w;
	w.tester();

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////
//Возврат содержимого указателя this 	////
////////////////////////////////////////////

class Alfa
{
	int data;
public:
	Alfa() : data(0)
	{ }
	Alfa( int d) : data(d)
	{ }
	void showData()
	{
		cout << data << endl;
	}
	Alfa& operator=(Alfa& a)
	{
		data = a.data;
		cout << "Assignment operator started" << endl;
		return *this;
	}
};

int main()
{
	Alfa a1 = 37;
	Alfa a2, a3;
	a3 = a2 = a1;
	a2.showData();
	a3.showData();

	system("pause");
	return 0;
}
*/

//520

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

class Base
{
	virtual void func()
	{ }
};

class Derv1 : public Base
{ };

class Derv2 : public Base
{ };
///////////////////////////////////////
bool isDerv1(Base* pUnknown)
{
	Derv1* pDerv1;
	if (pDerv1 = dynamic_cast<Derv1*>(pUnknown))
	{
		return true;
	}
	else
	{
		return false;
	}
}
///////////////////////////////////////
int main()
{
	Derv1* d1 = new Derv1;
	Derv2* d2 = new Derv2;

	if (isDerv1(d1))
	{
		cout << "d1 - :)" << endl;
	}
	else
	{
		cout << "d1 - :(" << endl;
	}

	if (isDerv1(d2))
	{
		cout << "d2 - d1 :)" << endl;
	}
	else
	{
		cout << "d2 - d1 :(" << endl;
	}

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////
//Тестирование динамического приведения типов	////
////////////////////////////////////////////////////

class Base
{
protected:
	int ba;
public:
	Base() : ba(0)
	{ }
	Base(int b) : ba(b)
	{ }
	virtual void func()
	{ }
	void show()
	{
		cout << "ba = "  << ba << endl;
	}
};

class Derived : public Base
{
	int de;
public:
	Derived(int b, int d) :  Base(b), de(d)
	{ }
	void show()
	{
		cout << "Derived: ba= " << ba << ", de= " << de << endl;
	}
};

int main()
{
	Base* pBase = new Base(10);
	Derived* pDerived = new Derived(21, 22);

	pBase = dynamic_cast<Base*>(pDerived);
	pBase->show();

	pBase = new Derived(31, 32);
	pBase->show();
	pDerived = dynamic_cast<Derived*>(pBase);
	pDerived->show();
	
	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Демонстрация функции typeid()	////
////////////////////////////////////

class Base
{
	virtual void func()
	{ }
};

class Derv1 : public Base
{ };

class Derv2 : public Base
{ };

void displayName(Base* pB)
{
	cout << "Pointer on the object of the class: " << typeid(*pB).name() << endl;
}

int main()
{
	Base* pBase = new Derv1;
	displayName(pBase);

	pBase = new Derv2;
	displayName(pBase);

	system("pause");
	return 0;
}
*/

///////////  Chapter 12

/*
class Array
{
private:
	int* arr;
	int size;
public:
	Array() : arr(0), size(0)
	{ }
	Array(int s)
	{
		size = s;
		arr = new int[size];
	}
	~Array()
	{
		delete[] arr;
	}
	void showArray()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << "  ";
		}
		cout << endl;
	}
	Array(Array& a)
	{
		cout << "Copy" << endl;
		size = a.size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = a.arr[i];
		}
	}
	Array& operator=(Array& a)
	{
		cout << "Operator=" << endl;
		if (this == &a)
			return *this;
		delete[] arr;
		size = a.size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = a.arr[i];
		}
		return *this;
	}
	int& operator[](int n)
	{
		return arr[n];
	}
};

int main()
{
	ci SIZE = 10;
	Array arr1(SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = i*i;
	}
	arr1.showArray();

	Array arr2 = arr1;
	arr2.showArray();

	Array arr3;
	arr3 = arr2;
	arr3.showArray();
	
	arr3 = arr3;
	arr3.showArray();

	system("pause");
	return 0;
}
*/

/*
////////////////////
//ostringstream	////
////////////////////

int main()
{
	float  v1 = 34.5691;
	string s1 = "std:string example";
	char   c1[] = "pure c array";
	int    i1 = 25;

	ostringstream out;

	out << "float - " << v1 << endl << "this is s1 - " << s1 << endl;
	out << "char[] -  " << c1 << endl << "ordinary int - " << i1 << endl;

	cout << out.str() << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Форматированный вывод в файл	////
////////////////////////////////////

int main()
{
	char ch = 'x';
	int i = 77;
	float a = 6.025;
	string str1 = "Hello!";
	string str2 = "It`s me";

	ofstream outfile("fdata.txt");

	outfile << ch
		<< i
		<< ' '
		<< a
		<< str1
		<< ' '
		<< str2;

	cout << "File written\n";

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Форматированный ввод в файл	////
////////////////////////////////////

int main()
{
	char ch;
	int i;
	float a;
	string str1;
	string str2;

	ifstream infile("fdata.txt");

	infile >> ch >> i >> a >> str1 >> str2;

	cout << ch << endl << i << endl << a << endl << str1 << endl << str2 << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

ci MAX = 100;
int buff[MAX];

int main()
{
	
	for (int i = 0; i < MAX; i++)
	{
		buff[i] = i;
	}
	ofstream os("TEST.txt", ios::binary);
	os.write(reinterpret_cast<char*>(buff), MAX * sizeof(int));
	os.close();

	for (int i = 0; i < MAX; i++)
	{
		buff[i] = 0;
	}
	
	ifstream is("TEST.txt", ios::binary);
	is.read(reinterpret_cast<char*>(buff), MAX * sizeof(int));

	for (int i = 0; i < MAX; i++)
	{
		if (buff[i] != i)
		{
			cout << "Invalid data!" << endl;
		}
	}
	for (int i = 0; i < MAX; i++)
	{
	is >> buff[i];
	}
	
	for (int i = 0; i < MAX; i++)
	{
		cout << buff[i] << "  ";
	}

	cout << endl << "The data is correct" << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Сохранение объекта в файле	////
////////////////////////////////////

class Person
{
private:
	char name[80];
	int age;
public:
	void getData()
	{
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your age: ";
		cin >> age;
	}
	void showPers()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

int main()
{
	Person pers;

	pers.getData();

	ofstream os("Pers.txt", ios::binary);
	os.write(reinterpret_cast<char*>(&pers), sizeof(pers));
	os.close();
	
	ifstream is("Pers.txt", ios::binary);
	is.read(reinterpret_cast<char*>(&pers), sizeof(pers));

	pers.showPers();
	
	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////////
//Чтение из файла и запись нескольких объектов	////
////////////////////////////////////////////////////

class Person
{
	char name[80];
	int age;
public:
	void getData()
	{
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your age: ";
		cin >> age;
	}
	void showData()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

int main()
{
	Person pers;
	char ch;
	fstream file;
	file.open("Pers.dat", ios::app | ios::out | ios::in | ios::binary);
	do
	{
		cout << "Enter the data of person:" << endl;
		pers.getData();
		file.write(reinterpret_cast<char*>(&pers), sizeof(pers));
		cout << "Continue(y/n)? ";
		cin >> ch;
	} while (ch != 'n');

	file.seekg(0);
	cout << endl << endl;

	file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	while (!file.eof())
	{
		cout << "Person: " << endl;
		pers.showData();
		file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	}

	cout << endl;
	system("pause");
	return 0;
}
*/

//???????????????????????????????
/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

class Person
{
	char name[40];
	int age;
public:
	void getData()
	{
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your age: ";
		cin >> age;
	}
	void showData()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
	void diskIN(int pn)
	{
		ifstream infile;
		infile.open("PERS_IN_OUT.txt", ios::binary);
		infile.seekg(pn * sizeof(Person));
		infile.read((char*)this, sizeof(*this));
	}
	void diskOUT()
	{
		ofstream outfile;
		outfile.open("PERS_IN_OUT.txt", ios::app | ios::binary);
		outfile.write((char*)this, sizeof(*this));
	}
	static int diskCOUNT()
	{
		ifstream infile;
		infile.open("PERS_IN_OUT.txt", ios::binary);
		infile.seekg(0, ios::end);
		return (int)infile.tellg() / sizeof(Person);
	}
};

int main()
{
	Person pers;
	char ch;

	do
	{
		cout << "Enter the information about the person:" << endl;
		pers.getData();
		pers.diskOUT();
		cout << "Continue(y/n): ";
		cin >> ch;
	} while (ch != 'n');
	int n = Person::diskCOUNT();
	for (int i = 0; i < n; n++)
	{
		cout << "People " << i << endl;
		pers.diskIN(i);
		pers.showData();
	}
	cout << endl;
	system("pause");
	return 0;
}
*/

//дописать  //??????????????
/*
////////////////////////////////////////////
//Файловый ввод/вывод объектов employe	////
////////////////////////////////////////////

ci LEN = 32;
ci MAXEMP = 100;
enum Employee_type { tmanager, tscientist, tlaborer };
class Employee
{
	char name[LEN];
	int number;
	static int n;
	static Employee* arr[];
public:
	virtual void getData()
	{
		cin.ignore(10, '\n');
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your identification number: ";
		cin >> number;
	}
//-------------------------------------
	virtual void showData()
	{
		cout << "Name: " << name << endl;
		cout << "Identification number: " << number << endl;
	}
//-------------------------------------
	virtual Employee_type get_type()
	{
		if (typeid(*this) == typeid(Manager))
			return tmanager;
		else if (typeid(*this) == typeid(Scientist))
			return tscientist;
		else if (typeid(*this) == typeid(Laborer))
			return tlaborer;
	}
//-------------------------------------
	static void addEmp()
	{
		char ch;
		cout << "'m'- to add meneger" << endl
			<< "'s' - to add scientist" << endl
			<< "'l' - to add laborer" << endl
			<< "Your choise: ";
		cin >> ch;
		switch (ch)
		{
		case 'm': arr[n] = new Manager; break;
		case 's': arr[n] = new Scientist; break;
		case 'l': arr[n] = new Laborer; break;
		default: cout << "Invalid input!";
		}
		arr[n++]->getData();
		cout << endl;
	}
//-------------------------------------
	static void showAll()
	{
		for (int i = 0; i < n; i++)
		{
			cout << i + 1;
			switch (arr[i]->get_type())
			{
			case tmanager: cout << ". Type: Manager"; break;
			case tscientist: cout << ". Type: Scientist"; break;
			case tlaborer: cout << ". Type: Laborer"; break;
			}
			arr[i]->showData();
			cout << endl;
		}
	}
//-------------------------------------
	static void write()
	{
		int size;
		cout << "The recording of " << n << " workers";
		ofstream outf;
		Employee_type etype;
		outf.open("Employee.txt", ios::binary);
		for (int i = 0; i < n; i++)
		{
			etype = arr[i]->get_type();
			outf.write(reinterpret_cast<char*>(&etype), sizeof(etype));
			switch (etype)
			{
			case tmanager: size = sizeof(Manager); break;
			case tscientist: size = sizeof(Scientist); break;
			case tlaborer: size = sizeof(Laborer); break;

			}
		}
	}
//-------------------------------------
	static void read();

};
int Employee::n;
Employee* Employee::arr[MAXEMP];

class Manager : public Employee
{
	char title[LEN];
	double dues;
public:
	void getData()
	{
		Employee::getData();
		cout << "Enter the title: ";
		cin >> title;
		cout << "Enter the dues: ";
		cin >> dues;
	}
	void showData()
	{
		Employee::showData();
		cout << "Title: " << title << endl;
		cout << "Dues: " << dues << endl;
	}
};

class Scientist : public Employee
{
	int pubs;
public:
	void getData()
	{
		Employee::getData();
		cout << "Enter the number of pubs: ";
		cin >> pubs;
	}
	void showData()
	{
		Employee::showData();
		cout << "Number of pubs: " << pubs << endl;
	}
};

class Laborer : public Employee
{ };

int main()
{


	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Перегружаемые операции <<, >>	////
////////////////////////////////////

class Distance
{
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0)
	{ }
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	friend istream& operator >> (istream& is, Distance& d)
	{
		cout << "\nEnter the number of feet: ";
		is >> d.feet;
		cout << "Enter the number of inches: ";
		is >> d.inches;
		return is;
	}
	friend ostream& operator<<(ostream& os, Distance& d)
	{
		os << d.feet << "\'-" << d.inches << '\"' << endl;
		return os;
	}
};

int main()
{
	Distance dist1, dist2;
	Distance dist3(11, 6.25);

	cout << "Enter two value of distance: ";
	cin >> dist1 >> dist2;

	cout << "dist1   " << dist1;
	cout << "dist2   " << dist2;
	cout << "dist3   " << dist3;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////
//Перегружаемые операции <<, >> for files	////
////////////////////////////////////////////////

class Distance
{
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0)
	{ }
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	friend istream& operator >> (istream& is, Distance& dist)
	{
		is >> dist.feet >> dist.inches;
		return is;
	}
	friend ostream& operator<<(ostream& os, Distance& dist)
	{
		os << dist.feet << "-\'" << dist.inches << '\"' << endl;
		return os;
	}
};

int main()
{
	ofstream ofile;
	Distance dist1, dist2;
	cout << "Enter feet and inches in space: " << endl<<'\a';
	ofile.open("Data.txt", ios::app);// | ios::binary);
	cin >> dist1;
	cout << '\a';
	cin >> dist2;
	ofile << dist1;
	ofile << dist2;
	ofile.close();

	ifstream ifile;
	ifile.open("Data.txt");
	ifile >> dist1;
	ifile >> dist2;
	cout << "dist1: " << dist1;
	cout << "dist2: " << dist2;
	
	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Аргументы командной строки	////
////////////////////////////////////

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "argc= " << argc << endl;

	for (int i = 0; i < argc; i++)
	{
		cout << "Argument " << i << " = " << argv[i] << endl;
	}

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		cerr << "Command format: name_of_programm.exe name of file" << endl;
		exit(-1);
	}
	//char ch;
	ifstream ifile;
	ifile.open(argv[1]);
	if (!ifile)
	{
		cerr << "Unable to open!" << endl;
		exit(-1);
	}
	cout << ifile.rdbuf();

	system("pause");
	return 0;
}
*/

///////////  Chapter 14

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

void func_add(int&, int&);
void func_mult(int&, int&);

int main()
{
	int a = 5;
	int b = 21;
	func_add(a, b);
	func_mult(a, b);

	system("pause");
	return 0;
}

void func_add(int& first, int& second)
{
	using namespace std;
	int res = first + second;
	cout << "Sum= " << res << endl;
}

void func_mult(int& first, int&second)
{
	using namespace std;
	int res = first*second;
	cout << "Mult= " << res << endl;
}

///////////  Chapter 14

/*
////////////////
//Template	////
////////////////

template<typename T>
T AbS(T t)
{
	return(t < 0) ? -t : t;
}

int main()
{
	int it = -5;
	float ft = -1365.625;
	double de = 7897465464.54462131;
	cout << AbS(it) << endl;
	cout << AbS(ft) << endl;
	cout<< setiosflags(ios::fixed) << setprecision(10) << AbS(de) << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

template<class T>
int find(T* arr, T val, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == val)
		{
			return i;
		}
	}
	return -1;
}

char chArr[] = { 1,3,5,9,11,13 };
char ch = 5;

int intArr[] = { 1,3,5,7,9,11,13 };
int in = 6;

double dubArr[] = { 1.0,3.0,5.0,7.0,9.0,11.0,13.0 };
double db = 4;

int main()
{
	cout << "5 in chArr has index " << find(chArr, ch, sizeof(chArr)/sizeof(char)) << endl;
	cout << "6 in intArr has index " << find(intArr, in, sizeof(intArr)/sizeof(int)) << endl;
	cout << "4 in dubArr has index " << find(dubArr, db, sizeof(dubArr)/sizeof(double)) << endl;
	
	system("pause");
	return 0;
}
*/

/*
////////////////////////
//Template Stack	////
////////////////////////
ci MAX = 3;
template <class Type>
class Stack
{
private:
	Type st[MAX];
	int top;
public:
	Stack() : top(-1)
	{ }
	void push(Type val)
	{
		st[++top] = val;
	}
	Type pop()
	{
		return st[top--];
	}
};

int main()
{
	Stack <float> s1;
	s1.push(111.1F);
	s1.push(222.2F);
	s1.push(333.3F);
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl << endl;

	Stack <int> s2;
	s2.push(123123123);
	s2.push(234234234);
	s2.push(345345345);
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////
//Шаблоны в связном списке	////
////////////////////////////////

template<class Type>
class Elem
{
public:
	Type data;
	Elem<Type>* next;
};

template<class Type>
class List
{
private:
	Elem<Type>* begin;
public:
	List() : begin(NULL)
	{ }
	void addElem(Type d)
	{
		Elem<Type>* end = new Elem<Type>;
		end->data = d;
		end->next = begin;
		begin = end;
	}
	void showElem()
	{
		Elem<Type>* current = begin;
		while (current)
		{
			cout << current->data << " -> ";
			current = current->next;
		}
		cout << "NULL\n";
	}
};

int main()
{
	List<float> fl;
	fl.addElem(5.725);
	fl.addElem(9.32);
	fl.addElem(96.39);
	fl.addElem(856.237);
	fl.showElem();

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

ci LEN = 80;
class Employee
{
	char name[LEN];
	int number;
public:
	friend ostream& operator<<(ostream& os, Employee& emp)
	{
		os << "Name: " << emp.name << endl;
		os << "Number: " << emp.number << endl;
		return os;
	}
	friend istream& operator >> (istream& is, Employee& emp)
	{
		cout << "Enter your name: ";
		is>> emp.name;
		cout << "Enter your number: ";
		is >> emp.number;
		return is;
	}
};

template<class Type>
class Elem
{
public:
	Type data;
	Elem<Type>* next;
};

template<class Type>
class List
{
private:
	Elem<Type>* begin;
public:
	List() : begin(NULL)
	{ }
	void addElem(Type d)
	{
		Elem<Type>* end = new Elem<Type>;
		end->data = d;
		end->next = begin;
		begin = end;
	}
	void showElem()
	{
		Elem<Type>* current = begin;
		while (current)
		{
			cout << current->data;
			current = current->next;
		}
	}
};

int main()
{
	List<Employee> lemp;
	Employee tempemp;
	char ch;

	do
	{
		cin >> tempemp;
		lemp.addElem(tempemp);
		cout << "Continue(y/n)?: ";
		cin >> ch;
	} while (ch != 'n');

	lemp.showElem();

system("pause");
return 0;
}
*/

/*
////////////////
//Exception	////
////////////////

ci MAX = 3;
class Stack
{
	int stk[MAX];
	int top;
public:
	class Full
	{ };
	class Empty
	{ };
	Stack() : top(-1)
	{ }
	void push(int num)
	{
		if (top >= MAX - 1)
			throw Full();
		stk[++top] = num;
	}
	int pop()
	{
		if (top < 0)
			throw Empty();
		return stk[top--];
	}
};

int main()
{
	Stack s;
	try
	{	
		s.push(11);
		s.push(22);
		s.push(33);
		//s.push(44);
		cout << s.pop() << endl;
		cout << s.pop() << endl;
		cout << s.pop() << endl;
		cout << s.pop() << endl;
	}
	catch (Stack::Full)
	{
		cout << "Exception: the stack is full" << endl;
	}
	catch (Stack::Empty)
	{
		cout << "Exception: the stack is empty" << endl;
	}

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////
//Exception for the class Distance	////
////////////////////////////////////////

class Distance
{
	int feet;
	float inches;
public:
	class InhcesEx
	{
	public:
		string origin;
		float inchValue;
		InhcesEx(string or , float in) : origin(or), inchValue(in)
		{ }
	};
	Distance() : feet(0), inches(0.0)
	{ }
	Distance(int ft, float in)
	{
		feet = ft;
		if (in >= 12.0)
			throw InhcesEx("constructor with two arguments", in);
		inches = in;
	}
	void getDist()
	{
		cout << "Enter the feet: ";
		cin >> feet;
		cout << "Enter the inches: ";
		cin >> inches;
		if (inches >= 12.0)
			throw InhcesEx("method getDist()", inches);
	}
	void showDist()
	{
		cout << feet << "\'-" << inches << '\"' << endl;
	}
};

int main()
{
	try 
	{
		Distance dist1(15, 11.35);
		Distance dist2;

		dist2.getDist();

		dist1.showDist();
		dist2.showDist();
	}
	catch (Distance::InhcesEx ix)
	{
		cout << "Exception! Culprit: " << ix.origin << ". Entered value of inches "
			<< ix.inchValue << " is too large (0 <= inches < 12.0)" << endl;
	}

	system("pause");
	return 0;
}
*/

///////////  Chapter 15

/*
////////////
//sort	////
////////////
ci MAX = 6;

template <class Type>
void arrCout(Type *arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

int main()
{
	int arr[MAX];

	srand(time(NULL));
	for (int i = 0; i < MAX; i++)
	{
		arr[i] = rand() % 51 - 25;
	}

	arrCout(arr, MAX);
	
	sort(arr, arr + sizeof(arr) / sizeof(int));

	cout << endl << endl;
	arrCout(arr, MAX);
	cout << endl << endl;

	vector<int> vi;
	vector<float> vf;
	vector<long double> vunlong;
	vector<char> vch;

	cout << vi.max_size() << endl;
	cout << vf.max_size() << endl;
	cout << vunlong.max_size() << endl;
	cout << vch.max_size() << endl;

	system("pause");
	return 0;
}
*/

/*
////////////
//deque	////
////////////

int main()
{
	deque<int> deq;
	deq.push_back(30);
	deq.push_back(40);
	deq.push_back(50);
	deq.push_front(20);
	deq.push_front(10);

	deq[2] = 33;

	int qsize = deq.size();

	for (int i = 0; i < qsize; i++)
	{
		cout << deq.back() << "  ";
		deq.pop_back();
		//cout << deq[i] << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////////////////
//Iterator and cycle "for" for output data	////
////////////////////////////////////////////////

int main()
{
	int arr[] = { 2,4,6,8 };
	list<int> theList;

	for (int i = 0; i < 4; i++)
	{
		theList.push_back(arr[i]);
	}

	list<int>::iterator iter;

	for (iter = theList.begin(); iter != theList.end(); iter++)
	{
		cout << *iter << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////
//find() and iterator	////
////////////////////////////

int main()
{
	vector<int> v(5);
	vector<int>::iterator iter;
	int data = 0;

	for (iter = v.begin(); iter != v.end(); iter++)
	{
		*iter = data += 3;
	}

	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << "  ";
	}
	cout << endl;
	iter = find(v.begin(), v.end(), 12);
	if (iter != v.end())
	{
		cout << "Number 12 be fined on position " << (iter - v.begin()) << endl;
	}
	else
	{
		cout << "Number 12 be not fined" << endl;
	}

	cout << endl;

	system("pause");
	return 0;
}
*/

/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

template <class Type>
void arrCout(Type *arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}


int main()
{
	int beginRange, endRange;
	ci N = 10;
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = 11 + 2 * i;
	}

	arrCout(arr, N);

	vector<int> v1(arr, arr + N);
	vector<int> v2(10);

	cout << "Enter the range of values (example: 2 5): ";
	cin >> beginRange >> endRange;

	vector<int>::iterator iter1 = v1.begin() + beginRange;
	vector<int>::iterator iter2 = v1.begin() + endRange;
	vector<int>::iterator iter3;

	iter3 = copy(iter1, iter2, v2.begin());
	iter1 = v2.begin();

	while (iter1 != iter3)
	{
		cout << *iter1++ << "  ";
	}

	cout << endl;
	system("pause");
	return 0;
}
*/


////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////

class Person
{
private:
	string lastName;	
	string firstName;
	ui phoneNumber;
public:
	Person() : firstName("empty"), lastName("empty"), phoneNumber(0)
	{ }
	Person(string lastn, string firstn, ui phNum) : lastName(lastn), firstName(firstn), phoneNumber(phNum)
	{ }
	
	ui get_phone() const
	{
		return phoneNumber;
	}

	void showpers() const
	{
		cout << lastName << " \t" << firstName << "\t\tNumber  " << phoneNumber << endl;
	}

	friend bool operator<(const Person& p1, const Person& p2);
	friend bool operator==(const Person& p1, const Person& p2);
	friend bool operator!=(const Person& p1, const Person& p2);
	friend bool operator>(const Person& p1, const Person& p2);
};

bool operator<(const Person& p1, const Person& p2)
{
	if (p1.lastName == p2.lastName)
		return(p1.firstName < p2.firstName) ? true : false;
	return(p1.lastName < p2.lastName) ? true : false;
}

bool operator==(const Person& p1, const Person& p2)
{
	return (p1.lastName == p2.lastName && p1.firstName == p2.firstName) ? true : false;
}

bool operator!=(const Person& p1, const Person& p2)
{
	return !(p1 == p2);
}

bool operator>(const Person& p1, const Person& p2)
{
	return(!(p1 < p2) && !(p1 == p2));
}

int main()
{
	list<Person> persList;
	list<Person>::iterator iter;

	persList.push_back(Person("Deauville", "William", 8435150));
	persList.push_back(Person("McDonald", "Stacey", 3327563));
	persList.push_back(Person("Bartoski", "Peter", 6946473));
	persList.push_back(Person("KuangThu", "Bruce", 4157300));
	persList.push_back(Person("Wellington", "John", 9207404));
	persList.push_back(Person("McDonald", "Amanda", 8435150));
	persList.push_back(Person("Fredericks", "Roger", 7049982));
	persList.push_back(Person("McDonald", "Stacey", 7764987));

	cout << "Number of recording: " << persList.size() << endl;

	iter = persList.begin();
	while (iter!=persList.end())
	{
		(*iter++).showpers();
	}

	string searchLastName, searchFirstName;
	cout << "Enter the last name of fined person: ";
	cin >> searchLastName;
	cout << "Enter the first name of fined persom: ";
	cin >> searchFirstName;

	Person searchPerson(searchLastName, searchFirstName, 0);
	iter = find(persList.begin(), persList.end(), searchPerson);
	if (iter != persList.end())
	{
		cout << "The list has this man(these mans): " << endl;
		do
		{
			(*iter).showpers();
			iter++;
			iter = find(iter, persList.end(), searchPerson);
		} while (iter != persList.end());
	}
	else
		cout << "Person not found in the list" << endl;
	













	system("pause");
	return 0;
}



/*
////////////////////////////////////
//Указатели (адреса переменных)	////
////////////////////////////////////



int main()
{


system("pause");
return 0;
}
*/
















