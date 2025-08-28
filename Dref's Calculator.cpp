#include <iostream>
using namespace std;

int main () {
	float num1, num2, sum, difference, product, quotient;
	char op, answer;
	
	do{cout <<"Dref's Calculator"<<endl;
	cout <<endl;
	cout <<"Enter number 1: ";
	cin >> num1;
	
	cout <<"Select operator"<<endl<<"plus(+), minus(-), divide(/), multiply(*): "<<" ";
	cin >> op;
	
	cout <<"Enter number 2: ";
	cin >> num2;
	
	if (op=='+'){
		sum = num1 + num2;
		cout <<"The sum is: "<<sum;
	} else if (op=='-') {
		difference = num1 - num2;
		cout <<"The difference is :"<<difference;
	} else if (op=='*'){
		product = num1 * num2;
		cout <<"The product is :"<<product;
	} else if (op=='/'){
		if (num2!=0){
			quotient = num1 / num2;
			cout <<"The quotient is :"<<quotient;
		} else {
			cout <<"Cannot be divided by 0";
		}
	} 
		cout <<endl;
		cout <<"You still want to use dref's calculator? (Y/N)?"<<endl;
		cin >> answer;
	}while (answer=='Y'||answer=='y');
		cout <<"Thank you for using my calculator :)";
		
	return 0;
}
