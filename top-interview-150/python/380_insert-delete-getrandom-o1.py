class RandomizedSet:

    def __init__(self):
        self.nums = []
        self.pos = {}


    def insert(self, val: int) -> bool:
        if val in self.nums:
            return False
        self.pos[val] = len(self.nums)
        self.nums.append(val)
        return True


    def remove(self, val: int) -> bool:
        if val not in self.nums:
            return False
        pos = self.pos[val]
        last_num = self.nums[-1]
        self.nums[pos] = last_num
        self.pos[last_num] = pos
        self.nums.pop()
        del self.pos[val]
        return True


    def getRandom(self) -> int:
        return random.choice(self.nums)



# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()