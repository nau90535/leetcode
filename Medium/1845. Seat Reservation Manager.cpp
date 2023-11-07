class SeatManager {
public:
    SeatManager(int n) {}
    // if no one unreverse, lowestNumber += 1
    int reserve() {
        if (unreserveSeat.empty()) {
            return ++lowestNumber;
        }
        else {
            int minIndex = min_element(unreserveSeat.begin(), unreserveSeat.end()) - unreserveSeat.begin();
            int seat = unreserveSeat[minIndex];
            unreserveSeat.erase(unreserveSeat.begin() + minIndex);
            return seat;
        }
    }
    //if anyone unreserve, the number will be recorded in the vector "unreserveSeat".
    void unreserve(int seatNumber) {
        if (seatNumber == lowestNumber) {lowestNumber--;}
        else {unreserveSeat.push_back(seatNumber);}
    }

private:
    vector<int> unreserveSeat;
    int lowestNumber = 0;
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
