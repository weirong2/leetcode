class Solution:
    def hash(self, input_str) -> str:
        if False:
            hash_map = {
                'a':2,'b':3,'c':5,'d':7,'e':11,'f':13,'g':17,'h':19,'i':23,'j':29,'k':31,'l':37,'m':41,
                'n':43,'o':47,'p':53,'q':59,'r':61,'s':67,'t':71,'u':73,'v':79,'w':83,'x':89,'y':97,'z':101
            }
            ret = 1
            for c in input_str:
                ret *= hash_map[c]
            return ret
        else:
            return ''.join(sorted(input_str))

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ret, tmp = [], []
        for i in range(len(strs)):
            hash_str = self.hash(strs[i])
            if hash_str not in tmp:
                tmp.append(hash_str)
            index = tmp.index(hash_str)
            if index == len(ret):
                ret.append([strs[i]])
            else:
                ret[index].append(strs[i])
        return ret

