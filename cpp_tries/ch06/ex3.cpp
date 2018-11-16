#include <iostream>
#include <string>

void choices(char ch);
char the_input(char ch);
int main()
{
	using namespace std;
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore		p) pianist" << endl;
	cout << "t) tree		g) game" << endl;
	char choice;
	choices(the_input(choice));
	return 0;
}

void choices(char ch)
{
	using namespace std;
        switch(ch)
        {
		//This function would not stop until the an answer is given.
                case 'c':
                        cout << "A tyrannosaur is a carnivore." << endl;
			break;
                case 'p':
                        cout << "Richard is a pianist." << endl;
			break;
                case 't':
                        cout << "A maple is a tree." << endl;
			break;
                case 'g':
                        cout << "Chess is a game." << endl;
			break;
                default:
			cout << "Please enter a c, p, t or g: ";
			choices(the_input(ch));
        }
}

char the_input(char ch)
{
	using namespace std;
	while(!(cin >> ch))
	{
		cin.clear();
		while(cin.get() != '\n') //Clean the input queue.
			continue;
	}
	while(cin.get() != '\n') //Only read the first one.
		continue;
	return ch;

}
