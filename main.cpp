#include <iostream>
#include <array>
#include <math.h>
using namespace std;

int main()
{
	 array <float,330> A {0};
    const int initprice = 11250;
    const int maxprice = initprice * 3;
    const float step = 0.1;
     int ct = 0;
int     ctbig = 0;
    for (float x = initprice * 0.8; x <= initprice * 0.9; x += initprice * 0.01) {
	//cout << x << " ";
	 ct = 30 * ctbig;
      float dx = round(x * step);
       //cout << dx << " ";
       float y = x;
       float t;

       while (y < maxprice) {
		t = y;
       A[ct] = round(t);
       y += dx;
       ct++;
    }
       cout << round(t) << " " << ct << endl;
       ctbig++;
    }
    for (auto xx : A)
    cout << xx << " ";
    for (int i = 0; i < 330; i++)
    if (A[i] != 0) {
    for (int j = i + 1; j < 330; j++){
	if (A[i] == A[j])
		cout << "(" << A[i] << " " << i <<  " " << j << endl;
    }
    }
    int pos;
    for (int i = 0; i < 330; i++)
	if (A[i] == 23070)
	pos = i;
    while ((pos % 30) != 0)
	pos++;
	pos--;
    while (A[pos] == 0){
    cout << "!!!" << pos <<"!!!" << A[pos]<< endl;

pos--;
    }
        cout << "!!!" << pos <<"!!!" << A[pos]<< endl;
          cout << "!!!" << pos - 1<<"!!!" << A[pos - 1]<< endl;
    return 0;
}
