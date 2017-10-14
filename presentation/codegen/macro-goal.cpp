
DEFINE_ENUM(Color, RED, GREEN, PURPLE);

// →

class Color {
  public:
    enum Value { e_RED, e_GREEN, e_PURPLE };

    enum { k_NUM_VALUES = 3 };

    static const StringRef (&names())[k_NUM_VALUES]  // { ... }

  private:
    Value d_value;

  public:
    Color()  // { .. }
    Color(Value)  // { ... }

    operator Value() const  // { ... }

    StringRef toString() const  // { ... }
    friend ostream& operator<<(ostream&, const Color&)  // { ... }

    int fromString(const StringRef&)  // { ... }
    friend ostream& operator>>(ostream&, Color&)  // { ... }
};

// Then, how do I explain the macro things?

// - explain NUM_ARGS in terms of arity overloads for macros.
//     - maybe include a graphical depiction of how the arguments line up.
// - motivate FOR_EACH as "I need e_... for each, and also "..." for each"
// - let the examples be for only 3-4 arguments.
// - the stringification operator #
// - the token pasting operator ##

static const StringRef (&names())[k_NUM_VALUES]
{
    static const StringRef(*dataPtr)[k_NUM_VALUES] = 0;

    BSLMT_ONCE_DO 
    {
        static const StringRef data[] = {
            "RED", "GREEN", "PURPLE"
        };
        dataPtr = &data;
    }

    return *dataPtr;
}

#define NUM_ARGS(...) // ... ?

#define NUM_ARGS_HELPER(A3, A2, A1, N, ...) N

#define NUM_ARGS(...) NUM_ARGS_HELPER(__VA_ARGS__, 3, 2, 1)

NUM_ARGS(foo, bar)

NUM_ARGS_HELPER(foo, bar, 3, 2, 1)

           NUM_ARGS_HELPER(foo, bar,  3, 2, 1)
// #define NUM_ARGS_HELPER(A3,   A2, A1, N, ...) N

#define MY_MACRO_1(ARG1) "1 arg"

#define MY_MACRO_2(ARG1, ARG2) "2 args"

#define MY_MACRO_3(ARG1, ARG2, ARG3) "2 args"

#define MY_MACRO_HELPER(N, ...) MY_MACRO_##N(__VA_ARGS__)

#define MY_MACRO(...) MY_MACRO_HELPER(NUM_ARGS(__VA_ARGS__), __VA_ARGS__)

cout << MY_MACRO(foo, bar);

// →

cout << "2 args";
