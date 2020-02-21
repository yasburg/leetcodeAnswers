class RecentCounter {
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        list.push(t);
        while(t - list.front() > 3000){
            list.pop();
        }
        return list.size();
    }
private:
    queue<int> list;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */