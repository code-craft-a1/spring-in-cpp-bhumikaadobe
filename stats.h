#include <vector>

namespace Statistics {
    struct Stats 
    {
        double average;
        double max;
        double min;
        Stats(double avg = std::numeric_limits<double>::quiet_NaN(), double minV = std::numeric_limits<double>::quiet_NaN(), double maxV = std::numeric_limits<double>::quiet_NaN())
               : average(avg), min(minV), max(maxV) {}
    };
    Stats ComputeStatistics(const std::vector<double>& input);
}
