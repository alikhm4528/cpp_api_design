class Monostate {
public:
    int GetValue() const;
    void SetValue(int);
private:
    class Imlp;
    Imlp* impl;
};