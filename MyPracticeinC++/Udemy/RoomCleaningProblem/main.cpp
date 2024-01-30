#include <iostream>

using namespace std;

int main()
{
    cout << "Frank's Carpet Cleaning Service" << endl;
    cout << "================================" << endl;

    int small_rooms {0};
    cout <<"\nNumber of small rooms would you like cleaned? ";
    cin >> small_rooms;

    int large_rooms {0};
    cout <<"Number of large rooms would you like cleaned? ";
    cin >> large_rooms;

    int cost_small_room = 25;
    int cost_large_room = 35;
    int cost {0};
    float tax_rate = 6.6;
    float total_cost;
    cost = (small_rooms * cost_small_room) + (large_rooms * cost_large_room);
    total_cost = cost + tax_rate;

    cout << "cost:$ " << cost << endl;
    cout << "Tax:$ " << tax_rate << endl;
    cout <<"=================================" << endl;
    cout << "Total estimate is:$" << total_cost << endl;
    cout << "This estimate is valid for 30 days" << endl;



    return 0;
}
