#include <iostream>
//for clear screen function
#include <string>
//for using strings
using namespace std;
void mainmenu();
int bill(int c, int q, string fname);

string pizza[] = {"ChickenFazita", "ChickenBarBQ", "PeriPeri", "CreamyMax"};
string roll[] = {"ChickenMayoaRoll:150", "Veg RollWithFries:100", "Pratha roll:120"};
string burger[] = {"ZingerBurger:180", "ChickenBurger:150", "BeefBurger:160"};
string sandwich[] = {"ClubSandwich:240", "ChickenCrispySandwich:160", "ExtreamVegSandwich:100"};
string biryani[] = {"ChickenBiryani:160", "PrawnBiryani:220", "BeefBiryani:140"};
char gotostart;
int choice = 0, pchoice, pchoice1, quantity;
int i;
int todayc = 0;
int customerc = 0;
char goback;

void piza()
{
    string fname;
    for (int i = 0; i < 4; i++)
        cout << "\n"
             << i + 1 << ")" << pizza[i] << "\n";

    cout << "\nPlease Enter which Flavour would you like to have?:";
    cin >> pchoice;
    if (pchoice >= 1 && pchoice < 5)
    {
        cout << "\n1) Small Rs.250\n"
             << "2) Regular Rs.500\n"
             << "3) Large Rs.900\n";
        cout << "\nChoose Size Please:";
        cin >> pchoice1;
        if (pchoice1 >= 1 && pchoice1 <= 3)
            cout << "\nPlease Enter Quantity: ";
        cin >> quantity;
        switch (pchoice1)
        {
        case 1:
            choice = 250 * quantity;
            break;

        case 2:
            choice = 500 * quantity;
            break;

        case 3:
            choice = 900 * quantity;
            break;
        }

        system("CLS");

        fname = pizza[pchoice];

        bill(choice, quantity, fname);

        cout << "Would you like to order anything else? Y / N:";
        cin >> gotostart;
        if (gotostart == 'Y' || gotostart == 'y')
        {
            mainmenu();
            //return 0;
        }
    }
}

void burgers()
{
    string fname;
    for (int i = 0; i < 3; i++)
        cout << "\n"
             << i + 1 << ")" << burger[i] << "\n";

    cout << "\nPlease Enter which Burger you would like to have?: ";
    cin >> pchoice1;
    if (pchoice1 >= 1 && pchoice1 <= 3)
    {
        cout << "\nPlease Enter Quantity: ";
        cin >> quantity;
        switch (pchoice1)
        {
        case 1:
            choice = 180 * quantity;
            break;

        case 2:
            choice = 150 * quantity;
            break;

        case 3:
            choice = 160 * quantity;
            break;
        }

        system("CLS");

        fname = burger[pchoice];

        bill(choice, quantity, fname);
    }
    cout << "\nWould you like to order anything else? Y / N:";
    cin >> gotostart;
    if (gotostart == 'Y' || gotostart == 'y')
    {
        mainmenu();


      //return 0;
    }
}

void sandwiches()
{
    string fname;
    for (int i = 0; i < 3; i++)
        cout << "\n"
             << i + 1 << ")" << sandwich[i] << "\n";
    cout << "\nPlease Enter which Sandwich you would like to have?:";
    cin >> pchoice1;
    if (pchoice1 >= 1 && pchoice1 <= 3)
    {
        cout << "\nPlease Enter Quantity: ";
        cin >> quantity;
        switch (pchoice1)
        {
        case 1:
            choice = 240 * quantity;
            break;

        case 2:
            choice = 160 * quantity;
            break;

        case 3:
            choice = 100 * quantity;
            break;
        }
        system("CLS");

        fname = sandwich[pchoice];

        bill(choice, quantity, fname);
    }
    cout << "Would you like to order anything else? Y / N:";
    cin >> gotostart;
    if (gotostart == 'Y' || gotostart == 'y')
    {
        mainmenu();
        //return 0;
    }
}

void rolls()

