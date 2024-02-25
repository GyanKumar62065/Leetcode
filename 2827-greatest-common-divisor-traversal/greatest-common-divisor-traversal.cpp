class Solution {
public:
    class UnionFind {
private:
    vector<int> pt;
    vector<int> rank;

public:
    UnionFind(int n) {
        pt.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; i++) {
            pt[i] = i;
        }
    }

    int find(int x) {
        if (pt[x] != x) {
            pt[x] = find(pt[x]);
        }
        return pt[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY]) {
                pt[rootX] = rootY;
            } else if (rank[rootX] > rank[rootY]) {
                pt[rootY] = rootX;
            } else {
                pt[rootX] = rootY;
                rank[rootY]++;
            }
        }
    }
};

bool canTraverseAllPairs(vector<int>& num) {
    int n = num.size();
    UnionFind uf(n);

    unordered_map<int, vector<int>> fac;

    for (int i = 0; i < n; i++) {
        for (int j = 2; j * j <= num[i]; j++) {
            if (num[i] % j == 0) {
                fac[j].push_back(i);
                while (num[i] % j == 0) {
                    num[i] /= j;
                }
            }
        }
        if (num[i] > 1) {
            fac[num[i]].push_back(i);
        }
    }

    for (auto& ft : fac) {
        vector<int>& ic = ft.second;
        for (int i = 1; i < ic.size(); i++) {
            uf.unite(ic[i - 1], ic[i]);
        }
    }

    int rt = uf.find(0);
    for (int i = 1; i < n; i++) {
        if (uf.find(i) != rt) {
            return false;
        }
    }

    return true;
}
   

};
