#include "..\LeetCode\LeetCode.h"
#include "..\LeetCode\LeetCodeDP.h"
#include "TestDP.h"
void TestLeetCode494(void)
{
    Logger::WriteMessage("Test Leet Code 494");
    LeetCodeDP leetCode;
    vector<int> nums = { 1, 1, 1, 1, 1 };
    int S = 3;
    Logger::WriteMessage(nums);
    Logger::WriteMessage("S = " + to_string(S));
    int count = leetCode.findTargetSumWays(nums, S);
    Logger::WriteMessage("count = " + to_string(count));
}

void TestLeetCode518(void)
{
    Logger::WriteMessage("Test Leet Code 518");
    LeetCodeDP leetCode;
    int amount = 5;
    vector<int> coins = { 1, 2, 5 };
    int result = leetCode.change(amount, coins);
    Logger::WriteMessage(coins);
    Logger::WriteMessage("amount = " + to_string(amount) + "; result = " + to_string(result));

    amount = 3;
    coins = { 2 };
    result = leetCode.change(amount, coins);
    Logger::WriteMessage(coins);
    Logger::WriteMessage("amount = " + to_string(amount) + "; result = " + to_string(result));

    amount = 10;
    coins = { 10 };
    result = leetCode.change(amount, coins);
    Logger::WriteMessage(coins);
    Logger::WriteMessage("amount = " + to_string(amount) + "; result = " + to_string(result));
}

void TestLeetCode879(void)
{
    Logger::WriteMessage("Test Leet Code 879");
    LeetCodeDP leetCode;
    vector<int> group = { 2, 2 };
    vector<int> profit = { 2, 3 };
    int G = 5;
    int P = 3;
    int result = leetCode.profitableSchemes(G, P, group, profit);
    Logger::WriteMessage(group);
    Logger::WriteMessage(profit);
    Logger::WriteMessage("G = " + to_string(G) + "; P = " + to_string(P) + "; result = " + to_string(result));

    group = { 2, 3, 5 };
    profit = { 6, 7, 8 };
    G = 10;
    P = 5;
    result = leetCode.profitableSchemes(G, P, group, profit);
    Logger::WriteMessage(group);
    Logger::WriteMessage(profit);
    Logger::WriteMessage("G = " + to_string(G) + "; P = " + to_string(P) + "; result = " + to_string(result));
}

void TestLeetCode1143(void)
{
    Logger::WriteMessage("Test Leet Code 1143");
    LeetCodeDP leetCode;
    string text1 = "abcde";
    string text2 = "ace";
    int result = leetCode.longestCommonSubsequence(text1, text2);
    Logger::WriteMessage("text1 =" + text1 + "; text2 = " + text2 + "; result = " + to_string(result));

    text1 = "abc";
    text2 = "abc";
    result = leetCode.longestCommonSubsequence(text1, text2);
    Logger::WriteMessage("text1 =" + text1 + "; text2 = " + text2 + "; result = " + to_string(result));

    text1 = "abc";
    text2 = "def";
    result = leetCode.longestCommonSubsequence(text1, text2);
    Logger::WriteMessage("text1 =" + text1 + "; text2 = " + text2 + "; result = " + to_string(result));
}

void TestLeetCode1147(void)
{
    Logger::WriteMessage("Test Leet Code 1147");
    LeetCodeDP leetCode;
    string text = "ghiabcdefhelloadamhelloabcdefghi";
    int result = leetCode.longestDecomposition(text);
    Logger::WriteMessage("text =" + text + "; result = " + to_string(result));

    text = "merchant";
    result = leetCode.longestDecomposition(text);
    Logger::WriteMessage("text =" + text + "; result = " + to_string(result));

    text = "antaprezatepzapreanta";
    result = leetCode.longestDecomposition(text);
    Logger::WriteMessage("text =" + text + "; result = " + to_string(result));

    text = "aaa";
    result = leetCode.longestDecomposition(text);
    Logger::WriteMessage("text =" + text + "; result = " + to_string(result));

    text = "nufbkflwjjlwjjnufbkf";
    result = leetCode.longestDecomposition(text);
    Logger::WriteMessage("text =" + text + "; result = " + to_string(result));
}

