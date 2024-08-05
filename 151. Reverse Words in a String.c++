class Solution {
public:
    string reverseWords(string s) {
       string temp="";
       string ans="";
    //    stack<string>st;
    //    for(int i =0; i<s.size(); i++){

    //     if(s[i]==' '){
    //         if(temp.size()!=0){
    //             st.push(temp);
    //             temp="";
    //          }
    //     }
    //         else{
    //             temp+=s[i];
    //         }
    //     }
    //     if(temp.size()!=0){

    //         st.push(temp);
    //     }
    
    //     while(!st.empty()){
    //         ans = ans + st.top()+" ";
    //         st.pop();
    //     }
       
    //    return ans.substr(0 , ans.size()-1);
//    string temp="";
   stack<string>st;
   for(int i = 0; i<s.size(); i++){
    if(s[i]==' '){
        if(temp.size()!=0){
            st.push(temp);
            temp="";
        }
    }
    else{
        temp+=s[i];
    }
   }
   if(temp.size()!=0){
    st.push(temp);
   }

  while(!st.empty()){
    ans+=st.top()+" ";
    st.pop();
  }
  return ans.substr(0,ans.size()-1);
 
    }
};
