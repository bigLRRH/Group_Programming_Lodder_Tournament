#include <iostream>
#include <map>
#include <utility>

// #include <format>
#include <cstdio>

using namespace std;

int main()
{
    multimap<int, int, less<int>> tires; // 胎压,id
    int min_alarm_pressure, max_pressure_difference_threshold;
    for (int tire_id = 1; tire_id <= 4; ++tire_id)
    {
        int tp; // tire pressure
        cin >> tp;
        tires.insert(pair{tp, tire_id});
    }
    cin >> min_alarm_pressure >> max_pressure_difference_threshold;
    const int &max_tp = (--tires.end())->first;
    int cnt_check{0}, check_id;
    for (auto tire = tires.begin(); tire != tires.end(); ++tire)
    {
        int const &cur_tp = tire->first; // current tire pressure
        int &cur_tire_id = tire->second;
        if (cur_tp < min_alarm_pressure || max_tp - cur_tp > max_pressure_difference_threshold)
        {
            cnt_check++;
            check_id = cur_tire_id;
        }
    }

    string output;
    if (cnt_check == 0)
    {
        // output = "Normal";
        cout << "Normal";
    }
    else if (cnt_check == 1)
    {
        // output = format("Warning: please check #{}!", check_id);
        printf("Warning: please check #%d!", check_id);
    }
    else
    {
        // output = "Warning: please check all the tires!";
        cout << "Warning: please check all the tires!";
    }
    // cout << output << endl;
    cout << endl;
}