void TestLeetCode1155(void)
{
    Logger::WriteMessage("Test Leet Code 1155");
    LeetCodeDP leetCode;
    int d = 1;
    int f = 6;
    int target = 3;
    int result = leetCode.numRollsToTarget(d, f, target);
    Logger::WriteMessage("d = " + to_string(d) + "; f = " + to_string(f) +
        "; target = " + to_string(target) + "; result = " + to_string(result));

    d = 2;
    f = 6;
    target = 7;
    result = leetCode.numRollsToTarget(d, f, target);
    Logger::WriteMessage("d = " + to_string(d) + "; f = " + to_string(f) +
        "; target = " + to_string(target) + "; result = " + to_string(result));

    d = 2;
    f = 5;
    target = 10;
    result = leetCode.numRollsToTarget(d, f, target);
    Logger::WriteMessage("d = " + to_string(d) + "; f = " + to_string(f) +
        "; target = " + to_string(target) + "; result = " + to_string(result));

    d = 1;
    f = 2;
    target = 3;
    result = leetCode.numRollsToTarget(d, f, target);
    Logger::WriteMessage("d = " + to_string(d) + "; f = " + to_string(f) +
        "; target = " + to_string(target) + "; result = " + to_string(result));

    d = 30;
    f = 30;
    target = 500;
    result = leetCode.numRollsToTarget(d, f, target);
    Logger::WriteMessage("d = " + to_string(d) + "; f = " + to_string(f) +
        "; target = " + to_string(target) + "; result = " + to_string(result));
}

