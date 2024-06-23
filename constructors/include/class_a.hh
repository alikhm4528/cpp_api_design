#include <string>
#include <vector>


class A {
  public:
    void DoSomething(const int a) const {
      cache = a;
    }

    const std::string* GetMyName() {
      return &my_name;
    }

  private:
  mutable int cache = 0;
  std::vector<int> v;
  std::string my_name = "ali";
};