#include <iostream>
using namespace std;

struct Item {
    int x, weight, profit;
    double ratio;
};

// Swap function
void swap(Item &a, Item &b) {
    Item temp = a;
    a = b;
    b = temp;
}

// Sort by profit/weight ratio (descending)
void sortByRatio(Item items[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].ratio < items[j + 1].ratio) {
                swap(items[j], items[j + 1]);
            }
        }
        
    }
    
}

int main() {
    float weight[] = {20, 10, 30};
    float profit[] = {60,100,120};
    float W = 50;
    float R=W;
    int n = sizeof(weight) / sizeof(weight[0]);

    Item items[n];

    // Fill items
    cout<<"\nData Given \n";
    cout<<"Item\tWeight\tProfit\tRatio\n";
    for (int i = 0; i < n; i++) {
        items[i].x=i+1;
        items[i].weight = weight[i];
        items[i].profit = profit[i];
        items[i].ratio = (double)profit[i] / weight[i];
        cout<<items[i].x<<"\t"<<items[i].weight<<"\t"<<items[i].profit<<"\t"<<items[i].ratio<<"\n";
    }

    // Sort by profit/weight ratio
    sortByRatio(items, n);
    
    cout<<"\nAfter sorting Data by Ratio: \n";
    cout<<"Item\tWeight\tProfit\tRatio\n";
    for (int i = 0; i < n; i++) {
               cout<<items[i].x<<"\t"<<items[i].weight<<"\t"<<items[i].profit<<"\t"<<items[i].ratio<<"\n";
    }


    float totalWeight = 0, totalProfit = 0;

    cout << "\nItems selected (greedy):\n";
    for (int i = 0; i < n; i++) 
    {
        
        if (totalWeight + items[i].weight <= W && items[i].weight<=R) 
        {
            totalWeight += items[i].weight;
            totalProfit += items[i].profit;
            
            R=R-items[i].weight; //CALCULATE REMAING SPACE IN KNAPSACK
       
        }
        else
        {   
           totalProfit=totalProfit+float(R*items[i].profit/items[i].weight);
        }
        
      
    cout << "R = "<<R<<" Weight: " << items[i].weight << ", Profit: " << items[i].profit << "\n";    
    }
    
    cout << "\nTotal Profit (Greedy): " << totalProfit << endl;
    
    return 0;
}