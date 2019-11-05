int main() {
    string sentence;
    get_sentence(sentence);
    cout << sentence << endl;
    return 0;
}

1. Can we change the value of the string inside the function if we match up the parameter and
argument names? For example, change the function prototype to: 
    void get_sentence(string sentence);
A: No! Unless we add the amersand &, the contents of the function are immutable

2. What is indeed passed into the function if an ampersand (&) is added in front of the
parameter?
A: The contents of the function call are passed through the function

3. Can we change the value of the string inside the function if we change the function
prototype to:
    void get_sentence(string *sentence);
A: Yes, affixing the parameter with star * will also allow you to pass it through the function

4. What is the difference between an ampersand (&) and an asterisk (*) added in front of the
parameter? Use a diagram to explain. 
A: * allows you to pass NULL values while & doesnt



