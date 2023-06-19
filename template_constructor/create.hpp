struct Widget {};

template <typename T>
struct Type2Type {
    using Type = T;
};

template <typename T, typename U>
T* Create(const U& arg, Type2Type<T>);

// We can't write something like this:
// template <typename U>
// Widget* Create<Widget, U>(const U& arg);

// But we can write this:

template <typename U>
Widget* Create(const U& arg, Type2Type<Widget>);