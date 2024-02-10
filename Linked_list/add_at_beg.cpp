void linklist::addatbeg(int num)
{
  node *q;
  q = new node;
  q->data = num;
  q->link = p;
  p=q;
}
