/*Check if the given string is a correct time representation of the 24-hour clock.

Example

    For time = "13:58", the output should be
    validTime(time) = true;
    For time = "25:51", the output should be
    validTime(time) = false;
    For time = "02:76", the output should be
    validTime(time) = false.

Input/Output

    [execution time limit] 0.5 seconds (cpp)

    [input] string time

    A string representing time in HH:MM format. It is guaranteed that the first two characters, as well as the last two characters, are digits.

    [output] boolean

    true if the given representation is correct, false otherwise.
*/

bool validTime(std::string time) {
    int h, m;
    sscanf(time.c_str(), "%d:%d", &h, &m);
    if (h > 23 || h < 0 ) {return false;}
    if (m < 0  || m > 59) {return false;}
    return true;    
}
