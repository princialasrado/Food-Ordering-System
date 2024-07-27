#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Restaurant1
{
    protected:
    //storing list of item of restaurant 1 in string type array "f1name"
    string f1name[30]=
	{
	   "Kung Pao Stir fry",
	   "Teriyaki Chicken",
	   "Japanese Cheesecake",
	   "Miso Soup",
	   "Kimchi Chicken taiwanese dumpling",
	   "Manchow Soup",
	   "Coconut Panna Cotta",
	   "Glass Noodle Salad",
	   "Mixed Seafood Momo",
	   "Dark Chocolate Torte"
    };
     //storing prices of item of restaurant 1 in integer type array "f1price"
     int f1price[30]=
    {
        279,
        339,
        179,
        179,
        229,
        139,
        159,
        199,
        329,
        169

    };

};

class Restaurant2
{
    protected:
    //storing list of item of restaurant 2 in string type array "f2name"
    string f2name[30]=
    {
        "Chicken Spring Roll",
        "Lime Soda",
        "Caramel Custard",
        "Egg Fried Rice",
        "Chicken Noodles",
        "Chicken Sweet corn soup",
        "Chicken Chilly",
        "Baby corn manchurian",
        "Drums of Heaven",
        "Veg Chinese Chopsuey"
    };

    //storing prices of item of restaurant 2 in integer type array "f2price"
    int f2price[30]=
    {
        100,
        50,
        70,
        110,
        120,
        90,
        120,
        130,
        160,
        130
    };

};

class Restaurant3
{
    protected:
    //storing list of item of restaurant 3 in string type array "f3name"
    string f3name[30]=
    {
        "Hot and Sour Soup",
        "Bolognese",
        "Margherita Pizza",
        "Tripple Schezwan (Chicken)",
        "Stir fried noodles",
        "Iced Tea (Peach)",
        "Butter Naan",
        "Butter Chicken",
        "Chicken Platter",
        "Blue Moon"
    };

    //storing prices of item of restaurant 3 in integer type array "f3price"
    int f3price[30]=
    {
        95,
        385,
        245,
        230,
        210,
        70,
        50,
        220,
        490,
        140
    };
};

class Restaurant4
{
    protected:
    //storing list of item of restaurant 4 in string type array "f4name"
    string f4name[30]=
    {
        "Chicken, Lamb Steak and Cheese",
        "Chicken Sizzler with Exotic Veg",
        "Veg. Fried Rice",
        "Schezwan Mixed Meat Rice",
        "Peach Iced Tea",
        "Ranch Delight",
        "Mashed Potato with Cheese",
        "Sweet Corn Soup",
        "Iced Mocha",
        "Ranch Mini Platter"
    };

    //storing prices of item of restaurant 4 in integer type array "f4price"
    int f4price[30]=
    {
        350,
        340,
        140,
        240,
        70,
        130,
        80,
        90,
        100,
        270
    };
};

class Restaurant : public Restaurant1, public Restaurant2, public Restaurant3, public Restaurant4
{
    protected:
    //Storing payment methods in string type array "payment"
    string payment[25]=
    {
        "Cash on Delivery",
        "UPI"
    };
    char gotostart;
	string name, contact, delivery,transid;
	int choice,f1choice,f2choice,f3choice,f4choice,quantity,pay;

