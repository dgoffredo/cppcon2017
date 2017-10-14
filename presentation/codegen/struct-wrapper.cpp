
struct Color {
    enum Value { e_RED, e_GREEN, e_BLUE, e_PURPLE };
};

Color favorite = Color::e_PURPLE;

Color::Value best = Color::e_PURPLE;

cout << "I like " << best;
