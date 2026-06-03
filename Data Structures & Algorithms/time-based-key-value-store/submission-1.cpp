#include <print>
class TimeMap {
   public:
    std::unordered_map<string, std::vector<pair<int, string>>> store{};
    TimeMap() {}
    void set(string key, string value, int timestamp) { store[key].push_back({timestamp, value}); }

    string get(const string& key, int timestamp) {
        if (!store.contains(key)) return {};
        auto& history = store[key];
        auto it = std::upper_bound(begin(history), end(history), timestamp,
                                   [](int v, pair<int, string>& p) { return v < p.first; });

        return it == begin(history) ? "" : prev(it)->second;
    }
};
