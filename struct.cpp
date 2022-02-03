#include <iostream>

using namespace std;

struct book
{
   int bookid;
   char s[100];
};

book input()
{
    book b;
    cout<<"enter the bookid ans s";
    cin>>b.bookid>>b.s;
    return(b);
}

void display(book b1)
{
    cout<<b1.bookid<<endl<<b1.s;
    
}
 
int main()
{
    book b1;
    b1= input();
    display(b1);
    return 0;
}