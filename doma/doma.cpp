#include <deque>

std::deque<int> result(std::deque <int> floorsCount)
{
    std::deque<int> res;
    int temp = 0;
    for (int i = floorsCount.size() - 1; i >= 0; i--)
    {
        if (floorsCount[i] > temp)
        {
            res.push_front(i);
            temp = floorsCount[i];
        }
    }
    return res;
}