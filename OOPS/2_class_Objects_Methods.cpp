//create a class
class myClass{    //class name
    public:       //access identifier
    int num;      //attribute
    string name;  //attribute
};

//create a object
myClass myObject;  //create a object of myClass
myObject.num = 5;
myObject.name= "Tanishq";

//create a method in class
class myClass2{
    public:
    void myMethod(){     //method
        cout<<"hello world";
    }
};

//another way
class myClass2{
    public:
    void myMethod()    //method
};
void Myclass2::myMethod(){
  cout<<"hello world";}

// Use public when you want a member to be accessible from any part of the program.
// Use private when you want to restrict access to the member to only the class that declares it.
// Use protected when you want to allow access within the class, its subclasses, and classes in the same package.

class example{  //passing object as argument
    public:
    int a;
    void func(example E){
        a=a+E.a;
    }
}; 

class example{  //returning object as argument
    public:
    int a;
    example func(example Ea, example Eb){ 
        example Ec;
        Ec.a= Ec.a + Ea.a + Eb.a;
        return Ec; 
    }
}; 

