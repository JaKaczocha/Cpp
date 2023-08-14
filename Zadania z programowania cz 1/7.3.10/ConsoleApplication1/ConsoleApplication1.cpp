#include <iostream>

struct element
{
	int i;
	element* next;
};

element* createLite();
int main()
{

}

element* createLite()
{
	element* ele{ new element };
	ele->next = nullptr;
	return  ele;
}

