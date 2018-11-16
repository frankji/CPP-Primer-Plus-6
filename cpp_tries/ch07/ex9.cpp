#include <iostream>
#include <cstring>
using namespace std;

const int SLEN = 30;

struct student
{
	char fillname[SLEN]; // Note that this is not assignable.
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student * pa, int n);
void display1(student st);
void display2(const student * ps);
void display3(const student * pa, int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while(cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for(int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student * pa, int n)
{
	int counts = 0;	
	for(int i = 0; i < n; i++)
	{
		cout << "Fill the name for #" << i + 1 << " student:";
		for(int j = 0; j < SLEN - 1; ++j)
		{
			if((pa[i].fillname[j] = cin.get()) == '\n')
			{
				pa[i].fillname[j] = '\0';
				break;
			}
		}
		if(pa[i].fillname[0] == '\0')
			break;
		cout << "Fill the hobby for #" << i + 1 << " student:";
		cin.get(pa[i].hobby, SLEN);
		cout << "Fill the ooplevel for #" << i + 1 << " student:";
		cin >> pa[i].ooplevel;
		while(!cin.good()){
			cout << "Fill the ooplevel for #" << i + 1 << " student:";
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cin >> pa[i].ooplevel;
		}
		counts++;
	}

	return counts;
}

void display1(student st)
{
	cout << st.fillname << ": " << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Ooplevel: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
	cout << ps->fillname << ": " << endl;
	cout << "Hobby: " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->ooplevel << endl;
}

void display3(const student * pa, int n)
{
	for(int i = 0; i < n; i++)
	{
		display1(pa[i]);
	}
}
