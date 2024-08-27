## Sample of make caller.cpp

```
$ make caller
c++     caller.cpp   -o caller
caller.cpp:45:10: warning: 'auto' type specifier is a C++11 extension [-Wc++11-extensions]
    for (auto d : vec1)
         ^
caller.cpp:45:17: warning: range-based for loop is a C++11 extension [-Wc++11-extensions]
    for (auto d : vec1)
                ^
2 warnings generated.

$ ./caller 
Hello

nums1[i-1]=3 nums2[j-1]=6

nums1[i-1]=3 nums2[j-1]=5

nums1[i-1]=3 nums2[j-1]=2

nums1[i-1]=2 nums2[j-1]=2

1
2
2
3
5
6
```

## notes
### c++
- remove duplicated char in string
    ```
    ransomNote.erase(std::unique(ransomNote.begin(), ransomNote.end()), ransomNote.end());
    ```

- cout a vector
    ```
    cout << "nums: ";
    for (auto x : nums) 
        cout << x << " ";
    cout << endl;
    ```

- cout a list
    ```
    int main() {
        list<int>  mylist = {0, 1, 2, 3, 4};
        for (auto v : mylist)
            std::cout << v << "\n";
    }
    ```
    ```
    list<int> t;
    list<int>::iterator x;
    for (x = t.begin(); x != t.end(); ++x) {
        cout << *x << " ";
    }
    ```

- get subvector of vector
    ```
    vector<int> tail{nums.begin() + nums_size-k, nums.end()};
    ```
    ```
    vector<int> sub_vector(main_vector.begin() + start, main_vector.begin() + end);
    ```

- convert string -> bitset -> int
    ```
    bitset<128> stringBitsetA(a);
    cout << "Initialized with string: " << stringBitsetA << endl;
    unsigned long long int inta = stringBitsetA.to_ullong();
    cout << "inta: " << inta << endl;
    ```

- int -> bitset
    ```
    mybits = bitset<32>(63);
    ```

- substring
    ```
    string st = s.substr(0, posa+1);
    ```

- get shorted string in string vector
    ```
    string smin = *std::min_element(strs.begin(), strs.end(), 
        [] (const std::string& s1, const std::string& s2) { 
            return s1.length() < s2.length(); }
        );
    cout << "smin: " << smin << " size: " << smin.size() << endl;
    ```

- replace all occurrences of a substring in string
    ```
    int main() 
    { 
        // Input string 
        string input = "Hi, my name is Lokesh "
                    ". Lokesh means King of the World"; 
    
        // Substring to find 
        string replace_word = "Lokesh"; 
    
        // Replacement string 
        string replace_by = "Ram"; 
    
        // Find the first occurrence of the substring 
        size_t pos = input.find(replace_word); 
    
        // Iterate through the string and replace all 
        // occurrences 
        while (pos != string::npos) { 
            // Replace the substring with the specified string 
            input.replace(pos, replace_word.size(), replace_by); 
    
            // Find the next occurrence of the substring 
            pos = input.find(replace_word, 
                            pos + replace_by.size()); 
        } 
    
        // Print the modified string 
        cout << "New String is: " << input << endl; 
    
        return 0; 
    }
    ```

- sort the int vector
    ```
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
    sort(v.begin(), v.end()); 
    ```

- get type
    ```
    cout << typeid(tmpString[i]).name() << endl;
    ```

- char to int
    ```
    cout << int(ch - '0');
    ```