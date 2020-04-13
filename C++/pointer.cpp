#include <iostream>
using namespace std;

void update(int *a,int *b)
{
    int x = *a + *b;
    int y = *a - *b;
    *a = x; 
    if(y>0)
        *b = y;
    else
        *b = -1*y; 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(&a , &b);
    cout<<a<<endl<<b;
    return 0;
}
