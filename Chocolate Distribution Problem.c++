    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long ans=0;
    long long mini = INT_MAX;
    sort(a.begin(),a.end());
    long long i =0;
    long long j = m-1;
    while(j<n){
        long long p =  a[j]-a[i];
        mini = min(mini ,p);
        i++;
        j++;
    }
    return mini;
    }   