	public:
    void order()
    {

	beginning:
	cout<<"\t\t\t----------FOOD ORDERING SYSTEM-----------\n\n";
	cout<<"\t\t\t         BY: PRINCIA & PRIYANKA         \n\n";
	cout<<"\n\nWhich restaurant would you prefer to order from ?\n\n";


	cout<<"1) Kyoto\n";
	cout<<"2) Dollops\n";
	cout<<"3) Sai Palace\n";
	cout<<"4) Sizzlers\n";

	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
    cout<<"\t\t\tKYOTO"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"No.     MENU                                   PRICE"<<endl;
    cout<<"1.      Kung Pao Stir fry                      279"<<endl;
    cout<<"2.      Teriyaki Chicken                       339"<<endl;
    cout<<"3.      Japanese Cheesecake                    179"<<endl;
    cout<<"4.      Miso Soup                              179"<<endl;
    cout<<"5.      Kimchi Chicken taiwanese dumpling      229"<<endl;
    cout<<"6.      Manchow Soup                           139"<<endl;
    cout<<"7.      Coconut Panna Cotta                    159"<<endl;
    cout<<"8.      Glass Noodle Salad                     199"<<endl;
    cout<<"9.      Mixed Seafood Momo                     329"<<endl;
    cout<<"10.     Dark Chocolate Torte                   169"<<endl;
    cout<<"----------------------------------------------------"<<endl;

		//Taking order from the customer
		cout<<"\nSelect the item you want to order:";
		cin>>f1choice;
		cout<<"\nYou have selected:"<<f1name[f1choice-1]<<endl;

		//Taking quantity of food
		cout<<"\nEnter quantity:";
		cin>>quantity;
		cout<<"\n";

		//Taking delivery details from the customer
		cout<<"DELIVERY DETAILS:\n";
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter Contact number:";
		cin>>contact;
		cout<<"Enter Delivery Address:";
		cin>>delivery;

        cout<<"\n";
		cout<<"\t\t\tYOUR BILL\n";

		//Storing the total amount into the integer type variable "total"
		int total=f1price[f1choice-1]*quantity;

		//Showing bill with customer details
		cout<< f1name[f1choice-1]<<" * "<<quantity<<"\t\t\t\t"<<f1price[f1choice-1]<<" * "<<quantity<<endl;
		cout<<"\n--------------------------------------------------------------\n";
		cout<<"Total"<<"\t\t\t\t -\t\t"<<total<<endl;
		cout<<name<<endl;
		cout<<contact<<endl;
		cout<<delivery<<endl;

		cout<<"\n";

		cout<<"PAYMENT METHOD\n";
		for(int i=0;i<2;i++)
        {
            //Showing payment options to customers
            cout<<i+1<<"-"<<payment[i]<<endl;
        }
        cout<<"Select your desired payment method:";
        cin>>pay;

        if(pay==1)
        {
            cout<<"Cash on delivery\n";

            //Prints a message after the payment
            cout<<"Your order is placed successfully\n";
            cout<<"Order will be delivered soon\n";
        }
        else if(pay==2)
        {
            cout<<"UPI\n";
            cout<<"Enter your Transaction ID:"<<endl;
            cin>>transid;

            //Prints a message after the payment
            cout<<"Your order is placed successfully\n";
            cout<<"Order will be delivered soon\n";
        }

        cout<<"Would you like to order anything else? Y / N:";
        cin>>gotostart;
        if(gotostart=='Y' || gotostart=='y')
        {
            goto beginning;
            //return 0;
        }



		}

