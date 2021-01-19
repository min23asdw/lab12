#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}


void updateImage(bool canva[N][M],int s,int targetY,int targetX){
    for(int y = 0; y < N; ++y){
        for (int x = 0; x < M; ++x){
            if(sqrt((pow(x - targetX, 2.0)+(pow(y-targetY,2.0)))) <= (s-1.0))      {canva[y][x] = 1;}
}
}
}
void showImage(const bool canva[N][M]){
    cout << "------------------------------------------------------------------------" << '\n';
    for(int y = 0; y < N; ++y){
        cout << '|';
        for (int x = 0; x < M; ++x)          {if(canva[y][x] == 1) cout << '*';      else cout << ' ';}
        cout << '|' << '\n';}
    cout << "------------------------------------------------------------------------" << '\n';
}
