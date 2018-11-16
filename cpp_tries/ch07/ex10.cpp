#include <iostream>

using namespace std;
typedef double (*funcp) (double, double); 

const int ArSize = 5;
double Add(double x, double y);
double Minus(double x, double y);
double Prod(double x, double y);
double Div(double x, double y);
double calculate(double x, double y, double (*func)(double , double));

int main()
{
	funcp func[4] = {Add, Minus, Prod, Div};
	double numbers[ArSize][2];
	for(int i = 0; i < ArSize; i++)
	{
		cout << "Enter two numbers: ";
		cin >> numbers[i][0];
		cin >> numbers[i][1];
	}
	cout << "Results for Add, Minus, Product and Division:" << endl;
	for(int i = 0; i < ArSize; i++)
	{
		cout << "x = " << numbers[i][0] << "; y = " << numbers[i][1] << ":"<< endl;
		for(int j = 0; j < 4; j++)
		{
			cout << func[j](numbers[i][0], numbers[i][1]) << " ";
		}
		cout << endl;
	}
	return 0;
}

double Add(double x, double y)
{
	return x + y;
}

double Minus(double x, double y)
{
	return x - y;
}

double Prod(double x, double y)
{
	return x * y;
}

double Div(double x, double y)
{
	return x / y;
}

double calculate(double x, double y, double (*func)(double , double))
{
	return(func(x, y)); //C++ also allows it besides (*func)(x, y).
}
