//622. 设计循环队列
class MyCircularQueue {
private:
   int l,r,size,limit;//size记同时在队列的数字个数,不可超过limit
   vector<int>queue;
public:
    MyCircularQueue(int k) {
        queue.resize(k);
        l=0,size=0,r=0;
        limit=k;
    }
    //满了返回0,否则放入
    bool enQueue(int value) {
        if(isFull()) return 0;
        queue[r]=value;
        r=(limit-r==1)?0:(r+1);//限制5个元素,当前下标为4(最后一个),则从0开始
        size++;
        return 1;
    }
    //如果空了,返回0,反之..
    //删除则l+1
    bool deQueue() {
        if(isEmpty()) return 0;
        l=(limit-l==1)?0:(l+1);
        size--;
        return 1;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return queue[l];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        int last=(r==0)?(limit-1):(r-1);//r表示下一个要放的元素的位置
        return queue[last];        
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==limit;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */