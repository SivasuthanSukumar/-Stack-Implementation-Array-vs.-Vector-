#include <iostream>
#include <vector>

class Stack {
  private:
    std::vector<int> data;

  public:
    bool isEmpty() const {
      return data.empty();
    }

    void push(int x) {
      data.push_back(x);
      std::cout << x << " pushed to stack\n";
    }

    int pop() {
      if (isEmpty()) {
        std::cout << "Error: stack underflow\n";
        return 0;
      } else {
        int x = data.back();
        data.pop_back();
        return x;
      }
    }

    int top() const {
      if (isEmpty()) {
        std::cout << "Error: stack is empty\n";
        return 0;
      } else {
        return data.back();
      }
    }

    void display() const {
      if (isEmpty()) {
        std::cout << "Stack is empty\n";
      } else {
        std::cout << "Elements in stack: ";
        for (int i = data.size() - 1; i >= 0; i--) {
          std::cout << data[i] << " ";
        }
        std::cout << std::endl;
      }
    }
};

int main() {
  Stack stack;
  stack.push(8);
  stack.push(10);
  stack.push(5);
  stack.push(11);
  stack.push(15);
  stack.push(23);
  stack.push(6);
  stack.push(18);
  stack.push(20);
  stack.push(17);
  stack.display();
  std::cout << stack.pop() << " popped from stack\n";
  std::cout << stack.pop() << " popped from stack\n";
  std::cout << stack.pop() << " popped from stack\n";
  std::cout << stack.pop() << " popped from stack\n";
  std::cout << stack.pop() << " popped from stack\n";
  stack.display();
  stack.push(4);
  stack.push(30);
  stack.push(3);
  stack.push(1);
  stack.display();
  return 0;
}
