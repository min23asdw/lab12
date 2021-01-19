#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double data[],int N,double B[]){
  double sd,sum,avg,gm=1,hm,max,min;
for(int i=0;i<N;i++){
                                     for(int j=0;j<N;j++){
                                       avg+=data[j]/N;
                                     }
sum+=data[i];
sd+=pow(data[i]-avg,2.0);
gm*=data[i];
hm+=1/data[i];
max=data[i];
min=data[i];
if(data[i]>max){max=data[i];}
if(data[i]<min){min=data[i];}
}
avg=sum/N;
B[0]=avg;
B[1]=pow((sd/N),0.5);
B[2]=pow(gm,N/2);
B[3]=N/(hm);
B[4]=max;
B[5]=min;


}
