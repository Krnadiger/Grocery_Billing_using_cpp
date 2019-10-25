#include<iostream>
#include<stack>
#include "prices.cpp"
#include<string.h>
using namespace std;

struct bill{
    char *itemName;
    float price;
    int quantity,total;
};
typedef struct bill BILL;
int main(){
    int choice,i,count = 0;
    BILL b[100];
    float sum = 0;
    cout<<"Welcome to the supermarket"<<endl;
    lable : cout<<"Pick from the menu.."<<endl;
    count = 0;
    cout<<"1.Potato\n2.Rice\n3.Sugar\n4.Ice cream\n5.Oil\n6.Onion\n7.Banana\n8.New Bill\n9.Close billing counter"<<endl;
    while(1){
        cout<< "Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1 :cout<<"Enter the no. of units purchases.\n";
                    cin>>b[count].quantity;
                    b[count].itemName = "Potato";
                    sum += b[count].price =  b[count].quantity * potatoPrice;
                    break;
            case 2 :cout<<"Enter the no. of units purchases.\n";
                    cin>>b[count].quantity;
                    b[count].itemName = "Rice";
                    sum += b[count].price = b[count].quantity * ricePrice;
                    break;
            case 3 :cout<<"Enter the no. of units purchases.\n";
                    cin>>b[count].quantity;
                    b[count].itemName = "Sugar";
                    sum += b[count].price = b[count].quantity * sugarPrice;
                    break;
            case 4 :cout<<"Enter the no. of units purchases.\n";
                    cin>>b[count].quantity;
                    b[count].itemName = "Cream";
                    sum += b[count].price = b[count].quantity * creamPrice;
                    break;
            case 5:cout<<"Enter the no. of units purchases.\n";
                    cin>>b[count].quantity;
                    b[count].itemName = "Oil";
                    sum += b[count].price = b[count].quantity * oilPrice;
                    break;
            case 6:cout<<"Enter the no. of units purchases.\n";
                    cin>>b[count].quantity;
                    b[count].itemName = "Tomato";
                    sum += b[count].price = b[count].quantity * tomatoPrice;
                    break;
            case 7:cout<<"Enter the no. of units purchases.\n";
                    cin>>b[count].quantity;
                    b[count].itemName = "Banana";
                    sum += b[count].price = b[count].quantity * bananaPrice;
                    break;
            case 8: cout<<"**************General Stores**************"<<endl;
                    cout<<"Item Name "<<"\t\t"<<"Quantity"<<"\t"<<"Price"<<endl;
                    for(i=0;i<count;i++)
                    cout<<b[i].itemName<<"\t\t\t"<<b[i].quantity<<"\t\t"<<b[i].price<<endl;
                    cout<<"The total bill to be paid : \t\t"<<sum<<endl;
                    cout<<"**************Visit again!!**************"<<endl;
                    goto lable;
                    break;
            case 9:return 0;
            default : cout<<"Invalid choice try again"<<endl;
                break;
        }
        count++;
    }

}
