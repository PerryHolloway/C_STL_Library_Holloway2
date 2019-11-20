#ifndef Stack-h
#define Stack-h
#include <cassert>
#include <stack>

void StackUp();

void StackUp()
{
  stack<int> cp;
  cp.push(200);
  assert(cp.size()==1);
  assert(cp.top()==200);
  cp.top()=295;
  assert(cp.top()==295);
  cp.pop();
  assert(cp.empty()==true);

}
#endif