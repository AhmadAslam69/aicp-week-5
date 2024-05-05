
#include<iostream>
#include<string>
using namespace std;




struct credentials {

    string name;
    double amount_paid;



};

void cost()
{
    int cit;
    double coach_cost = 0;
    double meal_cost = 0;
    double ticket_cost = 0;


    do {
        cout << "Enter no. of citizens interested in outing (10-36): ";
        cin >> cit;

        if (cit < 10 || cit > 36)
        {
            cout << "Error: citizens must be between 10 and 36." << endl;

        }

    } while (cit < 10 || cit > 36);

    if (cit >= 10 && cit <= 16)
    {
        coach_cost = 150;
        meal_cost = 14;
        ticket_cost = 21;
    }

    if (cit >= 17 && cit <= 26)
    {
        coach_cost = 190;
        meal_cost = 13.50;
        ticket_cost = 20;
    }

    if (cit >= 27 && cit <= 39)
    {
        coach_cost = 225;
        meal_cost = 13;
        ticket_cost = 19;
    }

    int carers = (cit > 24) ? 3 : 2;
    cout << "No. of Carers = " << carers << endl;

    double total_cost = coach_cost + (meal_cost + ticket_cost) * cit;
    cout << "Total cost of the trip is = " << total_cost << endl;

    double individual_cost = total_cost / (cit+carers);
    cout << "cost per person is = " << individual_cost << endl <<endl;

    int coach_capacity = 36;
    int extra_people = coach_capacity - (cit + carers);
    double extra_cost = (meal_cost + ticket_cost) * extra_people;
    total_cost += extra_cost;




    credentials people[36];

    for (int i = 0; i < cit + carers; i++)
    {
        cout << i + 1 << ": enter the name of person: ";
        cin >> people[i].name;


        cout << "enter the amount paid: ";
        cin >> people[i].amount_paid;


    }

    cout << endl;

    int total_money = 0;
    for (int i = 0; i < cit + carers; i++)
    {
        total_money += people[i].amount_paid;
    }
    cout << "TOTAL MONEY COLLECTED= " << total_money << endl << endl;


    cout << "list of peoples " << endl;
    for (int i = 0; i < cit + carers; i++)
    {
        cout << i + 1 << ": " << people[i].name << endl;


    }


    if (total_money == total_cost)
    {
        cout << "outing has broken even" << endl;

    }
    else if (total_money > total_cost)
    {

        cout << "outing has made profit of " << total_money - total_cost << " $" << endl;

    }

    else if (total_money < total_cost)
    {

        cout << "outing has made loss of " << total_money - total_cost << " $" << endl;

    }

}



//void task_2(int cit,int carers,int meal_cost,int total_cost,int ticket_cost)
//{
//    
//
//}




int main()
{
    cost();
    
    
    return 0;
}
