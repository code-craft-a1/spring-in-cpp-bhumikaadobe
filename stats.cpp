#include "stats.h"
#include <numeric>
#include <algorithm>

Stats Statistics::ComputeStatistics(const std::vector<double>& input) {
    if (input.empty())
    {
        double notNumber = std::numeric_limits<double>::quiet_NaN();
        return Statistics::Stats(notNumber,notNumber,notNumber);
    }
    Statistics::Stats stats;
    double sum = std::accumulate(input.begin(), input.end(), 0.0);
    stats.average = sum / input.size();
    stats.max = *std::max_element(input.begin(), input.end());
    stats.min = *std::min_element(input.begin(), input.end());

}
