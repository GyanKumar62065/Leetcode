// class ProductOfNumbers {
//     List<Integer>list;
//     public ProductOfNumbers() {
//         list = new ArrayList<>();
//     }
    
//     public void add(int num) {
//         list.add(num);
//     }
    
//     public int getProduct(int k) {
//         int n = list.size();
//         int ans = list.get(n-1);
//         for(int i = n-2; i >= n-k; i--){
//             ans *= list.get(i);
//         }
//         return ans;
//     }
// }

class ProductOfNumbers {
    List<Integer>list;
    public ProductOfNumbers() {
        list = new ArrayList<>();
        list.add(1);
    }
    
    public void add(int num) {
        // list.add(num);
        if(num > 0){
            list.add(list.get(list.size() - 1) * num);
        }else{
            list.clear();
            list.add(1);
        }
    }
    
    public int getProduct(int k) {
        int n = list.size();
        return k < n ? list.get(n-1) / list.get(n-k-1) : 0;
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */