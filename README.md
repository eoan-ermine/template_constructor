# Homework assignment: template constructor

## Assignment

We want to write a template constructor function, something like

```c++
template <typename T, typename U>
T* Create(const U& arg);
```

At the same time, we want to specialize it by the first argument, like this

```c++
template <typename U>
Widget* Create<Widget, U>(const U& arg); // Doesn't compile, not C++
```

How to implement what we want?

## Solution

Full solution is available at [template_constructor/create.hpp](template_constructor/create.hpp)