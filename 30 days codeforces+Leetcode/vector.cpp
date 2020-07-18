#include<bits/stdc++.h>
using namespace std;

vector<int> funGame (vector<int> arr) {
   // Write your code here
   vector<int>output;
   int last;
   int first;
   while(arr.size())
   {
      first=arr[0];
      last=arr[arr.size-1];
      if(first>last)
      {
         arr.erase(arr.begin()+arr.size());
         output.push_back(1);
      }
      else if(first<last)
      {
         arr.erase(arr.begin()+1);
         output.push_back(2);
      }
      arr.erase(arr.begin()+1);
      output.push_back(0);
   }
   return output;
}
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i_arr=0; i_arr<n; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    vector<int> out_;
    out_ = funGame(arr);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}
