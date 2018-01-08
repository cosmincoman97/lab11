#include <iostream>
#include <vector>

using namespace std;

template<class T>
class Stack
{
private:
    vector <T> vect;
public:
    bool Empty();
    void push(T element);
    T top();
    void read();
    void Empty_stack();
    void pop();
};

template <class T>
void Stack<T>::pop()
{

    if(vect.empty()==0)
    {
        vect.pop_back();
    }
}


template <class T>
void Stack<T>::read()
{
    int i;
    cout<<"Elementele stivei sunt: \n";
    for(i=vect.size()-1;i>=0;i--)
    cout<<vect[i]<<endl;
}


template <class T>
bool Stack<T>::Empty()
{
    if(vect.empty()==1)
    {
        return true;
    }
    else return false;
}

template <class T>
void Stack<T>::push(T element)
{
    vect.push_back(element);
}

template <class T>
T Stack<T>::top()
{
    return vect.back();
}


int main()
{
    //Declaram Stack-uri de fiecare tip:
    Stack <int> stk_int;
    Stack <float> stk_float;

    //Populam Stack-urile:
    stk_int.push(123);
    stk_int.push(3352);
    stk_int.push(12);
    stk_int.push(23);
    stk_float.push(41.134);
    stk_float.push(287.1876);
    stk_float.push(12.12354);
    stk_float.push(342.35244);

    //Citim stivele:
    stk_int.read();
    stk_float.read();

    //Verificam operatii:
    if(stk_int.Empty()) cout<<"Stiva de elemente intregi este goala"<<endl;
    else cout<<"Stiva de elemente intregi nu este goala"<<endl;
    if(stk_float.Empty()) cout<<"Stiva de elemente reale este goala"<<endl;
    else cout<<"Stiva de elemente reale nu este goala"<<endl;

    //Golim stiva de numere intregi pentru verificare:
    stk_int.pop();
    stk_int.pop();
    stk_int.pop();
    stk_int.pop();
    if(stk_int.Empty()) cout<<"Stiva de elemente intregi este goala"<<endl;
    else cout<<"Stiva de elemente intregi nu este goala"<<endl;

    //Verificam functia top:
    cout<<endl<<stk_float.top();
}
