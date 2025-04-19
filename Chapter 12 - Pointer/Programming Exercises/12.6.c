✅ 12.6 day_name function

char* day_name(int n) {
    static char* days[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };
    if (n >= 0 && n < 7)
        return days[n];
    else
        return "Invalid";
}
