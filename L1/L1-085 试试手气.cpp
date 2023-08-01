#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 6> dice_points{};
    for (int i = 0; i < 6; ++i)
    {
        cin >> dice_points[i];
    }
    int roll_times;
    cin >> roll_times;

    int current_point = 7 - roll_times;
    if (current_point <= dice_points[0])
    {
        --current_point;
    }
    cout << current_point;
    for (int i = 1; i < 6; ++i)
    {
        int current_point = 7 - roll_times;
        if (current_point <= dice_points[i])
        {
            --current_point;
        }
        cout << " " << current_point;
    }
    return 0;
}
