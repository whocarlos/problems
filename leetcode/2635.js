/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let newArr = new Array(arr.length).fill(0);

    for(let i = 0; i < newArr.length; i++){
        newArr[i] = fn(arr[i], i);
    }
    
    console.log(newArr);

    return newArr;
};
