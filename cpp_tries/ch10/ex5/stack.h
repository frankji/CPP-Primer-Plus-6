#ifndef STACK_H_
#define STACK_H_

struct customer{
    char fullname[35];
    double payment;
};
typedef customer Item;

class stack{
    private:
        static const int MAX = 3;
        Item items[MAX];
        int top;

    public:
        stack() {top = 0;};
        bool isempty() const {return top == 0;}
        bool isfull() const {return top == MAX;}
        bool push(const Item & item);
        bool pop(Item & item);
};

#endif
