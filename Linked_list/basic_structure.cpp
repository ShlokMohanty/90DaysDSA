#include<iostream>
using namespace std;
class linklist {
private:
struct node 
{
int data;
node *link;
}*p;
public:

linklist();
void append(int num);
void addatbeg(int num);
void addafter(int c, int num);
void del(int num);
void display();
}
int count();
~linklist();
};
linklist::linklist()
{
  p=NULL;
}
