#include <vector>

namespace Statistics {
    struct Stats 
    {
        double average;
        double max;
        double min;
        Stats(double avg = 0.0, double minV = 0.0, double maxV = 0.0)
		   : average(avg), min(minV), max(maxV) {}
    };
    Stats ComputeStatistics(const std::vector<double>& input);
}
