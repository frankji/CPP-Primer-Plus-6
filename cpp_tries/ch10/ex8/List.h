const int ChSize = 20;
struct Bank
{
        char account[ChSize];
        double balance;
};
typedef Bank Item;
typedef void (*pf) (Item &);
class List
{
	private:
		static const int MAX = 10;
		Item items[MAX];
		int top;
	public:
		List() {top = 0;}
		bool isempty() const {return top == 0;}
		bool isfull() const {return top == MAX;}
		bool pop(Item & item);
		bool push(const Item & item);
		void visit(pf func);
};
void increase_balance(Item & item); //Needed for header.
