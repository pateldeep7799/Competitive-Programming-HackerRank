#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, t, a, b, n, m, d, ans1=0, ans2=0;
    cin >> s >> t >> a >> b >> m >> n;

    for(int i=0;i<m; i++) {
        cin>>d;
        d = a+d;
        if(d>=s && d<=t)
            ans1++;
    }
    for(int i=0;i<n; i++) {
        cin>>d;
        d = b+d;
        if(d>=s && d<=t)
            ans2++;
    }
    cout << ans1 << endl;
    cout << ans2 << endl; 
    return 0;
}
algo
start_house, end_house = map(int, raw_input().split())
left_tree, right_tree = map(int, raw_input().split())
number_of_apples, number_of_orranges = map(int, raw_input().split())
apple_distances = map(int, raw_input().split())
orange_distances = map(int, raw_input().split())
apple_count = 0
orange_count = 0

for distance in apple_distances:
    if start_house <= left_tree + distance <= end_house:
        apple_count += 1
for distance in orange_distances:
    if start_house <= right_tree + distance <= end_house:
        orange_count += 1
print apple_count
print orange_count