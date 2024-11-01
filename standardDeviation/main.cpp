#include <iomanip>
#include <iostream>
#include <cmath>

double standard_deviation(int arr[], int size)
{
    int sum = 0;
    double meanValue = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    meanValue = static_cast<double>(sum) / size;
    double standardDeviation = 0;
    for (int i = 0; i < size; i++) {
        standardDeviation += (arr[i] - meanValue) * (arr[i] - meanValue);
    }
    return sqrt(standardDeviation / size);
}
int main() {
    int arr[] = {3,3,4,5,6,7,8,9,10,11,12,13,14,15};
    const int size = std::size(arr);

    const double result = standard_deviation(arr, size);
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Standard deviation: " << result << std::endl;

    return 0;
}