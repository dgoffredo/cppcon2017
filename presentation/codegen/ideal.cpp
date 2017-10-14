
// ... insert magic here ...

Color favorite;
cin >> favorite;

if (!cin) {
    cerr << "That's not a color.\n";
    return 1;
}

if (favorite == Color::e_PURPLE) {
    cout << "Good choice.\n";
}
else {
    cout << favorite " is in poor taste.\n";
}
