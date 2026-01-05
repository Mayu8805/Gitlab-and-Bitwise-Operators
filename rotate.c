//rotate.c
unsigned int rotate(unsigned int source, unsigned int shift) {
    //its remainder is all that matters for the
    //shifting
    shift %= 32;
    if (shift == 0) {
        return source;
    }

    return source >> shift | source << (32 - shift);
}
