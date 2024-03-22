class Solution
{
public:
    bool asteroidsDestroyed(int mass, vector<int> &asteroids)
    {
        sort(asteroids.begin(), asteroids.end());
        long long sum = mass;
        for (auto i : asteroids)
        {
            if (sum >= i)
                sum += i;
            else
                return false;
        }
        return true;
    }
};