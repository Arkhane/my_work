#include <iostream>
#include <cstring>
using namespace std;




class Car
{
private:
	string color = "white";
	string model = "Cccord";
	string make = "Honda";
	int year = 2010;
	int currentSpeed = 0;

public:
	//print	
	void PrintSelction()
	{
		cout << "Select an action..." << endl;
		cout << "-----------------------------" << endl;
		cout << "set make (m)" << endl;
		cout << "set model (o)" << endl;
		cout << "set year (y)" << endl;
		cout << "start car (s)" << endl;
		cout << "stop car (S)" << endl;
		cout << "print (p)" << endl;
		cout << "-----------------------------" << endl;
		cout << "What would you like to do?" << endl;
	}

	void PrintStatus()
	{
		cout << "Your diving a " << year << make << model << color << "currentSpeed: " << currentSpeed << endl;
	}


	// accel

	void Accelerate()
	{
		speed += 5;
	}
	void Brake()
	{
		if (currentSpeed >= 5)
		{
			currentSpeed -= 5;
		}
		else
		{
			speed = 0;
		}
	}


	void Start()
	{
		Accelerate();
	}

	//input
	void Input(char x)
	{
		if (x == 'c')
		{
			cout << "set color..." << endl;
			cin >> color;
		}

		if (x == 'o')
		{
			cout << "set model..." << endl;
			cin >> model;
		}

		if (x == 'm')
		{
			cout << "set make..." << endl;
			cin >> make;
		}

		if (x == 'y')
		{
			cout << "set year..." << endl;
			cin >> year;
		}

		if (x == 's')
		{
			cout << "start the car..." << endl;
			Accelerate();
		}

		if (x == 'S')
		{

		}
	}
};




int main()
{
	char userInput;
	char option;

	House myHouse;

	while (1)
	{
		myHouse.PrintStatus();
		myHouse.PrintSelction();
		cin >> userInput;
		myHouse.Input(userInput);
		myHouse.PrintStatus();

		cout << "do you want to keep on customize (y/n)..." << endl;
		cin >> option;
		if (option == 'n')
		{
			break;
		}
	}

	return 0;
}