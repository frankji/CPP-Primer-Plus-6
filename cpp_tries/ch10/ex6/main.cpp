#include <iostream>
#include "Move.h"

int main()
{
	using namespace std;
	double x, y;
	Move mv(2.0, 3.0);
	cout << "Original Move obj: " << endl;
	mv.showmove();
	Move mv1;
	cout << "Input x for the new Move obj: ";
	cin >> x;
	cout << "Input y for the new Move obj: ";
	cin >> y;
	mv1.reset(x, y);
	mv1.showmove();
	cout << "Add the new one to the original one";
	Move mv2 = mv.add(mv1);
	mv2.showmove();
	cout << "Reset this obj: " << endl;
	mv2.reset();
	mv2.showmove();
	return 0;
}
