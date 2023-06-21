class MyObject;

class MyObjectHolder {
public:
    MyObjectHolder(MyObject*);

    MyObject* GetMyObject();
    void DoJob();
private:
    MyObject* my_object_;
};
