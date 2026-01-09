/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
  return this.reduce((each, initial) => {
    const key = fn(initial);
    if (!each[key]) {
      each[key] = [];
    }
    each[key].push(initial);
    return each; 
  },{}) ;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */