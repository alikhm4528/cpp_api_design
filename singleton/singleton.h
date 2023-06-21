
class Singleton {
public:
    static Singleton& GetInstance();
private:
    Singleton();
    ~Singleton();
    Singleton(const Singleton&);
    const Singleton& operator =(const Singleton&);
};