#include<iostream>
#include <string>
using namespace std;
class Product {
    private:
    int productId;
    string productName;
    float price;
    int monthlySales[12];
    int totalQuantitySold;
    float totalBillingAmount;
    public:
    void acceptDetails() {
        cout<<"Enter Product ID: ";
        cin>>productId;
        cin.ignore();
        cout<<"Enter Product Name: ";
        getline(cin, productName);
        cout<<"Enter Price: ";
        cin>>price;
        cout<<"Enter Monthly Sales for 12 months: ";
        totalQuantitySold = 0;
        for(int i=0; i<12; i++) {
            cin>>monthlySales[i];
            totalQuantitySold += monthlySales[i];
        }
        totalBillingAmount = totalQuantitySold * price;

    }
    void displayDetails() {
        cout<<"\nProduct ID: "<<productId<<endl;
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Total Quantity Sold: "<<totalQuantitySold<<endl;
        cout<<"Total Billing Amount: "<<totalBillingAmount<<endl;
    }
    float getTotalBillingAmount() const {
        return totalBillingAmount;
    }

};
int main() {
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    Product products[100];
    float grantotalBillingAmount = 0;
    for(int i=0; i<n; i++) {
        cout<<"\n-----Product "<<i+1<<" Details-----"<<endl;
   
        products[i].acceptDetails();
        grantotalBillingAmount += products[i].getTotalBillingAmount();
    }
    cout<<"\n-----Product Details-----"<<endl;
    for(int i=0; i<n; i++) {
        products[i].displayDetails();
    }
    cout<<"\nGrand Total Billing Amount: "<<grantotalBillingAmount<<endl;
    return 0;

}