#pragma once

struct customer
{
	char fullname[35];
	double payment;
};

class Stack
{
	typedef customer Item;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	
	bool push(const Item& item);
	bool pop();
	Item getItem(){ return items[top - 1]; }
private:
	enum { MAX = 10};
	Item items[MAX];
	int top;
};



