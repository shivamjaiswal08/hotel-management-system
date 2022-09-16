#include <iostream>
using namespace std;

int main()
{
    // First part
    int quant, choice;
    string coustomer_name;
    // quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    // sold items
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    // total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
    cout << "Enter the coustomer name: ";
    cin >> coustomer_name;

    cout << "\n\t\t\t Welcome to  Hotel Shivam Residency! " << coustomer_name;

    cout << "\n\t Quantity of items we have: "; // \t for horizontal spaces
    cout << "\n Numbers of rooms: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of burger: ";
    cin >> Qburger;
    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake: ";
    cin >> Qshake;
    cout << "\n Quantity of chicken-roll: ";
    cin >> Qchicken;

m: // Labeling menu options with m
    cout << "\n\t\t\t Please select from the menu options: ";
    cout << "\n\n 1) Rooms";
    cout << "\n 2) Pasta";
    cout << "\n 3) Burgers";
    cout << "\n 4) Noodles";
    cout << "\n 5) Shake";
    cout << "\n 6) Chicken-roll";
    cout << "\n 7) Total Order Details";
    cout << "\n 8) Information regarding sales and collection";
    cout << "\n 9) Exit";

    cout << "\n\n Please select your choice! ";
    cin >> choice;

    // Second part where we will add functionality to the choice part
    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want: ";
        cin >> quant;

        if (Qrooms - Srooms >= quant)
        {
            Srooms += quant;
            Total_rooms += quant * 1200;
            cout << "\n\n\t\t" << quant << " room/rooms we have alloted to you! ";
        }
        else
            cout << "\n\n\t\t Only " << Qrooms - Srooms << " rooms are availabe in hotel";
        break;

    case 2:
        cout << "\n\n Enter the quantity of Pasta you want: ";
        cin >> quant;

        if (Qpasta - Spasta >= quant)
        {
            Spasta += quant;
            Total_pasta += quant * 200;
            cout << "\n\n\t\t" << quant << " Pasta is the order! ";
        }
        else
            cout << "\n\n\t\t Only " << Qpasta - Spasta << " Pasta are availabe in hotel";
        break;

    case 3:
        cout << "\n\n Enter the quantity of Burger you want: ";
        cin >> quant;

        if (Qburger - Sburger >= quant)
        {
            Sburger += quant;
            Total_burger += quant * 80;
            cout << "\n\n\t\t" << quant << " Burger is the order! ";
        }
        else
            cout << "\n\n\t\t Only " << Qburger - Sburger << " Burger are availabe in hotel";
        break;

    case 4:
        cout << "\n\n Enter the quantity of Noodles you want: ";
        cin >> quant;

        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles += quant;
            Total_noodles += quant * 100;
            cout << "\n\n\t\t" << quant << " Noodles is the order! ";
        }
        else
            cout << "\n\n\t\t Only " << Qnoodles - Snoodles << " Noodles are availabe in hotel";
        break;

    case 5:
        cout << "\n\n Enter the quantity of Shakes you want: ";
        cin >> quant;

        if (Qshake - Sshake >= quant)
        {
            Sshake += quant;
            Total_shake += quant * 90;
            cout << "\n\n\t\t" << quant << " Shakes is the order! ";
        }
        else
            cout << "\n\n\t\t Only " << Qshake - Sshake << " Shakes are availabe in hotel";
        break;

    case 6:
        cout << "\n\n Enter the quantity of Chicken-roll you want: ";
        cin >> quant;

        if (Qchicken - Schicken >= quant)
        {
            Schicken += quant;
            Total_chicken += quant * 400;
            cout << "\n\n\t\t" << quant << " Chicken-roll is the order! ";
        }
        else
            cout << "\n\n\t\t Only " << Qchicken - Schicken << " Chicken-roll are availabe in hotel";
        break;

        // Third part
    case 7:
        cout << "\n\t\t Your Order is :";
        cout << "\n\n Items "
             << "\t\t"
             << "Quantity"
             << "\t"
             << "Price";
        cout << "\n\n ROOMS "
             << "\t\t" << Srooms << "\t" << Total_rooms;
        cout << "\n\n PASTA "
             << "\t\t" << Spasta << "\t" << Total_pasta;
        cout << "\n\n BURGERS "
             << "\t"
             << Sburger << "\t" << Total_burger;
        cout << "\n\n NOODLES "
             << "\t"
             << Snoodles << "\t" << Total_noodles;
        cout << "\n\n SHAKES "
             << "\t"
             << Sshake << "\t" << Total_shake;
        cout << "\n\n CHICKEN-ROLL "
             << "\t"
             << Schicken << "\t" << Total_chicken;
        cout << "\n\n Your total order value is : " << Total_burger + Total_chicken + Total_noodles + Total_pasta + Total_rooms + Total_shake << " rs.";
        break;

    case 8:
        cout << "\n\t\t Details of sales and collection ";
        cout << "\n\n Numbers of rooms we had : " << Qrooms;
        cout << "\n\n Numbers of rooms we rented : " << Srooms;
        cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
        cout << "\n\n Total price colleced in a day from rooms : " << Total_rooms << " rs.";

        cout << "\n\n Numbers of Pastas we had : " << Qpasta;
        cout << "\n\n Numbers of Pastas we sold : " << Spasta;
        cout << "\n\n Remaining Pastas : " << Qpasta - Spasta;
        cout << "\n\n Total price colleced in a day from Pastas : " << Total_pasta << " rs.";

        cout << "\n\n Numbers of Burgers we had : " << Qburger;
        cout << "\n\n Numbers of Burgers we sold : " << Sburger;
        cout << "\n\n Remaining Burgers : " << Qburger - Sburger;
        cout << "\n\n Total price colleced in a day from Burgers : " << Total_burger << " rs.";

        cout << "\n\n Numbers of Noodles we had : " << Qnoodles;
        cout << "\n\n Numbers of Noodles we sold : " << Snoodles;
        cout << "\n\n Remaining Noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Total price colleced in a day from Noodles: " << Total_noodles << " rs.";

        cout << "\n\n Numbers of Shakes we had : " << Qshake;
        cout << "\n\n Numbers of Shakes we sold : " << Sshake;
        cout << "\n\n Remaining Shakes : " << Qshake - Sshake;
        cout << "\n\n Total price colleced in a day from Shakes : " << Total_shake << " rs.";

        cout << "\n\n Numbers of Chicken-roll we had : " << Qchicken;
        cout << "\n\n Numbers of Chicken-roll we sold : " << Schicken;
        cout << "\n\n Remaining Chicken-roll : " << Qchicken - Schicken;
        cout << "\n\n Total price colleced in a day from Chicken-roll : " << Total_chicken << " rs.";

        cout << "\n\n Total Collection from the day : " << Total_burger + Total_chicken + Total_noodles + Total_pasta + Total_rooms + Total_shake << " rs.";
        break;

    case 9:
        exit(0);

    default:
        cout << "\n WARNING -> Please select the numbers mentioned above! ";
    }
    goto m;
}
