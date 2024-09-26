
#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
    char name[30], piza1[]="Veg Exotic" ,piza2[]="Mrgarita" ,piza3[]="Peri Peri" ,piza4[]="Sweet Corn Delite";
    char sand1[]="Club Sandwich", sand2[]="Veg Crispy Sandwich", sand3[]="Extream Veg Sandwich";
    char bur1[]="Mexican Burger",bur2[]="Aloo Tikki Burger",bur3[]="Double Cheese Burger";
    char roll1[]="Aloo Tikki Roll", roll2[]="Mexican Roll", roll3[]="Veg cream Roll " ;
    char bir1[]="Veg Biryani", bir2[]="Hyderabadi Biryani", bir3[]="Shahi Korma Biryani",gotostart ;
    int choice=0,tchoice,choice1, qty;// time=40;
    beginning:
    system("CLS");
    cout<<"\t\t\t=================Tops Tech. Fast Food=================\n\n";
    cout<<"Please Enter Your Name: ";
    cin.getline(name, 30);
    cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";
    cout<<"\t\t\t\t=================Menu=================\n\n";
    cout<<"1) Pizzas\n";
    cout<<"2) Burgers\n";
    cout<<"3) Sandwich\n";
    cout<<"4) Rolls\n";
    cout<<"5) Biryani\n\n";
    cout<<"\nPlease Enter your Choice: ";
    cin>>choice;
    if(choice==1)
     {
        cout<<"\n1) "<<piza1<<"\n";
        cout<<"2) "<<piza2<<"\n";
        cout<<"3) "<<piza3<<"\n";
        cout<<"4) "<<piza4<<"\n";
        cout<<"\nPlease Enter which type of Pizza would you like to have?:";
        cin>>tchoice;
        if(tchoice>=1 && tchoice<=5)
        {
            cout<<"\n1) Small Rs.155\n"<<"2) Regular Rs.350\n"<<"3) Large Rs.700\n";
            cout<<"\nChoose Size Please:";
            cin>>choice1;
            if(choice1>=1 && choice1<=3)
            cout<<"\nPlease Enter Quantity: ";
            cin>>qty;
            switch(choice1)
            {
            case 1: choice = 155*qty;
            break;
            case 2: choice = 350*qty;
            break;
            case 3: choice = 700*qty;
            break;
                  }
            system("CLS");
            switch (choice1)
            {
             case 1:
             cout<<"\t\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<piza1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\n\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<"  "<<piza2;
             cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<piza3;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
             case 4:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<piza4;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
            }
            cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;

            }
        }
     }
     else if(choice==2)
     {
        cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
        cout<<"2 "<<bur2<<" Rs.150"<<"\n";
        cout<<"3 "<<bur3<<" Rs.160"<<"\n";

        cout<<"\nPlease Enter which Burger you would like to have?: ";
        cin>>choice1;
        if(choice1>=1 && choice1<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>qty;
            switch(choice1)
            {
            case 1: choice = 180*qty;
            break;
            case 2: choice = 150*qty;
            break;
            case 3: choice = 160*qty;
            break;
            }
            system("CLS");
            switch (choice1)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<bur1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food \n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<"  "<<bur2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Pizza\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<bur3;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
            }
            cout<<"\nWould you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;

            }
 }
}
    else if(choice==3)
     {
        cout<<"\n1  "<<sand1<<" Rs.240"<<"\n";
        cout<<"2  "<<sand2<<" Rs.160"<<"\n";
        cout<<"3  "<<sand3<<" Rs.100"<<"\n";

        cout<<"\nPlease Enter which Sandwich you would like to have?:";
        cin>>choice1;
        if(choice1>=1 && choice1<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>qty;
            switch(choice1)
            {
            case 1: choice = 240*qty;
            break;
            case 2: choice = 160*qty;
            break;
            case 3: choice = 100*qty;
            break;
            }
            system("CLS");
            switch (choice1)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<sand1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<"  "<<sand2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<sand2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
            }
            cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;

            }
        }
    }
     else if(choice==4)
     {
        cout<<"\n1 "<<roll1<<" Rs.150"<<"\n";
        cout<<"2 "<<roll2<<" Rs.100"<<"\n";
        cout<<"3 "<<roll3<<" Rs.120"<<"\n";

        cout<<"\nPlease Enter which you would like to have?: ";
        cin>>choice1;
        if(choice1>=1 && choice1<=3)
        {
            cout<<"\nHow Much Rolls Do you want: ";
            cin>>qty;
            switch(choice1)
            {
            case 1: choice = 150*qty;
            break;
            case 2: choice = 100*qty;
            break;
            case 3: choice = 120*qty;
            break;
            }
            system("CLS");
            switch (choice1)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<roll1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<"  "<<roll2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<roll3;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
            }
 }
}
    else if(choice==5)
     {
        cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
        cout<<"2 "<<bir2<<" Rs.220"<<"\n";
        cout<<"3 "<<bir3<<" Rs.140"<<"\n";

        cout<<"\nPlease Enter which Biryani you would like to have?:";
        cin>>choice1;
        if(choice1>=1 && choice1<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>qty;
            switch(choice1)
            {
            case 1: choice = 160*qty;
            break;
            case 2: choice = 220*qty;
            break;
            case 3: choice = 140*qty;
            break;
            }
            system("CLS");
            switch (choice1)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<bir1;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food \n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<"  "<<bir2;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<qty<<" "<<bir3;
             cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Tops Tech. Fast Food\n";
             break;
            }
            cout<<"Would you like to order anything else? Y / N:";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              goto beginning;

            }
        }
    }
            else
            {
                system("CLS");
                cout<<"Please Select Right Option: \n";
                cout<<"Would You like to Show Menu again? Y / N: " ;
                cin>>gotostart;
                if(gotostart=='Y' || gotostart=='y')
                {
                  goto beginning;

            }
            }
     getch();
}
