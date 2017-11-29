/*
	Name : SolarFlare
	Program : Finds area of shapes
*/

//Include Appropriate Header Files
#include <iostream>
#include "Functions.h"
//Using the standard namespace
using namespace std;
//Define the Shape class
class Shape {
	protected:
		float width;
		float height;
    public:
		float calculateArea();
		void setValues(float, float);
};
//Define the Square class, inheriting Shape
class Square: public Shape{

};
//Define the Rectangle class, inheriting Shape
class Rectangle : public Shape {
	
};
//Define the Triangle class, inheriting Shape
class Triangle : public Shape {
	public:
		float calculateArea();
};
//Define the Circle class, inheriting Shape
class Circle : public Shape {
	public:
		float calculateArea();
};
//Menu for the user to interact with
int menu(){
	//Initalise variables
	int choice = 0;
	float x = 0, y = 0;
	//Show user menu options
	cout << endl;
	cout << "Select A Shape:" << endl;
	cout << endl;
	cout << "1. Square" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Circle" << endl;
	cout << "5. Quit" << endl;
	//Take in users input and process
	cin >> choice;
	switch (choice) {
		case 1:
			//Sets object as a square and requests user input
			Square sqr;
			cout << "Please Enter A Value" << endl;
			cin >> x;
			//Sets input values equal to user input
			sqr.setValues(x, x);
			//Output calculated value
			cout << endl;
			cout << sqr.calculateArea();	
			cout << endl;
			cin.get();
			doAgain();
			break;
		case 2:
			//Sets object as a rectangle and requests user input
			Rectangle rect;
			cout << "Please Enter The Width" << endl;
			cin >> x;
			cout << "Please Enter The Height" << endl;
			cin >> y;
			//Sets input values equal to user input
			rect.setValues(x, y);
			//Output calculated value
			cout << endl;
			cout << rect.calculateArea();
			cout << endl;
			cin.get();
			doAgain();
			break;
		case 3:
			//Sets object as a triangle and requests user input
			Triangle tri;
			cout << "Please Enter The Width" << endl;
			cin >> x;
			cout << "Please Enter The Height" << endl;
			cin >> y;
			//Sets input values equal to user input
			tri.setValues(x, y);
			//Output calculated value
			cout << endl;
			cout << tri.calculateArea();
			cout << endl;
			cin.get();
			doAgain();
			break;
		case 4:
			//Sets object as a circle and requests user input
			Circle cir;
			cout << "Please Enter The Diameter" << endl;
			cin >> x;
			//Sets input values equal to user input
			cir.setValues(x, x);
			//Output calculated value
			cout << endl;
			cout << cir.calculateArea();
			cout << endl;
			cin.get();
			doAgain();
			break;
		case 5:
			quit();
			break;
		default:
			//Clear screen and show invalid input has been enter
			system("cls");
			cout << "Invalid Input" << endl;
			menu();
			break;
	}
	return 0;
}

void Shape::setValues(float x, float y) {
	width = x;
	height = y;
}

void doAgain() {
	char answer;
	//Prompt user if they would like to use the program again
	cout << endl;
	cout << "Do You Want To Do Again? (Y/N)" << endl;
	cin >> answer;
	switch(answer)
	{
		case 'Y':
		case 'y':
			system("cls");
			menu();
			break;
		case 'N':
		case 'n':
			quit();
			break;
		default:
			system("cls");
			cout << "Please Enter A Valid Input" << endl;	
			cout << endl;
			doAgain();
			break;
	}	
}

float Shape::calculateArea() {    
	return width*height;
}

float Triangle::calculateArea() {
	return (width*height) / 2;
}

float Circle::calculateArea() {
	int pi = 3.14;
	return ((pi * ((width / 2) * (width / 2))));
}

int quit() {
	exit(0);
}

int main() {
	menu();
}


