#include<iostream.h>
#include<conio.h>
float s(float a[], int size)
{
    int i;
    float  sum=0;
    for(i=0;i<size;i++)
    {
        sum+= a[i];
    }
    
    return sum;
}

int main(){
    using namespace std;
    int size,j;
      cin >> size;
      float b, n[size];
      for(j=0; j<size; j++)
      {
        cin >> n[j];
      }
      b = s(n, size);
      cout<< b << endl;
    return 0;
}
    
