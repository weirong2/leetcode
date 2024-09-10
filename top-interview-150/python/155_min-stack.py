class MinStack:

    def __init__(self):
        self.minstack = []
        self.minstack_min = None
        

    def push(self, val: int) -> None:
        self.minstack.append(val)
        if len(self.minstack) > 1:
            self.minstack_min = min(self.minstack_min, val)
        else:
            self.minstack_min = val
        

    def pop(self) -> None:
        tmp = self.minstack[:-1]
        if self.minstack_min == self.minstack[-1]:
            if len(tmp) > 0:
                self.minstack_min = min(self.minstack[:-1])
            else:
                self.minstack_min = None
        self.minstack = tmp
        

    def top(self) -> int:
        return self.minstack[-1]
        

    def getMin(self) -> int:
        #print("getMin", self.minstack)
        #return min(self.minstack)
        return self.minstack_min
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()