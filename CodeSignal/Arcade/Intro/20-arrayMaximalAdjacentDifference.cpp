/*Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

Example

For inputArray = [2, 4, 1, 0], the output should be
arrayMaximalAdjacentDifference(inputArray) = 3.

Input/Output

    [execution time limit] 0.5 seconds (cpp)

    [input] array.integer inputArray

    Guaranteed constraints:
    3 ≤ inputArray.length ≤ 10,
    -15 ≤ inputArray[i] ≤ 15.

    [output] integer

    The maximal absolute difference.
*/

int arrayMaximalAdjacentDifference(std::vector<int> v) {
    std::adjacent_difference(v.begin(),
                             v.end(),
                             v.begin(),
                             [](int a, int b){return std::abs(a-b);});
    return *std::max_element(v.begin()+1, v.end());
}
