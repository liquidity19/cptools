template<class T> int size(T &&x) {
  return int(x.size());
}
template<class A, class B> ostream& operator<<(ostream &out, const pair<A, B> &p) {
  return out << '(' << p.first << ", " << p.second << ')';
}
template<class T> auto operator<<(ostream &out, T &&x) -> decltype(x.begin(), out) {
  out << '{';
  for(auto it = x.begin(); it != x.end(); ++it)
    out << *it << (it == prev(x.end()) ? "" : ", ");
  return out << '}';
}
void dump() {}
template<class T, class... Args> void dump(T &&x, Args... args) {
  cerr << x << ";  ";
  dump(args...);
}
struct Nl{~Nl(){cerr << '\n';}};
# define print(x...) cerr << (strcmp(#x, "") ? #x ":  " : ""), dump(x), Nl(), cerr << ""