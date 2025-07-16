/*
---------------------------------------------------------------
    14. Longest Common Prefix
---------------------------------------------------------------
*/

var longestCommonPrefix = function(strs) {
    let ans = strs[0];
    for (let i = 1; i<strs.length; i++) {
        while (ans != strs[i].substring(0, ans.length)) {
            ans = ans.substring(0, ans.length - 1)
            if (ans.length == 0) return ''
        }
    }
    return ans
};