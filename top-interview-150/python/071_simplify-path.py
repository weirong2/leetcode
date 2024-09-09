import re

class Solution:
    def simplifyPath(self, path: str) -> str:
        ret = path
        if ret == "/.": ret = "/"
        if ret == "/..": ret = "/"
        if ret[:3] == "///": ret = '/'+ret[3:]
        #print("1", ret)
        if ret[:4] == "/../": ret = '/'+ret[4:]
        while True:
            tmp = ret
            ret = re.sub('\/\/\/', '/', ret)
            if ret == tmp: break
        while True:
            tmp = ret
            ret = re.sub('\/\/', '/', ret)
            if ret == tmp: break
        while True:
            tmp = ret
            ret = re.sub('\/\.\/', '/', ret)
            if ret == tmp: break
        while True:
            tmp = ret
            ret = re.sub('\/[^\/|\.]*\/\.\.\/', '/', ret)
            if ret == tmp: break
        while True:
            tmp = ret
            ret = re.sub('\/[^\/]*\/\.\.\/', '/', ret)
            if ret == tmp: break
        #print("2",ret)
        while True:
            tmp = ret
            ret = re.sub('\/[^\/|\.]*\/\.\.$', '/', ret)
            if ret == '/' or ret == tmp: break
        #print("4",ret)
        if len(ret)>1 and ret[-1:] == "/": ret = ret[:-1]
        #print("5",ret)
        if len(ret)>2 and ret[-2:] == "/.": ret = ret[:-2]
        #print("6",ret)
        #return ret
        if ret == path: return path
        else: return self.simplifyPath(ret)
# :( to improve