
struct Color {
    enum Value { e_RED, e_GREEN, e_BLUE, e_PURPLE };
};

Color favorite = Color::e_PURPLE;

Color::Value best = Color::e_PURPLE;

cout << "I like " << best;

struct MyEnum {};

MyEnum hello;

int bdlat_enumFromInt(MyEnum *result,
                      int     number);

int bdlat_enumFromString(MyEnum     *result, 
                         const char *string,
                         int         stringLength);

void bdlat_enumToInt(int           *result,
                     const MyEnum&  value);

void bdlat_enumToString(bsl::string   *result,
                        const MyEnum&  value);

namespace BloombergLP {
namespace bdlat_EnumFunctions {

template <typename TYPE>
struct IsEnumeration;

}
}

namespace BloombergLP {
namespace bdlat_EnumFunctions {

template <>
struct IsEnumeration<Enum>
{
    enum { VALUE = 1 };
};

}}

template <typename ENUM>
struct EnumBase {};

template <typename ENUM>
int bdlat_enumFromInt(EnumBase<ENUM> *result,
    int             number)
{
    if (number < 0 || number >= ENUM::k_NUM_VALUES)
        return -1;

    ENUM& derived = static_cast<ENUM&>(*result);
    derived = ENUM::Value(number);
    return 0;
}

template <typename IMPL>
struct Enum : IMPL {
    Enum(typename IMPL::Value value)  // { ... }
    ...
};

#define HELLO(foo, bar) (foo)

#define DEFINE_MACRO(NAME, ...) \
class NAME ## _Impl {           \
    ...                         \
};                              \
                                \
typedef Enum<NAME ## _Impl> NAME

namespace BloombergLP {
namespace bdlat_EnumFunctions {

template <typename IMPL>
struct IsEnumeration<BasicEnum<IMPL> >
{
    enum { VALUE = 1 };
};

}}
