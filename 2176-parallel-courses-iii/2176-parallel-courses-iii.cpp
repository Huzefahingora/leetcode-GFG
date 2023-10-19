#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& prerequisites, vector<int>& courseTimes) {
        vector<vector<int>> prerequisitesGraph(n + 1);

        // Initialize an array of vectors to represent the course prerequisites graph.
        for (int i = 0; i <= n; i++) {
            prerequisitesGraph[i] = vector<int>();
        }

        // Populate the graph with course prerequisites.
        for (auto relation : prerequisites) {
            prerequisitesGraph[relation[0]].push_back(relation[1]);
        }

        vector<int> memo(n + 1, -1); // Memoization array to store computed results.
        int maxTime = 0;

        // Iterate through each course and find the maximum time needed.
        for (int course = 1; course <= n; course++) {
            maxTime = std::max(maxTime, dfs(course, memo, prerequisitesGraph, courseTimes));
        }
        return maxTime;
    }

    // Depth-first search (DFS) with memoization to calculate maximum time needed.
    int dfs(int currentCourse, vector<int>& memo, vector<vector<int>>& prerequisitesGraph, vector<int>& courseTimes) {
        if (memo[currentCourse] != -1) {
            return memo[currentCourse]; // If the result is already computed, return it from the memo array.
        }
        int maxTime = 0;

        // Recursively explore prerequisites and find the maximum time.
        for (int prerequisite : prerequisitesGraph[currentCourse]) {
            maxTime = std::max(maxTime, dfs(prerequisite, memo, prerequisitesGraph, courseTimes));
        }

        // Store the result in the memo array and add the time needed for the current course.
        memo[currentCourse] = maxTime + courseTimes[currentCourse - 1];
        return memo[currentCourse];
    }
};