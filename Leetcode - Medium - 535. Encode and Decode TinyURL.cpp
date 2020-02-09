class Solution {
public:
    unordered_map<string, int> encodeTable;
    unordered_map<int, string> decodeTable;
    int id = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        id++;
        encodeTable.insert({longUrl, id});
        decodeTable.insert({id, longUrl});
        return ("http://tinyurl.com/" + to_string(id));
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int id = stoi(shortUrl.substr(19));
        string res = decodeTable.find(id)->second; 
        return res;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));