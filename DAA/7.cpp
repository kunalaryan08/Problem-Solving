// Write a program to implement fractional knapsack problem using Greedy strategy.
#include <bits/stdc++.h>

using namespace std;

struct Item {
    double value, weight;
    
    Item(double v, double w) : value(v), weight(w) {}
};

bool compare(Item a, Item b) {
    return (a.value / a.weight) > (b.value / b.weight);
}

double fractionalKnapsack(vector<Item>& items, double capacity) {
    sort(items.begin(), items.end(), compare);
    
    double totalValue = 0.0;
    
    for (const auto& item : items) {
        if (capacity >= item.weight) {
            capacity -= item.weight;
            totalValue += item.value;
        } else {
            totalValue += item.value * (capacity / item.weight);
            break;
        }
    }
    
    return totalValue;
}

int main() {
    vector<Item> items = {
        {60, 10},
        {100, 20},
        {120, 30}
    };
    
    double capacity = 50;
    
    double maxValue = fractionalKnapsack(items, capacity);
    cout << "Maximum value in the knapsack: " << maxValue << endl;
    
    return 0;
}
