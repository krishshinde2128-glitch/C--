class Person {
public:
    string name;
};


class Member : public Person {
public:
    string memberID;
};


class Book {
public:
    string id;
    string title;
    string author;
    int isIssued; 
};