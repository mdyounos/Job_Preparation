# JavaScript `this` and `self` Example

# Info

TGTDCL

SAE

EXAM TAKER: BUET

DATE: 17-09-2021
## Description
This JavaScript program demonstrates the use of `this` and the common pattern `var self = this;` inside nested functions to maintain the context.

The `myObject` contains:
- a property `foo` with value `"bar"`.
- a method `func` that logs values of `this.foo` and `self.foo` in both outer and inner functions.

## Code
```javascript
var myObject = {
  foo: "bar",
  func: function () {
    var self = this;
    console.log("outer func: this.foo= " + this.foo);
    console.log("outer func: self.foo= " + self.foo);
    (function () {
      console.log("inner func: this.foo= " + this.foo);
      console.log("inner func: self.foo= " + self.foo);
    })();
  }
};

myObject.func();

```
# Output

outer func: this.foo= bar
outer func: self.foo= bar
inner func: this.foo= undefined
inner func: self.foo= bar



