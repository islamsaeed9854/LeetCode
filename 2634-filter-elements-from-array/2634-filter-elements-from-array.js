/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let sh = 0;
    for(let i = 0 ; i < arr.length ; i++){
         if(!fn(arr[i] ,sh+ i)){
            arr.splice(i,1);
            i--;
            sh++;
         }
        
    }
    return arr;
};