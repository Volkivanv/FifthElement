#include <iostream>
#include <vector>
using namespace std;

int position(vector<int>vec,int n){
    int a = 0;
    int b = vec.size()-1;
    int m;
    if (vec[a] >= n) return 0;
    if (vec[b] <= n) return vec.size();
    while(b - a > 1){
        m = (a+b)/2;

        if(vec[m] <= n){
            a = m;
        } else b = m;
       // cout << a <<" "<< b << endl;
       // m = (a+b)/2;
    }
    return a+1;

}


int main() {
  //  vector<int>vec = {2,6};

   // vector<int>vec(1,0);
    int n;
    cout << "Input new number" << endl;
    cin >> n;
    vector<int>vec(1,n);
    bool first = true;

    while(n!=-2){
        if(n!=-1){
            if(!first){
                int i = position(vec,n);
                //while((vec[i] < n)&&(i < vec.size())){
                //    i++;
                //}
                auto iter1 = vec.begin();
                vec.insert(iter1+i,n);
               // for(int i : vec){
               //    cout << i << " ";
               // }
            }
            first = false;
        } else {
            for(int i : vec){
                cout << i << " ";
            }
            cout << endl;
            if(vec.size()>=5){
                cout << "Fifth element is " << vec[4] << endl;
            } else {
                cout << "vector has few elements" << endl;
            }
        }
        cout << "Input new number" << endl;
        cin >> n;
    }

   // cout << "input N" << endl;
   // int m;
   // cin >> m;
   // cout << position(vec,m) << endl;
    cout << "Good bye!" << endl;
}