	 else if(choice==2)
	 {
	     cout<<"\t\t\tDOLLOPS"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"No.     MENU                                   PRICE"<<endl;
    cout<<"1.      Chicken Spring Roll                    100"<<endl;
    cout<<"2.      Lime Soda                              50"<<endl;
    cout<<"3.      Caramel Custard                        70"<<endl;
    cout<<"4.      Egg Fried rice                         110"<<endl;
    cout<<"5.      Chicken Noodles                        120"<<endl;
    cout<<"6.      Chicken Sweet corn soup                90"<<endl;
    cout<<"7.      Chicken Chilly                         120"<<endl;
    cout<<"8.      Baby corn manchurian                   130"<<endl;
    cout<<"9.      Drums of Heaven                        160"<<endl;
    cout<<"10.     Veg Chinese Chopsuey                   130"<<endl;
    cout<<"----------------------------------------------------"<<endl;

		//Taking order from the customer
		cout<<"\nSelect the item you want to order:";
		cin>>f2choice;
		cout<<"\nYou have selected:"<<f2name[f2choice-1]<<endl;

		//Taking quantity of food
		cout<<"\nEnter quantity:";
		cin>>quantity;
		cout<<"\n";

		//Taking delivery details from the customer
		cout<<"DELIVERY DETAILS:\n";
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter Contact number:";
		cin>>contact;
		cout<<"Enter Delivery Address:";
		cin>>delivery;

		cout<<"\n";
		cout<<"\t\t\tYOUR BILL\n";

		//Storing the total amount into the integer type variable "total"
		int total=f2price[f2choice-1]*quantity;

		//Showing bill with customer details
		cout<< f2name[f2choice-1]<<" * "<<quantity<<"\t\t\t\t"<<f2price[f2choice-1]<<" * "<<quantity<<endl;
		cout<<"\n--------------------------------------------------------------\n";
		cout<<"Total"<<"\t\t\t\t -\t\t"<<total<<endl;
		cout<<name<<endl;
		cout<<contact<<endl;
		cout<<delivery<<endl;

		cout<<"\n";

		cout<<"PAYMENT METHOD\n";
		for(int i=0;i<2;i++)
        {
            //Showing payment options to customers
            cout<<i+1<<"-"<<payment[i]<<endl;
        }
        cout<<"Select your desired payment method:";
        cin>>pay;

        if(pay==1)
        {
            cout<<"Cash on delivery\n";

            //Prints a message after the payment
            cout<<"Your order is placed successfully\n";
            cout<<"Order will be delivered soon\n";
        }
        else if(pay==2)
        {
            cout<<"UPI\n";
            cout<<"Enter your Transaction ID:"<<endl;
            cin>>transid;

            //Prints a message after the payment
            cout<<"Your order is placed successfully\n";
            cout<<"Order will be delivered soon\n";
        }

        cout<<"Would you like to order anything else? Y / N:";
        cin>>gotostart;
        if(gotostart=='Y' || gotostart=='y')
        {
            goto beginning;
            //return 0;
        }



		}

     else if(choice==3)
	 {
		 cout<<"\t\t\tSAI PALACE"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"No.     MENU                                   PRICE"<<endl;
    cout<<"1.      Hot and Sour Soup                      95"<<endl;
    cout<<"2.      Bolognese                              385"<<endl;
    cout<<"3.      Margherita Pizza                       245"<<endl;
    cout<<"4.      Tripple Schezwan (Chicken)             230"<<endl;
    cout<<"5.      Stir fried noodles                     210"<<endl;
    cout<<"6.      Iced Tea (Peach)                       70"<<endl;
    cout<<"7.      Butter Naan                            50"<<endl;
    cout<<"8.      Butter Chicken                         220"<<endl;
    cout<<"9.      Chicken Platter                        490"<<endl;
    cout<<"10.     Blue Moon                              140"<<endl;
    cout<<"----------------------------------------------------"<<endl;
		//Taking order from the customer
		cout<<"\nSelect the item you want to order:";
		cin>>f3choice;
		cout<<"\nYou have selected:"<<f3name[f3choice-1]<<endl;

		//Taking quantity of food
		cout<<"\nEnter quantity:";
		cin>>quantity;
		cout<<"\n";

		//Taking delivery details from the customer
		cout<<"DELIVERY DETAILS:\n";
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter Contact number:";
		cin>>contact;
		cout<<"Enter Delivery Address:";
		cin>>delivery;

		cout<<"\n";
		cout<<"\t\t\tYOUR BILL\n";

		//Storing the total amount into the integer type variable "total"
		int total=f3price[f3choice-1]*quantity;

		//Showing bill with customer details
		cout<< f3name[f3choice-1]<<" * "<<quantity<<"\t\t\t\t"<<f3price[f3choice-1]<<" * "<<quantity<<endl;
		cout<<"\n--------------------------------------------------------------\n";
		cout<<"Total"<<"\t\t\t\t -\t\t"<<total<<endl;
		cout<<name<<endl;
		cout<<contact<<endl;
		cout<<delivery<<endl;

		cout<<"\n";

		cout<<"PAYMENT METHOD\n";
		for(int i=0;i<2;i++)
        {
            //Showing payment options to customers
            cout<<i+1<<"-"<<payment[i]<<endl;
        }
        cout<<"Select your desired payment method:";
        cin>>pay;

        if(pay==1)
        {
            cout<<"Cash on delivery\n";

            //Prints a message after the payment
            cout<<"Your order is placed successfully\n";
            cout<<"Order will be delivered soon\n";
        }
        else if(pay==2)
        {
            cout<<"UPI\n";
            cout<<"Enter your Transaction ID:"<<endl;
            cin>>transid;
            cout<<"Your order is placed successfully\n";
            cout<<"Order will be delivered soon\n";
        }

        cout<<"Would you like to order anything else? Y / N:";
        cin>>gotostart;
        if(gotostart=='Y' || gotostart=='y')
        {
            goto beginning;
            //return 0;
        }
	 }


