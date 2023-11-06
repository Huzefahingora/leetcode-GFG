class SeatManager {
public:
// stack<int>seat;
priority_queue<int,vector<int>,greater<int>>pq;
        // vector<int>seats;
        // int i = 0;
    SeatManager(int n) {
        for(int i = 1; i <= n; ++i)
        pq.push(i);
    }
    
    int reserve() {
        // seat[i] = 1?;
        int val = pq.top();
        pq.pop();
        return val;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */