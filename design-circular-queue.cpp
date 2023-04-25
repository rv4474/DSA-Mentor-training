class MyCircularQueue {
public:
    vector<int> arr;
    int l=-1,r=-1;
    int total;
    
    
    MyCircularQueue(int k) {
        total=k;
    }
    
    
    bool enQueue(int val) {
        if(l==-1 && r==-1){
            arr.push_back(val);
            l=0;
            r=0;
            return true;
        }
        if(r-l+1<total){
            arr.push_back(val);
            r++;
            return true;
        }
        return false;
    }
    
    
    bool deQueue() {
        if(arr.size()==0)return false;
        if(l>r) return false;
        l++;
        return true;
        
    }
    
    
    int Front() {
        if(l<=r) {
            return arr[l];
        }
        return -1;
    }
    
    
    int Rear() {
        if(l<=r && (l!=-1&& r!=-1)){
            return arr[r];
        }
        return -1;
    }
    
    
    bool isEmpty() {
        return (l>r||arr.size()==0)? true:false;
    }
    
    
    bool isFull() {
        return ((r-l+1)==total)?true:false;
    }
};