	 else if(choice==4)
	 {
		cout<<"SIZZLER'S RANCH"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"No.     MENU                                   PRICE"<<endl;
    cout<<"1.      Chicken, Lamb Steak and Cheese         350"<<endl;
    cout<<"2.      Chicken Sizzler with Exotic Veg.       340"<<endl;
    cout<<"3.      Veg. Fried Rice                        140"<<endl;
    cout<<"4.      Schezwan Mixed Meat Rice               240"<<endl;
    cout<<"5.      Peach Iced Tea                         70"<<endl;
    cout<<"6.      Ranch Delight                          130"<<endl;
    cout<<"7.      Mashed Potato with Cheese              80"<<endl;
    cout<<"8.      Sweet Corn Soup                        90"<<endl;
    cout<<"9.      Iced Mocha                             100"<<endl;
    cout<<"10.     Ranch Mini Platter                     270"<<endl;
    cout<<"----------------------------------------------------"<<endl;

        //Taking order from the customer
		cout<<"\nSelect the item you want to order:";
		cin>>f4choice;
		cout<<"\nYou have selected:"<<f4name[f4choice-1]<<endl;

		//Taking quantity of food
		cout<<"\nEnter quantity:";
		cin>>quantity;
		cout<<"\n";

		//Taking delivery details from the customer
		cout<<"DELIVERY DETAILS:\n";
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter Contact number:";
		cin>>contact;
		cout<<"Enter Delivery Address:";
		cin>>delivery;

		cout<<"\n";
		cout<<"YOUR BILL\n";

		//Storing the total amount into the integer type variable "total"
		int total=f4price[f4choice-1]*quantity;

		//Showing bill with customer details
		cout<< f4name[f4choice-1]<<" * "<<quantity<<"\t\t\t\t"<<f4price[f4choice-1]<<" * "<<quantity<<endl;
		cout<<"\n--------------------------------------------------------------\n";
		cout<<"Total"<<"\t\t\t\t -\t\t"<<total<<endl;
		cout<<name<<endl;
		cout<<contact<<endl;
		cout<<delivery<<endl;

		cout<<"\n";

		cout<<"PAYMENT METHOD\n";
		for(int i=0;i<2;i++)
        {
            //Showing payment options to customers
            cout<<i+1<<"-"<<payment[i]<<endl;
        }
        cout<<"Select your desired payment method:";
        cin>>pay;

        if(pay==1)
        {
            cout<<"Cash on delivery\n";

            //Prints a message after the payment
            cout<<"Your order is placed successfully\n";
            cout<<"Order will be delivered soon\n";
        }
        else if(pay==2)
        {
            cout<<"UPI\n";
            cout<<"Enter your Transaction ID:"<<endl;
            cin>>transid;

            //Prints a message after the payment
            cout<<"Your order is placed successfully\n";
            cout<<"Order will be delivered soon\n";
        }

        cout<<"Would you like to order anything else? Y / N:";
        cin>>gotostart;
        if(gotostart=='Y' || gotostart=='y')
        {
            goto beginning;
            //return 0;
        }
   }
	else
        {

            cout<<"Please Select Right Option: \n";
            cout<<"Would You like to Start the program again? Y / N: " ;
            cin>>gotostart;

            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;
			  //return 0;
			}
        }
    }
};
int main()
{
	Restaurant r;
	r.order();
    getch();
}

