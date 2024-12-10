#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include <limits> // for numeric_limits
#include <cstdlib> // for exit

using namespace std;
struct SMarket{
	string name;
	int price,quantity,total;
}sm;
vector <SMarket>ve;
int main()
{
	int pay_amount=0;
	int val,i;
	char ch[30];
	while(true)
	{	
		cout<<"welcome in self relaxtion shop...."<<endl;
		cout<<"!!!!please add category.!!!!"<<endl;
		cout<<"1:- add item "<<endl;
		cout<<"2:-print bill "<<endl;
		cout<<"0:- exit "<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"Enter choice "<<endl;
		cin>>val;
		 while(!(cin >> val)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            cout << "Enter your choice: ";
        }
        
		switch(val)
		{
		case 1:
			system("cls");
			cout<<"Item Name :-\n";
			cin>>sm.name;
			cout<<"Price :-\n";
			cin>>sm.price;
			cout<<"Quantity :-\n";
			cin>>sm.quantity;
			ve.push_back(sm);
			cout<<sm.quantity<<" . "<<sm.name<<" Added"<<endl<<endl;
			break;
		case 2:
			system("cls");
			cout<<"Item\t\t Price\t\t Quantity\t\tTotal"<<endl;
			for(i=0;i<ve.size();i++)
			{
				ve[i].total=ve[i].price * ve[i].quantity;
				cout<<ve[i].name<<"\t\t "<<ve[i].price<<"\t\t "<<ve[i].quantity<<"\t\t"<<ve[i].total<<endl;
				pay_amount=pay_amount + ve[i].total;
			}
			cout<<"TOTAL BILL "<<pay_amount<<endl<<endl<<endl;

			break;
		case 0:
			exit(0);
			
		default:
			cout<<"enter valid choice"<<endl;
	}
}
	return 0;
}
