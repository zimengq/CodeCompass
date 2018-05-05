Array.prototype.contains = function(item){
  return RegExp("\\b"+item+"\\b").test(this);
};

function searchEngine_inputvalidator() {
  return true;
}