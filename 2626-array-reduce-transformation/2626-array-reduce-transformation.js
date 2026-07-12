/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let temp = init;
    for (let i = 0 ; i < nums.length ; i++) {
        temp = fn(temp , nums[i]);
        nums [ i  ] = temp;
    }
    return temp;
};