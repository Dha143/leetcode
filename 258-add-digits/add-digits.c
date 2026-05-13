int addDigits(int num) {
    int r;
    if (num == 0)
        return 0;
    else if (num % 9 == 0)
        return 9;
    else {
        r = num % 9;
        return r;
    }
    return 0;
}