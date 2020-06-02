class B
{
public:
  virtual void bar();
  virtual void aux();
};

void B::bar()
{
cout << "This is B's implementation of bar" << std::endl;
}

void B::aux()
{
  std::cout << "This is B's implementation of qux" << std::endl;
}
The thing about virtual functions is that they can be overriden by subclasses:

class C : public B
{
public:
  void bar()     // override;
};

void C::bar()
{
  cout << "This is C's implementation of bar" << std::endl;
}