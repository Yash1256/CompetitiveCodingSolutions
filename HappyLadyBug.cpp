#include <bits/stdc++.h>

#define fifo                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int size;
        cin >> size;
        char ar[size];
        cin >> ar;
        list<char> list1;
        for (int i = 0; i < size; i++)
            list1.push_back(ar[i]);
        list1.unique();
        int flag = 0;
        char ch;
        int list_size = list1.size();
        int underscore = count(list1.begin(), list1.end(), '_');
        map<char, vector<int>> index;
        vector<vector<int>> differnce(list_size);
        if (underscore == 0) {
            for (auto it = list1.begin(); it != list1.end(); ++it) {
                for (int i = 0; i < size; i++)
                    if (ar[i] == (*it))
                        index[*it].push_back(i);
            }
            int j = 0;
            for (auto it = index.begin(); it != index.end(); ++it) {
                //char chr = it->first;
                vector<int> v = it->second;
                //cout<<chr<<" ";
                if (v.size() == 1)
                    differnce[j].push_back(0);
                for (int i = 0; i < v.size() - 1; i++)
                    differnce[j].push_back(abs(v[i] - v[i + 1]));
                j++;
            }
            int flag_1 = 1;
            for (int i = 0; i < differnce.size(); i++)
                for (j = 0; j < differnce[i].size(); j++)
                    if (count(differnce[i].begin(), differnce[i].end(), 1) < 1) {
                        flag_1 = 0;
                        break;
                    }
            if (flag_1 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            continue;
        }
        for (auto it = list1.begin(); it != list1.end(); ++it) {
            ch = *it;
            int count_ch = 0;
            if (ch == '_')
                continue;
            count_ch = count(ar, ar + size, ch);
            if (count_ch >= 2)
                continue;
            else {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
