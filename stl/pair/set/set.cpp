void print(set<string> &s){
    for(auto v: s){
        cout<<v;
    }
}

int main(){
    set<string> s;
    s.insert("abc");//log n
    s.insert("cdb");

}
//if unordered set then )(1) // where ordering doesnt matter