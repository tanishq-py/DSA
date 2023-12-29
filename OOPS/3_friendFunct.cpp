class A{
    private:
    int a;

    public:
    A(){
        a=0;
    }
    friend class B; //friend class
};

class B{
    private:
    int b;

    public:
    void showA(A&x){
        cout<<x.a;
    }
};

//friendFunction
class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}
    friend int calculateArea(Rectangle rect);
};

int calculateArea(Rectangle rect) {
    return rect.length * rect.width;
}


//constant member function
class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    // Constant member function
    int getValue() const {
        return value;
    }

    // Non-constant member function
    void setValue(int v) {
        value = v;
    }
};



