class MedianFinder {
public:
    priority_queue<int, vector<int>, greater<int>>minheap;
    priority_queue<int>maxheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int topelement;
        // Where minheap and maxheap exist
        // With maxheap is not created yet or have size great than num
          if (maxheap.empty() || num <= maxheap.top())
        maxheap.push(num);
         else
         
        minheap.push(num);
        // not balanced size make balanced:
       if(minheap.size()>maxheap.size()+1){
        maxheap.push(minheap.top());
       minheap.pop();
       }

       if(maxheap.size()>minheap.size()+1){
        minheap.push(maxheap.top());
        maxheap.pop();
       }
    }
    
    double findMedian() {
        if(minheap.size()>maxheap.size()){
            return minheap.top();
        }
        if(maxheap.size()>minheap.size()){
            return maxheap.top();
        }
        //Where even number:
        return (minheap.top()+maxheap.top())/2.00;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */