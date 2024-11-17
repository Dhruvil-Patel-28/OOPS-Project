#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <string>
#include <vector>

struct LeaderboardEntry {
    std::string studentID;
    int marks;
};

class Leaderboard {
public:
    void addEntry(const std::string& studentID, int marks);
    void displayLeaderboard() const;
    void saveToFile(const std::string& filename = "leaderboard.txt") const;
    void loadFromFile(const std::string& filename = "leaderboard.txt");

private:
    std::vector<LeaderboardEntry> entries;
};

#endif