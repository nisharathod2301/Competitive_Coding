
bool checkp(string &str, int i, int n) {
    if (i == n)
        return true;
    if ((str[i] != str[n]))
        return false;
    if (i < n + 1)
        return checkp(str, i + 1, n - 1);
    return true;
}
bool isPalindrome(string& str) {
    // Write your code here.
    int n = str.size();
    if(n==0) return true;

    return checkp(str, 0, n-1);
}