void TestLeetCode9905(void)
{
    Logger::WriteMessage("Test Leet Code 9905");
    LeetCodeDP leetCode;
    vector<vector<int>> activities = { {0, 3, 1}, {0, 5, 5}, {5, 6, 1}, {6, 18, 2} };
    int result = leetCode.maxInterest(activities);
    Logger::WriteMessage(activities);
    Logger::WriteMessage("result = " + to_string(result));

    activities = 
    { 
        {8, 9, 5}, { 8, 12, 7 }, { 9, 12, 4 }, { 12, 14, 2 },  {13, 16, 3}, {14, 15, 4} 
    };
    result = leetCode.maxInterest(activities);
    Logger::WriteMessage(activities);
    Logger::WriteMessage("result = " + to_string(result));

    activities =
    {
        {8, 10, 3}, {9, 12, 2}, {12, 14, 1}
    };
    result = leetCode.maxInterest(activities);
    Logger::WriteMessage(activities);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode562(void)
{
    LeetCodeDP leetCode;
    vector<vector<int>> M = { { 0,1,1,0 }, { 0,1,1,0 }, { 0,0,0,1 } };
    int max_length = leetCode.longestLine(M);
    Logger::WriteMessage(M);
    Logger::WriteMessage("max_length = " + to_string(max_length));
}

void TestLeetCode213(void)
{
    Logger::WriteMessage("Test Leet Code 213");
    LeetCodeDP leetCode;
    vector<int> nums = { 1, 2, 3, 4, 5, 6 };
    int result = leetCode.robII(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("result = " + to_string(result));

    nums = { 2,3,2 };
    result = leetCode.robII(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("result = " + to_string(result));

    nums = { 1,2,3,1 };
    result = leetCode.robII(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("result = " + to_string(result));

    nums = { 1 };
    result = leetCode.robII(nums);
    Logger::WriteMessage(nums);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode118(void)
{
    Logger::WriteMessage("Test Leet Code 118");
    int n = 5;
    Logger::WriteMessage("Level  = " + to_string(n));
    LeetCodeDP leetCode;
    vector<vector<int>> result = leetCode.generatePascalTriangle(n);
    for (size_t i = 0; i < result.size(); i++)
    {
        Logger::WriteMessage(result[i]);
    }
}

void TestLeetCode119(void)
{
    Logger::WriteMessage("Test Leet Code 119");
    int n = 5;
    Logger::WriteMessage("Level  = " + to_string(n));
    LeetCodeDP leetCode;
    vector<int> result = leetCode.getPascalTriangleRow(n);
    Logger::WriteMessage(result);
}

void TestLeetCode322(void)
{
    Logger::WriteMessage("Test Leet Code 322");
    LeetCodeDP leetCode;
    vector<int> coins;
    int amount, num;
    coins = { 1, 2, 5 };
    amount = 11;
    Logger::WriteMessage("The conins are:");
    Logger::WriteMessage(coins);
    num = leetCode.coinChange(coins, amount);
    Logger::WriteMessage("The amount is " + to_string(amount) + ", we need " + to_string(num) + " coins.");
    coins = { 2, 5 };
    amount = 3;
    Logger::WriteMessage("The conins are:");
    Logger::WriteMessage(coins);
    num = leetCode.coinChange(coins, amount);
    Logger::WriteMessage("The amount is " + to_string(amount) + ", we need " + to_string(num) + " coins.");
}

void TestLeetCode91(void)
{
    Logger::WriteMessage("Test Leet Code 91");
    LeetCodeDP leetCode;
    string s = "12321";
    int result = leetCode.numDecodings(s);
    Logger::WriteMessage("s = " + s + "result = " + to_string(result));

    s = "12";
    result = leetCode.numDecodings(s);
    Logger::WriteMessage("s = " + s + "result = " + to_string(result));

    s = "226";
    result = leetCode.numDecodings(s);
    Logger::WriteMessage("s = " + s + "result = " + to_string(result));
}

void TestLeetCode576(void)
{
    LeetCodeDP leetCode;
    int m = 2, n = 2, N = 2, i = 0, j = 0;
    int paths = leetCode.findPaths(m, n, N, i, j);
    Logger::WriteMessage("m = " + to_string(m) + "; n = " + to_string(n) + "; N = " + to_string(N) +
        "; i = " + to_string(i) + "; j = " + to_string(j) + "; result = " + to_string(paths));

    m = 1; n = 3; N = 3; i = 0; j = 1;
    paths = leetCode.findPaths(m, n, N, i, j);
    Logger::WriteMessage("m = " + to_string(m) + "; n = " + to_string(n) + "; N = " + to_string(N) +
        "; i = " + to_string(i) + "; j = " + to_string(j) + "; result = " + to_string(paths));

    m = 8; n = 50; N = 23; i = 5; j = 26;
    paths = leetCode.findPaths(m, n, N, i, j);
    Logger::WriteMessage("m = " + to_string(m) + "; n = " + to_string(n) + "; N = " + to_string(N) +
        "; i = " + to_string(i) + "; j = " + to_string(j) + "; result = " + to_string(paths));
}

void TestLeetCode45(void)
{
    Logger::WriteMessage("Test Leet Code 45");
    vector<int> nums = { 1, 1, 1, 0 };
    LeetCodeDP leetCode;
    Logger::WriteMessage(nums);
    int result = leetCode.jump(nums);
    Logger::WriteMessage("Jump to the end take " + to_string(result) + " steps");

    nums = { 2, 3, 1, 1, 4 };
    Logger::WriteMessage(nums);
    result = leetCode.jump(nums);
    Logger::WriteMessage("Jump to the end take " + to_string(result) + " steps");

    nums = { 3, 2, 1, 0, 4 };
    Logger::WriteMessage(nums);
    result = leetCode.jump(nums);
    Logger::WriteMessage("Jump to the end take " + to_string(result) + " steps");

    nums = { 0 };
    Logger::WriteMessage(nums);
    result = leetCode.jump(nums);
    Logger::WriteMessage("Jump to the end take " + to_string(result) + " steps");
}

void TestLeetCode403(void)
{
    Logger::WriteMessage("Test Leet Code 403");
    LeetCodeDP leetCode;

    vector<int> stones = { 0,1,3,5,6,8,12,17 };
    bool result = leetCode.canCross(stones);
    Logger::WriteMessage(stones);
    Logger::WriteMessage("result = " + (string) (result ? "true" : "false"));

    stones = { 0,1,2,3,4,8,9,11 };
    result = leetCode.canCross(stones);
    Logger::WriteMessage(stones);
    Logger::WriteMessage("result = " + (string)(result ? "true" : "false"));
}

void TestLeetCode264(void)
{
    Logger::WriteMessage("Test Leet Code 264");
    LeetCodeDP leetCode;
    int n = 10;
    int result = leetCode.nthUglyNumber(n);
    Logger::WriteMessage("n = " + to_string(n) + "; result = " + to_string(result));
}

void TestLeetCode313(void)
{
    Logger::WriteMessage("Test Leet Code 313");
    LeetCodeDP leetCode;
    vector<int> primes = { 2, 3, 5 };
    int n = 4;
    Logger::WriteMessage(primes);
    int result = leetCode.nthSuperUglyNumber(n, primes);
    Logger::WriteMessage("The " + to_string(n) + "th ugly number = " + to_string(result));

    primes = { 2, 7, 13, 19 };
    n = 12;
    Logger::WriteMessage(primes);
    result = leetCode.nthSuperUglyNumber(n, primes);
    Logger::WriteMessage("The " + to_string(n) + "th ugly number = " + to_string(result));
}

void TestLeetCode514(void)
{
    Logger::WriteMessage("Test Leet Code 514");
    LeetCodeDP leetCode;
    string ring = "godding";
    string key = "dd";
    int result = leetCode.findRotateSteps(ring, key);
    Logger::WriteMessage("ring = " + ring + "; key = " + key + "; result = " + to_string(result));
}

void TestLeetCode656(void)
{
    LeetCodeDP leetCode;
    vector<int> A = { 1,2,4,-1,2 };
    int B = 2;
    vector<int> result = leetCode.cheapestJump(A, B);

    Logger::WriteMessage(A);
    Logger::WriteMessage("B = " + to_string(B));
    Logger::WriteMessage(result);

    B = 1;
    result = leetCode.cheapestJump(A, B);
    Logger::WriteMessage(A);
    Logger::WriteMessage("B = " + to_string(B));
    Logger::WriteMessage(result);

    A = { 0,0,0,0,0,0 };
    B = 3;
    result = leetCode.cheapestJump(A, B);

    Logger::WriteMessage(A);
    Logger::WriteMessage("B = " + to_string(B));
    Logger::WriteMessage(result);
}

void TestLeetCode629(void)
{
    LeetCodeDP leetCode;
    int n = 3, k = 0;
    int result = leetCode.kInversePairs(n, k);
    Logger::WriteMessage("n = " + to_string(n) + ";k = " + to_string(k) + ";result = " + to_string(result));

    n = 3, k = 10;
    result = leetCode.kInversePairs(n, k);
    Logger::WriteMessage("n = " + to_string(n) + ";k = " + to_string(k) + ";result = " + to_string(result));
}

void TestLeetCode123(void)
{
    Logger::WriteMessage("Test Leet Code 123");
    LeetCodeDP leetCode;
    vector<int> prices;
    int maxProfit;
    string message;
    Logger::WriteMessage("The stock price is ");
    prices = { 7, 1, 5, 3, 6, 4 };
    Logger::WriteMessage(prices);
    maxProfit = leetCode.maxProfitTwoTxns(prices);
    message.assign("The max profit is ");
    message.append(std::to_string(maxProfit));
    Logger::WriteMessage(message);

    Logger::WriteMessage("The stock price is ");
    prices = { 1, 2 };
    maxProfit = leetCode.maxProfitTwoTxns(prices);
    message.assign("The max profit is ");
    message.append(std::to_string(maxProfit));
    Logger::WriteMessage(message);
}

void TestLeetCode920(void)
{
    Logger::WriteMessage("Test Leet Code 920");
    LeetCodeDP leetCode;
    int N = 3, L = 3, K = 1;
    int result = leetCode.numMusicPlaylists(N, L, K);
    Logger::WriteMessage("N = " + to_string(N) + "; L = " + to_string(L) + "; K = " + to_string(K) + "; result = " + to_string(result));

    N = 2, L = 3, K = 0;
    result = leetCode.numMusicPlaylists(N, L, K);
    Logger::WriteMessage("N = " + to_string(N) + "; L = " + to_string(L) + "; K = " + to_string(K) + "; result = " + to_string(result));

    N = 2, L = 3, K = 1;
    result = leetCode.numMusicPlaylists(N, L, K);
    Logger::WriteMessage("N = " + to_string(N) + "; L = " + to_string(L) + "; K = " + to_string(K) + "; result = " + to_string(result));
}

void TestLeetCode923(void)
{
    Logger::WriteMessage("Test Leet Code 923");
    LeetCodeDP leetCode;
    vector<int> A = { 1,1,2,2,3,3,4,4,5,5 };
    int target = 8;
    int result = leetCode.threeSumMulti(A, target);
    Logger::WriteMessage(A);
    Logger::WriteMessage("target = " + to_string(target) + "; result = " + to_string(result));

    A = { 1,1,2,2,2,2 };
    target = 5;
    result = leetCode.threeSumMulti(A, target);
    Logger::WriteMessage(A);
    Logger::WriteMessage("target = " + to_string(target) + "; result = " + to_string(result));
}

void TestLeetCode474(void)
{
    Logger::WriteMessage("Test Leet Code 474");
    LeetCodeDP leetCode;
    vector<string> strs = { "10", "0", "1" };
    int m = 1;
    int n = 1;
    int result = leetCode.findMaxOneZeroForm(strs, m, n);
    Logger::WriteMessage(strs);
    Logger::WriteMessage("m = " + to_string(m) + "; n = " + to_string(n) + "; result = " + to_string(result));

    strs = { "10", "0001", "111001", "1", "0" };
    m = 5;
    n = 3;
    result = leetCode.findMaxOneZeroForm(strs, m, n);
    Logger::WriteMessage(strs);
    Logger::WriteMessage("m = " + to_string(m) + "; n = " + to_string(n) + "; result = " + to_string(result));
}

void TestLeetCode377(void)
{
    Logger::WriteMessage("Test Leet Code 377");
    LeetCodeDP leetCode;
    vector<int> nums = { 1, 2, 3 };
    int target = 4;
    Logger::WriteMessage(nums);
    int result = leetCode.combinationSum4(nums, target);
    Logger::WriteMessage("Target = " + to_string(target) + ", Result = " + to_string(result));
    result = leetCode.combinationSum4II(nums, target);
    Logger::WriteMessage("Target = " + to_string(target) + ", Result = " + to_string(result));
}

void TestLeetCode1216(void)
{
    Logger::WriteMessage("Test Leet Code 1216");
    LeetCodeDP leetCode;
    string s = "abctdeca";
    int k = 2;
    bool result = leetCode.isValidPalindrome(s, k);
    Logger::WriteMessage("s = " + s + "; k= " + to_string(k) + "; result = " + (string)(result ? "true" : "false"));
}

void TestLeetCode1220(void)
{
    Logger::WriteMessage("Test Leet Code 1220");
    LeetCodeDP leetCode;
    int n = 2;
    int result = leetCode.countVowelPermutation(n);
    Logger::WriteMessage("n= " + to_string(n) + "; result = " + to_string(result));
}

void TestLeetCode1223(void)
{
    Logger::WriteMessage("Test Leet Code 1223");
    LeetCodeDP leetCode;
    int n = 2;
    vector<int> rollMax = { 1, 1, 2, 2, 2, 3 };
    int result = leetCode.dieSimulator(n, rollMax);
    Logger::WriteMessage(rollMax);
    Logger::WriteMessage("n= " + to_string(n) + "; result = " + to_string(result));

    n = 2;
    rollMax = { 1,1,1,1,1,1 };
    result = leetCode.dieSimulator(n, rollMax);
    Logger::WriteMessage(rollMax);
    Logger::WriteMessage("n= " + to_string(n) + "; result = " + to_string(result));

    n = 3;
    rollMax = { 1,1,1,2,2,3 };
    result = leetCode.dieSimulator(n, rollMax);
    Logger::WriteMessage(rollMax);
    Logger::WriteMessage("n= " + to_string(n) + "; result = " + to_string(result));
}

void TestLeetCode1230(void)
{
    Logger::WriteMessage("Test Leet Code 1230");
    LeetCodeDP leetCode;
    vector<double> prob = { 0.4 };
    int target = 1;
    double result = leetCode.probabilityOfHeads(prob, target);
    Logger::WriteMessage(prob);
    Logger::WriteMessage("target = " + to_string(target) + "; result = " + to_string(result));

    prob = { 0.5, 0.5, 0.5, 0.5, 0.5 };
    target = 0;
    result = leetCode.probabilityOfHeads(prob, target);
    Logger::WriteMessage(prob);
    Logger::WriteMessage("target = "+ to_string(target) + "; result = " + to_string(result));

    prob = { 0.1, 0.2, 0.3, 0.4, 0.5 };
    target = 3;
    result = leetCode.probabilityOfHeads(prob, target);
    Logger::WriteMessage(prob);
    Logger::WriteMessage("target = " + to_string(target) + "; result = " + to_string(result));
}

void TestLeetCode1235(void)
{
    Logger::WriteMessage("Test Leet Code 1235");
    LeetCodeDP leetCode;
    vector<int> startTime = { 1, 2, 3, 3 }; 
    vector<int> endTime = { 3, 4, 5, 6 };
    vector<int> profit = { 50, 10, 40, 70 };
    int result = leetCode.jobScheduling(startTime, endTime, profit);
    Logger::WriteMessage(startTime);
    Logger::WriteMessage(endTime);
    Logger::WriteMessage(profit);
    Logger::WriteMessage("result = " + to_string(result));

    startTime = { 1,2,3,4,6 };
    endTime = { 3,5,10,6,9 };
    profit = { 20,20,100,70,60 };
    result = leetCode.jobScheduling(startTime, endTime, profit);
    Logger::WriteMessage(startTime);
    Logger::WriteMessage(endTime);
    Logger::WriteMessage(profit);
    Logger::WriteMessage("result = " + to_string(result));

    startTime = { 1,1,1 };
    endTime = { 2,3,4 };
    profit = { 5,6,4 };
    result = leetCode.jobScheduling(startTime, endTime, profit);
    Logger::WriteMessage(startTime);
    Logger::WriteMessage(endTime);
    Logger::WriteMessage(profit);
    Logger::WriteMessage("result = " + to_string(result));

    startTime = { 4, 2, 4, 8, 2 };
    endTime = { 5, 5, 5, 10, 8 };
    profit = { 1, 2, 8, 10, 4 };
    result = leetCode.jobScheduling(startTime, endTime, profit);
    Logger::WriteMessage(startTime);
    Logger::WriteMessage(endTime);
    Logger::WriteMessage(profit);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode1239(void)
{
    Logger::WriteMessage("Test Leet Code 1239");
    LeetCodeDP leetCode;
    vector<string> arr = { "un", "iq", "ue" };
    int result = leetCode.maxLength(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage("result = " + to_string(result));

    arr = { "cha","r","act","ers" };
    result = leetCode.maxLength(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage("result = " + to_string(result));

    arr = { "abcdefghijklmnopqrstuvwxyz" };
    result = leetCode.maxLength(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode1246(void)
{
    Logger::WriteMessage("Test Leet Code 1246");
    LeetCodeDP leetCode;
    vector<int> arr = { 1, 2 };
    int result = leetCode.minimumMoves(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage("result = " + to_string(result));

    arr = { 1,3,4,1,5 };
    result = leetCode.minimumMoves(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage("result = " + to_string(result));

    arr = { 17, 6, 5, 18, 17, 4, 18, 8, 16, 8, 12, 1, 5, 14, 14, 6, 17, 18, 2, 19, 11, 15, 8, 18, 7, 8, 20, 2, 10, 3, 18, 17, 18, 18, 8, 9, 20, 3, 16, 19, 6, 9, 8, 8, 16, 19, 13, 8, 5, 20 };
    result = leetCode.minimumMoves(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode1255(void)
{
    Logger::WriteMessage("Test Leet Code 1255");
    LeetCodeDP leetCode;
    vector<string> words = { "dog", "cat", "dad", "good" };
    vector<char> letters = { 'a', 'a', 'c', 'd', 'd', 'd', 'g', 'o', 'o' };
    vector<int> score = { 1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int result = leetCode.maxScoreWords(words, letters, score);
    Logger::WriteMessage(words);
    Logger::WriteMessage(letters);
    Logger::WriteMessage(score);
    Logger::WriteMessage("result = " + to_string(result));

    words = { "xxxz","ax","bx","cx" };
    letters = { 'z','a','b','c','x','x','x' };
    score = { 4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,10 };
    result = leetCode.maxScoreWords(words, letters, score);
    Logger::WriteMessage(words);
    Logger::WriteMessage(letters);
    Logger::WriteMessage(score);
    Logger::WriteMessage("result = " + to_string(result));

    words = { "leetcode" };
    letters = { 'l', 'e', 't', 'c', 'o', 'd' };
    score = { 0,0,1,1,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0 };
    result = leetCode.maxScoreWords(words, letters, score);
    Logger::WriteMessage(words);
    Logger::WriteMessage(letters);
    Logger::WriteMessage(score);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode1259(void)
{
    Logger::WriteMessage("Test Leet Code 1259");
    LeetCodeDP leetCode;
    int num_people = 2;
    int result = leetCode.numberOfWays(num_people);
    Logger::WriteMessage("num_people = " + to_string(num_people) + "; result = " + to_string(result));

    num_people = 4;
    result = leetCode.numberOfWays(num_people);
    Logger::WriteMessage("num_people = " + to_string(num_people) + "; result = " + to_string(result));

    num_people = 6;
    result = leetCode.numberOfWays(num_people);
    Logger::WriteMessage("num_people = " + to_string(num_people) + "; result = " + to_string(result));

    num_people = 8;
    result = leetCode.numberOfWays(num_people);
    Logger::WriteMessage("num_people = " + to_string(num_people) + "; result = " + to_string(result));
}

void TestLeetCode1269(void)
{
    Logger::WriteMessage("Test Leet Code 1269");
    LeetCodeDP leetCode;
    int steps = 3;
    int arrLen = 2;
    int result = leetCode.numWays(steps, arrLen);
    Logger::WriteMessage("steps = " + to_string(steps) + "; arrLen = " + to_string(arrLen) + "; result = " + to_string(result));

    steps = 2;
    arrLen = 4;
    result = leetCode.numWays(steps, arrLen);
    Logger::WriteMessage("steps = " + to_string(steps) + "; arrLen = " + to_string(arrLen) + "; result = " + to_string(result));

    steps = 4;
    arrLen = 2;
    result = leetCode.numWays(steps, arrLen);
    Logger::WriteMessage("steps = " + to_string(steps) + "; arrLen = " + to_string(arrLen) + "; result = " + to_string(result));
}

void TestLeetCode1277(void)
{
    Logger::WriteMessage("Test Leet Code 1277");
    LeetCodeDP leetCode;
    vector<vector<int>> matrix =
    {
        {0, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 1, 1, 1}
    };
    int result = leetCode.countSquares(matrix);
    Logger::WriteMessage(matrix);
    Logger::WriteMessage("result = " + to_string(result));

    matrix =
    {
        {1, 0, 1},
        {1, 1, 0},
        {1, 1, 0}
    };
    result = leetCode.countSquares(matrix);
    Logger::WriteMessage(matrix);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode1278(void)
{
    Logger::WriteMessage("Test Leet Code 1278");
    LeetCodeDP leetCode;
    string s = "abc"; 
    int k = 2;
    int result = leetCode.palindromePartition(s, k);
    Logger::WriteMessage("s = " + s + "; result = " + to_string(result));

    s = "aabbc";
    k = 3;
    result = leetCode.palindromePartition(s, k);
    Logger::WriteMessage("s = " + s + "; result = " + to_string(result));

    s = "leetcode";
    k = 8;
    result = leetCode.palindromePartition(s, k);
    Logger::WriteMessage("s = " + s + "; result = " + to_string(result));
}

void TestLeetCode1289(void)
{
    Logger::WriteMessage("Test Leet Code 1289");
    LeetCodeDP leetCode;
    vector<vector<int>> arr = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
    int result = leetCode.minFallingPathSum(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage("result = " + to_string(result));

    arr = { {1} };
    result = leetCode.minFallingPathSum(arr);
    Logger::WriteMessage(arr);
    Logger::WriteMessage("result = " + to_string(result));
}

void TestLeetCode1301(void)
{
    Logger::WriteMessage("Test Leet Code 1301");
    LeetCodeDP leetCode;
    vector<string> board = { "E23", "2X2", "12S" };
    vector<int> result = leetCode.pathsWithMaxScore(board);
    Logger::WriteMessage(board);
    Logger::WriteMessage(result);

    board = { "E12","1X1","21S" };
    result = leetCode.pathsWithMaxScore(board);
    Logger::WriteMessage(board);
    Logger::WriteMessage(result);

    board = { "E11","XXX","11S" };
    result = leetCode.pathsWithMaxScore(board);
    Logger::WriteMessage(board);
    Logger::WriteMessage(result);
}

void TestLeetCodeDP(void)
{
    TestLeetCode1301();
    TestLeetCode1289();
    TestLeetCode1278();
    TestLeetCode1277();
    TestLeetCode1269();
    TestLeetCode1259();
    TestLeetCode1255();
    TestLeetCode1246();
    TestLeetCode1239();
    TestLeetCode1235();
    TestLeetCode1230();
    TestLeetCode1223();
    TestLeetCode1220();
    TestLeetCode1216();
    TestLeetCode377();
    TestLeetCode474();
    TestLeetCode923();
    TestLeetCode920();
    TestLeetCode123();
    TestLeetCode629();
    TestLeetCode514();
    TestLeetCode264();
    TestLeetCode313();
    TestLeetCode403();
    TestLeetCode45();
    TestLeetCode576();
    TestLeetCode91();
    TestLeetCode322();
    TestLeetCode118();
    TestLeetCode119();
    TestLeetCode213();
    TestLeetCode9905();
    TestLeetCode494();
    TestLeetCode518();
    TestLeetCode562();
    TestLeetCode879();
    TestLeetCode1143();
    TestLeetCode1147();
    TestLeetCode1155();
}