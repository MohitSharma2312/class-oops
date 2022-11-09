/*WAP class " test" that stores the number of units of an item and price of each unit in rupees input the details for two units overload the greater than or equal to operator which compares between the total price of the two instances and return the property of that instance who is having higer total value otherwise simply displace equal when the value is found to be same*/
#include <iostream>
using namespace std;

class test{
    int unit;
    int rate;
    int total_price;
    public:
    void get(){
        cout<<"Enter the units and rate of goods in rupees : ";
        cin>>unit>>rate;
        total_price=unit * rate;
    }

    test operator>=(test k){
        if(total_price >= k.total_price){
            return *this;
        }
        else{
            return k;
        }


    }

    void show(){
        cout<<"\nUnit : "<<unit<<"\t Rate : "<<rate<<"\nTotal Price : "<<total_price;
    }
};

int main(){
    test t1,t2,t3;
    t1.get();
    t2.get();

    t3 = t1>=t2;


    cout<<"\n\nObject having higher total price is : ";
    t3.show();


}
