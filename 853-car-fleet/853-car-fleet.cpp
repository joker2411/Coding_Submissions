class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> vec(n);

        for (int i = 0; i < n; ++i)
            vec[i] = {position[i], speed[i]};

        // sort by the initial position
        sort(begin(vec), end(vec));

        int fleet = 0;
        float t0 = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            // compute the distance away from target and 
            // how much time it takes to reach target
            float d = target - vec[i].first;
            float t = d / vec[i].second;

            // if it takes sooner than the previous fleet, 
            // it must slow down
            if (t <= t0)
            {

            }
            // otherwise, it become another fleet
            else
            {
                ++ fleet;
                t0 = t;
            }
        }

        return fleet;
    }
};