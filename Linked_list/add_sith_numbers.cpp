void linklist::addafter(int c, int num){
  node *q,*t;
  for(int i=0, q=p; i<c; i++){
    q = q->link;
    if(q == NULL){
      cout<< endl << "There are less than" << c << "elements";
      return;
    }
  }
  t = new node;
  t->data = num;
  t->link = q->link;
  q->link = t;
}
