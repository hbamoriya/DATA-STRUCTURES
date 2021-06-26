###SOLUTION###

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(0);

    int t;

    cin >> t;

    while(t--)

    {

        int n, k;

        cin >> n >> k;

        multiset<ll> s; ###inititalizing multiset beacuse we want to store distinct elements values 

        int i;

        vector<int> vec(n);

        for(i=0;i<n;i++)

            cin >> vec[i];

        sort(vec.begin(), vec.end()); ### sorted the input vector 

        for(i=0;i<n;i++) ### here inserting the values into the multiset by taking care of duplicate elements using two pointer technique, here one pointer j is ahead of i if the same element is encountered 

        {

            int j = i;

            while(j < n && vec[j] == vec[i])

                j++;

            s.insert((j - i)*1ll*vec[i]);

            i = j - 1;

        }

        ll sum = 0;

        int cnt = 0;

        while(s.size() && cnt < k) ### now just simply taking the maximum k values as output from the last of the multiset

        {

            ll ele = *s.rbegin();

            if(ele <= 0)

                break;

            sum+=ele;

            cnt++;

            s.erase(s.find(ele));

        }

        cout << sum << '\n';

    }
}
