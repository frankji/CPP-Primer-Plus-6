#include <iostream>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void display_box_as_value(box the_box);
void display_box_as_point(box * the_box);

int main()
{	
	box a_box = {"Box 1", 1.0, 2.0, 3.0, 7.0};
	display_box_as_value(a_box);
	cout << "The volume does not seem right!" << endl;	
	display_box_as_point(&a_box);
	cout << "Now it looks good!"<< endl;
	return 0;
}

void display_box_as_value(box the_box)
{
	cout << "Maker: " << the_box.maker << ":" << endl;
	cout << "Height: " << the_box.height << "; "; 
	cout << "Width: " << the_box.width << "; ";
	cout << "Length: " << the_box.length << "; ";
	cout << "Volume: " << the_box.volume << "." << endl;
}

void display_box_as_point(box * the_box)
{
	the_box->volume = the_box->height * the_box->width * the_box->length;
        cout << "Maker: " << the_box->maker << ":" << endl;
        cout << "Height: " << the_box->height << "; ";
        cout << "Width: " << the_box->width << "; ";
        cout << "Length: " << the_box->length << "; ";
        cout << "Volume: " << the_box->volume << "." << endl;
}

