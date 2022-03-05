#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct segment_tree {

    vector<pair<int, int>>tree;
    int m = 1;

    segment_tree(int n) {

        while (m < n)m *= 2;
        tree.resize(2 * m - 1);
    }

    void update(int i, int val, int v, int lx, int rx) {

        if (rx - lx == 1) {
            tree[v] = make_pair(val, 1);
            return;
        }

        int mid = (lx + rx) / 2;

        if (i < mid)update(i, val, v * 2 + 1, lx, mid);
        else update(i, val, v * 2 + 2, mid, rx);

        if (tree[v * 2 + 1].first > tree[v * 2 + 2].first) {
            tree[v] = tree[v * 2 + 1];
        }
        if (tree[v * 2 + 1].first < tree[v * 2 + 2].first) {
            tree[v] = tree[v * 2 + 2];
        }
        if (tree[v * 2 + 1].first == tree[v * 2 + 2].first) {
            tree[v].first = tree[v * 2 + 1].first;
            tree[v].second = tree[v * 2 + 1].second + tree[v * 2 + 2].second;
        }

    }

    void update(int i, int val) {
        update(i, val, 0, 0, m);
    }


    pair<int, int> op(int l, int r, int v, int lx, int rx) {

        if (l >= rx || lx >= r)return make_pair(-1, 0);
        if (lx >= l && rx <= r)return tree[v];

        int mid = (lx + rx) / 2;

        auto first = op(l, r, v * 2 + 1, lx, mid);
        auto second = op(l, r, v * 2 + 2, mid, rx);

        if (first.first > second.first)return first;
        else if (first.first < second.first)return second;
        else return make_pair(first.first, first.second + second.second);

    }

    pair<int, int> op(int l, int r) {
        return op(l, r, 0, 0, m);
    }



};

int main()
{
    int n, q, x;
    cin >> n;

    segment_tree t(n);

    for (int i = 0;i < n;++i) {
        cin >> x;
        t.update(i, x);
    }

    cin >> q;

    for (int i = 0;i < q;++i) {

        int l, r;
        cin >> l >> r;

        auto ans = t.op(l - 1, r);
        cout << ans.first << ' ' << ans.second << "\n";

    }



    return 0;
}