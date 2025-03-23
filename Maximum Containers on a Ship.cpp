class Solution {
    public:
        int maxContainers(int n, int w, int maxWeight) {
            long long totalCells = static_cast<long long>(n) * n;
            long long totalWeight = totalCells * w;
            if (totalWeight <= maxWeight) return totalCells;
            return maxWeight / w;
        }
    };