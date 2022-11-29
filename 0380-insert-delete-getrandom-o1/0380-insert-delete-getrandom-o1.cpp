class RandomizedSet {
private:
    unordered_map<int,int> mp; // map from val to index
    vector<int> arr; // store the val for randomisation
public:
    bool insert(int val) {
        if(mp.count(val)) return false;
        arr.push_back(val); // add val to arr
        mp[val] = arr.size() - 1; // set the value in hashmap to index of the element
        return true;
    }
    
    bool remove(int val) {
        if(!mp.count(val)) return false;
        int last = arr.back();
        int rmIdx = mp[val]; // index of the removed element
        mp[last] = mp[val]; // move pointer from last element to the removed one
        arr[rmIdx] = last; // move last element to the removed element slot
        arr.pop_back(); // remove the last element
        mp.erase(val); // remove from hashmap
        return true;
    }
    
    int getRandom() {
        return arr[rand()%arr.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */