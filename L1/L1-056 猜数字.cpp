#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    multimap<int, string> mmap; //<num,name>
    double sum = 0.0, avg;

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        string name;
        int num;
        cin >> name >> num;
        mmap.insert({num, name});
        sum += num;
    }
    avg = sum / N / 2;

    auto it = mmap.lower_bound(avg);
    if (it != mmap.begin())
    {
        auto prev = std::prev(it);
        if (it != mmap.end() && (avg - prev->first) < (it->first - avg))
        {
            it = prev;
        }
    }

    cout << int(avg) << " " << it->second << endl;
}