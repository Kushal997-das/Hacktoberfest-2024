#include <bits/stdc++.h>
using namespace std;
struct Item {
    int value, weight;
    Item(int v, int w) : value(v), weight(w) {}
};
bool cmp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}
double fractionalKnapsack(int capacity, vector<Item>& items) {
    sort(items.begin(), items.end(), cmp);
    double totalValue = 0.0;
    cout << "Item selection:\n";
    for (auto& item : items) {
        if (capacity >= item.weight) {
            capacity -= item.weight;
            totalValue += item.value;
            cout << "Selected 100% of item with value " << item.value << " and weight " << item.weight 
                 << ", contributing value " << item.value << endl;
        } else {
            double fraction = (double)capacity / item.weight;
            double selectedValue = item.value * fraction;
            totalValue += selectedValue;
            cout << "Selected " << fraction * 100 << "% of item with value " << item.value << " and weight " << item.weight
                 << ", contributing value " << selectedValue << endl;
            break;
        }
    }
    return totalValue;
}

int main() {
    vector<Item> items = {{60, 10}, {100, 20}, {120, 30}};
    int capacity = 50;
    
    cout << "Maximum value in Knapsack = " << fractionalKnapsack(capacity, items) << endl;
    
    return 0;
}
