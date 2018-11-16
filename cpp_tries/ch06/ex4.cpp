#include <iostream>
#include <string>

const int ArSize = 5;
const int strsize = 50;
// Benevolent Order of Programmers name structure
struct bop
{
	char fullname[strsize];	// real name
	char title[strsize];	// job title
	char bopname[strsize];	// secret BOP name
	int preference; 	// 0 = fullname, 1 = title, 2 = bopname
};

char the_input(char ch, int flag);
void choices(char ch, bop members[], int flag);

int main()
{
	using namespace std;
	char choice;
	bop members[ArSize] = {{"Wimp Macho", "Professor", "Ghost", 1},
	 {"Raki Rhodes", "Junior Programmer", "Shadow", 2},
	 {"Celia Laiter", "Senior Programmer", "MIPS", 3},
	 {"Hoppy Hipman", "Analyst Trainee", "Flash", 2},
	 {"Pat Hand", "Data Scientist", "LOOPY", 3}
	};
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name	b. display by title" << endl;
	cout << "c. display by bopname	d. display by preference" << endl;
	cout << "q. quit" << endl;
	choices(the_input(choice, 0), members, 0);
	return 0;
}

char the_input(char ch, int flag)
{
	using namespace std;
	string info;
        if(flag == 0){
                info = "Enter your choice: ";
        }
        else{
                info = "Next choice: ";
        }
	cout << info;
	cin >> ch;
	while(!cin.good())
	{
		cin.clear();
		cout << info << endl;
		cin >> ch;
	}
	return ch;
}

void choices(char ch, bop members[], int flag)
{
	using namespace std;
	switch(ch)
        {       
                case 'a':
                        for(int i = 0; i < ArSize; ++i)
                        {
                                cout << members[i].fullname << endl;
                        }
                        choices(the_input(ch, 1), members, 1);
			break;
                case 'b':
                        for(int i = 0; i < ArSize; ++i)
                        {
                                cout << members[i].title << endl;
                        }
                        choices(the_input(ch, 1), members, 1);
			break;
                case 'c':
                        for(int i = 0; i < ArSize; ++i)
                        {
                                cout << members[i].bopname << endl;
                        }
                        choices(the_input(ch, 1), members, 1);
			break;
		case 'd':
			for(int i = 0; i < ArSize; ++i)
			{
				switch(members[i].preference)
				{
					case 1:
						cout << members[i].fullname << endl;
						break;
					case 2:
						cout << members[i].title << endl;
						break;
					case 3:
						cout << members[i].bopname << endl;
						break;
				}
			}
			choices(the_input(ch, 1), members, 1);
			break;
                case 'q':
                        cout << "Bye!" << endl;
                        break;
		default:
			while(cin.get() != '\n')
			{
				continue;
			}
			choices(the_input(ch, flag), members, flag);
	}
}
