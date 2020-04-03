 class Solution {
public:

// Calculate sum of the number's squared digits
int calc(int n) {
    int total = 0;

    do {
        total += (n % 10) * (n % 10);
        n = n / 10;
    } while (n > 0);

    return total;
}


bool isHappy(int n) {
    int slow = calc(n);
    int fast = slow;
    
// If there is a loop both pointers will be equal at some point
    do {
        slow = calc(slow);
        fast = calc(calc(fast));
        if (slow == 1 || fast == 1) {
            return true;
        }
    } while (slow != fast);
    return false;
}

};
