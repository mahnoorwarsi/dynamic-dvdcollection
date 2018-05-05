#include<iostream>
#include<string.h>
#include"dvd.h"

using namespace std;
class dvdcollection 
{
  private:
  int size;
  int index;
  dvd *list[5];
  int i;
  dvd d;
  dvd a;
  

public:
dvdcollection()
{
  int size=0;
  int index=0;
  for(i=0;i<size;i++)
  {
  this->list[i]=0;
  }
}

void setindex(int index)
{
  this->index=index;
}
void setsize(int size)
{
  this->size=size;
}

int getsize()
{
  return this->size;
}
int getindex()
{
  return this->index;
}
dvdcollection adddvd(dvd a)
{
  if(index<size)
  {
    this->list[index]=a;
    index++;
  }
  else
   increasesize(d);
}
void increasesize(dvd& d)
{
  int size=size*2;
  dvd *nlist = new   dvd[size];
  for(index=0;index<size;index++)
  {
    nlist[index]=list[index];
   
  }
  delete[]  list[size];
  list = &nlist;
  delete[] nlist;
  index++;
  list[index]=d;
} 


dvdcollection finddvd()
{
  string cond;
  dvd temp;
  int a=0;
  cout<<"enter dvd name to find: "<<endl;
  cin>>cond;
  for(index=0;index<size;index++)
  {
    temp=*list[index];
    if(cond==temp.gettitle())
    {
      a=index;
    }
  }
    if(a=0)
    {
      cout<<"required dvd is not in this collection"<<endl;
    }
    else
    cout<<"required dvd is at index:"<<a;
  
}
ostream operator <<(ostream& o,dvdcollection j)
{
  o<<j.gettitle()<<j.getbrand()<<j.brand()<<endl;
  return o;
}
/*void operator =(dvdcollection j)
{
  this->list=j.list;
}*/

};



