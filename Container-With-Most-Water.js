/**
 * @param {number[]} height
 * @return {number}
 */
const maxArea = (v) => {
    let l = 0, r = v.length - 1;
    let ans = 0;
    let width = v.length - 1;
    while (l < r) {
        const height = Math.min(v[l], v[r]);
        ans = Math.max(ans, height * width);
        
        v[l] <= v[r] ? l++ : r--;
        width--;
    }
    return ans;
};