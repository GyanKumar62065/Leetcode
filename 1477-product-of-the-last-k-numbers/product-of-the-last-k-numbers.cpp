class ProductOfNumbers {
    vector<long long>stream;
public:
    ProductOfNumbers() {
    }
    
    void add(int num) {
        stream.push_back(num);
    }
    
    int getProduct(int k) {
        int n = stream.size();
        int ans = stream[n-1];
        for(int i = n-2; i >= n-k; i--){
            ans *= stream[i];
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */