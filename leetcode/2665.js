/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let innerInit = init;
    return {
        increment: () => {
            innerInit += 1;
            return innerInit;
        },
        decrement: () => {
            innerInit -= 1;
            return innerInit;
        },
        reset: () => {
            innerInit = init;
            return innerInit;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
