#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;


// Area and Volume finder of sphere
int main()
{	
	float radius = 0, PI = 3.14,Area = 0,Volume = 0;
	cout << "Please enter the radius of the sphere.(PI = 3.14)" << endl;
	cin >> radius;
	system("CLS");
	Area = 4 * PI*radius*radius;
	Volume = 4 / 3 * PI*radius*radius*radius;
	cout << "Your sphere's area is equal to: " << Area << " and your sphere's volume is equal to: " << Volume << endl;
}

arr[30] = {1,2,3}