/*
---------------------------------------------------------------
    13. Roman to Integer
---------------------------------------------------------------
*/

var romanToInt = function(s) {
    const l = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }

    let ans = 0;
    for (let i = 0; i<s.length; i++) {
        let curr = l[s[i]]
        let next = l[s[i+1]]
        if (i == s.length-1) ans += curr;
        else ans += (curr >= next) ? curr : -curr
    }

    return ans;
};