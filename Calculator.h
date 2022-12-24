//some changes

///Sign
///
/// @param SUM - +.
/// @param MULT - *.
/// @param SUB - -.
/// @param DIV - /.
enum Sign {
    SUM,
    MULT,
    SUB,
    DIV
};

/// parseSign - determine sign
///
/// \param sign - operation in char
/// \return Sign (+ or - or * or /)
Sign parseSign(char sign) {
    if (sign == '+') {
        return SUM;
    } else if (sign == '-') {
        return SUB;
    } else if (sign == '*') {
        return MULT;
    } else if (sign == '/') {
        return DIV;
    } else {
        std::cout << "Incorrect format";
        return SUM;
    }
}

/// sum
///
/// \param a
/// \param b
/// \return a + b
int sum(int a, int b) {
    return a + b;
}

/// sub
///
/// \param a
/// \param b
/// \return a - b
int sub(int a, int b) {
    return a - b;
}

/// mult
///
/// \param a
/// \param b
/// \return a * b
int mult(int a, int b) {
    return a * b;
}

/// divis
///
/// \param a
/// \param b
/// \return a / b
int divis(int a, int b) {
    return a / b;
}


