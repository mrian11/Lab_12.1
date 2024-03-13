#include<iostream>

using namespace std;
 
struct Elem
{
	Elem* link1,
		* link2;
	int inf;
};

int main()
{
	Elem* p;
	p = new Elem; //1 
	p->inf = 1; //2 
	p->link1 = new Elem; //3
	p->link1->inf = 2; //4 
	p->link1->link1 = NULL; //5
	p->link1->link2 = new Elem; //6
	p->link1->link2->inf = 3; //7 
	p->link1->link2->link1 = p->link1; //8
	p->link1->link2->link2 = new Elem; //9
	p->link1->link2->link2->inf = 4; //10
	p->link1->link2->link2->link1 = p->link1->link2; //11
	p->link1->link2->link2->link2 = NULL; //12
	p->link2 = new Elem; //13
	p->link2->inf = 4; //14
	p->link2->link2 = NULL; //15


	delete p->link2; // 16
	delete p->link1->link2->link2; // 17
	delete p->link1->link2; // 18
	delete p->link1; //19
	delete p; //20
}
 