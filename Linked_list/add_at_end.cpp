void linklist::append(int num)
{
  node *q, *t;
  if(p == NULL){
    p = new node;
    p->data = num;
    p->link = NULL;
  }
  else{
    q=p;
    while(q->link!=NULL){
      q = q->link;
    }
    t = new node ;
    t->data = num;
    t->link = NULL;
    q->link = t;
  }
}
