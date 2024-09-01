#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int total_candidates = n + m + 1;
    vector<int> a(total_candidates);
    vector<int> b(total_candidates);
    
    for (int i = 0; i < total_candidates; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < total_candidates; i++) {
        cin >> b[i];
    }
    
    vector<tuple<int, int, int>> candidates;
    for (int i = 0; i < total_candidates; i++) {
        candidates.emplace_back(a[i] - b[i], a[i], b[i]);
    }
    
    sort(candidates.rbegin(), candidates.rend());

    multiset<int> prog_skills, test_skills;
    long long total_prog_skill = 0, total_test_skill = 0;
    
    for (int i = 0; i < total_candidates; i++) {
        auto k = candidates[i];
        if (i < n) {
            prog_skills.insert(get<1>(k));
            total_prog_skill += get<1>(k);
        } else {
            test_skills.insert(get<2>(k));
            total_test_skill += get<2>(k);
        }
    }
    
    vector<long long> result(total_candidates);
    
    for (int i = 0; i < total_candidates; i++) {
        auto k = candidates[i];
        
        if (prog_skills.find(get<1>(k)) != prog_skills.end()) {
            prog_skills.erase(prog_skills.find(get<1>(k)));
            total_prog_skill -= get<1>(k);
        } else {
            test_skills.erase(test_skills.find(get<2>(k)));
            total_test_skill -= get<2>(k);
        }
        
        if (prog_skills.size() < n) {
            prog_skills.insert(get<1>(k));
            total_prog_skill += get<1>(k);
        } else {
            auto min_test_skill = *test_skills.begin();
            test_skills.erase(test_skills.find(min_test_skill));
            total_test_skill -= min_test_skill;
            
            prog_skills.insert(get<1>(k));
            total_prog_skill += get<1>(k);
            
            test_skills.insert(min_test_skill);
            total_test_skill += min_test_skill;
        }
        
        result[i] = total_prog_skill + total_test_skill;
        
        if (prog_skills.find(get<1>(k)) != prog_skills.end()) {
            prog_skills.erase(prog_skills.find(get<1>(k)));
            total_prog_skill -= get<1>(k);
        } else {
            test_skills.erase(test_skills.find(get<2>(k)));
            total_test_skill -= get<2>(k);
        }
        
        if (prog_skills.size() < n) {
            prog_skills.insert(get<1>(k));
            total_prog_skill += get<1>(k);
        } else {
            auto max_prog_skill = *prog_skills.rbegin();
            prog_skills.erase(prog_skills.find(max_prog_skill));
            total_prog_skill -= max_prog_skill;
            
            test_skills.insert(get<2>(k));
            total_test_skill += get<2>(k);
            
            prog_skills.insert(max_prog_skill);
            total_prog_skill += max_prog_skill;
        }
    }
    
    for (int i = 0; i < total_candidates; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