{
    string fname;
    for (int i = 0; i < 3; i++)
        cout << "\n"
             << i + 1 << ")" << roll[i] << "\n";

    cout << "\nPlease Enter which you would like to have?: ";
    cin >> pchoice1;
    if (pchoice1 >= 1 && pchoice1 <= 3)
    {
        cout << "\nHow Much Rolls Do you want: ";
        cin >> quantity;
        switch (pchoice1)
        {
        case 1:
            choice = 150 * quantity;
            break;

        case 2:
            choice = 100 * quantity;
            break;

        case 3:
            choice = 120 * quantity;
            break;
        }
        system("CLS");

        fname = roll[pchoice];

        bill(choice, quantity, fname);
    }

    cout << "Would you like to order anything else? Y / N:";
    cin >> gotostart;
    if (gotostart == 'Y' || gotostart == 'y')
    {
        mainmenu();
    }
}
void biryanis()
{
    string fname;
    for (int i = 0; i < 3; i++)
        cout << "\n"
             << i + 1 << ")" << biryani[i] << "\n";

    cout << "\nPlease Enter which Biryani you would like to have?:";
    cin >> pchoice1;
    if (pchoice1 >= 1 && pchoice1 <= 3)
    {
        cout << "\nPlease Enter Quantity: ";
        cin >> quantity;
        switch (pchoice1)
        {
        case 1:
            choice = 160 * quantity;
            break;

        case 2:
            choice = 220 * quantity;
            break;

        case 3:
            choice = 140 * quantity;
            break;
        }
        system("CLS");

        fname = biryani[pchoice];

        bill(choice, quantity, fname);
    }

    cout << "Would you like to order anything else? Y / N:";
    cin >> gotostart;
    if (gotostart == 'Y' || gotostart == 'y')
    {
        mainmenu();
        //return 0;
    }
}
//main menu for customer
void mainmenu()
{
    system("CLS");
    string cname;

    cout << "\t\t\t----------BFC-----------\n\n";
    cout << "Please Enter Your Name: ";
    cin >> cname;
    customerc++;
    cout << "Hello " << cname << "\n\nWhat would you like to order?\n\n";

    cout << "\t\t\t\t--------Menu--------\n\n";

    cout << "1) Pizzas\n";
    cout << "2) Burgers\n";
    cout << "3) Sandwich\n";
    cout << "4) Rolls\n";
    cout << "5) Biryani\n\n";
    cout << "\nPlease Enter your Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        piza();
    }

    else if (choice == 2)
    {
        burgers();
    }
    else if (choice == 3)
    {
        sandwiches();
    }

    else if (choice == 4)
    {
        rolls();
    }
    else if (choice == 5)
    {
        biryanis();
    }

    else
    {
        system("CLS");
        cout << "Please Select Right Option: \n";
        cout << "Would You like to Start the program again? Y / N: ";
        cin >> gotostart;

        if (gotostart == 'Y' || gotostart == 'y')
        {
            mainmenu();
            //return 0;
        }
    }
}
//bill
int bill(int c, int q, string name)
{
    cout << "\t\t\t--------Your Order---------\n";
    cout << "\n"
         << "Food:" << name << " "
                               "quantity:"
         << quantity << endl;

    cout << "\nYour Total Bill is:" << c << "\nYour Order Will be delivered in 40 Minutes";
    cout << "\n\nThank you For Ordering From BFC. \n";
    todayc = todayc + c;
    return 0;
}

void admin()
{
    int ch;
    int pw = 123;
    cout << "\nEnter pasword:";
    cin >> pw;
    if (pw == 123)
    {
        cout << "\n1)Today cash";
        cout << "\n2)today customers";
        cout << "\n3)All food";
        cout << "\nEnter choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "\ntoday cash:" << todayc;
            break;
        }
        case 2:
        {
            cout << "\nNo. cstomers today" << customerc << endl;
            break;
        }
        case 3:
        {
            cout << "\n\n####pizza####" << endl;
            for (int i = 0; i < 4; i++)
            {
                cout << pizza[i] << endl;
            }
            cout << "\n\n####rolls####" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << roll[i] << endl;
            }
            cout << "\n\n####biryani####" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << biryani[i] << endl;
            }
            cout << "\n\n####burger####" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << burger[i] << endl;
            }
            cout << "\n\n####sandwich####" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << sandwich[i] << endl;
                break;
            }
        default:
            cout << "wrong choice" << endl;
            break;
        }
        }
    }
    else
        cout << "wrong password";
}

int main()
{
    int c;
    cout << "\n\n#################################################################";
    cout << "\n\n\n++****** Welcome to BFC   *****++";
    cout << "\n\n#################################################################";
    cout << endl;
    cout << "\nwhere you wanna visit?" << endl;
    cout << "\n1)Customer site " << endl;
    cout << "2)Admin portal" << endl;

    cout << "\nEnter choice:";
    cin >> c;

    if (c == 1)
    {
        mainmenu();
    }
    else if (c == 2)
    {
        admin();
    }
    else
        cout << "Select right option" << endl;
    return 0;
}
