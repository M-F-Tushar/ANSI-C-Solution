
11.6 Validity of the Given Structure

struct s {
    int n;
    struct s next;
};
❌ Invalid!

This creates an infinite recursion.

Should use a pointer instead:

struct s {
    int n;
    struct s *next;
};
