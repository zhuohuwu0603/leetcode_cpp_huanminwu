﻿#pragma once
#ifndef LeetCodeStack_H
#define LeetCodeStack_H
#include <stdint.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <algorithm> 
#include <functional> 
#include <bitset> 
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map> 
#include <unordered_set> 
#include <vector> 
#include <stack> 
#include "leetcode.h"
using namespace std;
/// <summary>
/// The class is to implement stack based algorithm  
/// </summary>
class LeetCodeStack
{
public:
#pragma region Stack

    /// <summary>
    /// Leet code #150. Evaluate Reverse Polish Notation Add to List 
    /// Evaluate the value of an arithmetic expression in Reverse Polish Notation. 
    /// Valid operators are +, -, *, /. Each operand may be an integer or another expression. 
    /// Some examples:
    /// ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
    /// ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6
    /// </summary>
    int evalRPN(vector<string>& tokens);

    /// <summary>
    /// Leet code #394. Decode String    
    /// Given an encoded string, return it's decoded string.
    /// The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is 
    /// being repeated exactly k times. Note that k is guaranteed to be a positive integer.
    ///
    /// You may assume that the input string is always valid; No extra white spaces, 
    /// square brackets are well-formed, etc.
    ///
    /// Furthermore, you may assume that the original data does not contain any digits and that 
    /// digits are only for those repeat numbers, k. For example, there won't be input like 3a or 2[4]. 
    ///
    /// Examples: 
    /// s = "3[a]2[bc]", return "aaabcbc".
    /// s = "3[a2[c]]", return "accaccacc".
    /// s = "2[abc]3[cd]ef", return "abcabccdcdcdef".
    /// </summary>
    string decodeString(string s);

    /// <summary>
    /// Leet code #385. Mini Parser
    /// Given a nested list of integers represented as a string, implement a parser to deserialize it.
    /// Each element is either an integer, or a list -- whose elements may also be integers or other lists. 
    /// Note: You may assume that the string is well-formed: 
    /// String is non-empty.
    /// String does not contain white spaces.
    /// String contains only digits 0-9, [, - ,, ].
    /// Example 1: 
    /// Given s = "324",
    /// You should return a NestedInteger object which contains a single integer 324.
    /// Example 2: 
    /// Given s = "[123,[456,[789]]]",
    /// Return a NestedInteger object containing a nested list with 2 elements:
    /// 1. An integer containing value 123.
    /// 2. A nested list containing two elements:
    ///    i.  An integer containing value 456.
    ///    ii. A nested list with one element:
    ///         a. An integer containing value 789.
    /// </summary>
    NestedInteger deserializeNestedInteger(string s);

    /// <summary>
    /// Leet code #439. Ternary Expression Parser 
    /// </summary>
    void calculateTernary(string& result, string& operators);

    /// <summary>
    /// Leet code #439. Ternary Expression Parser 
    /// 
    /// Given a string representing arbitrarily nested ternary expressions, 
    /// calculate the result of the expression. You can always assume that 
    /// the given expression is valid and only consists of digits 0-9, ?, :, 
    /// T and F (T and F represent True and False respectively). 
    /// Note: 
    /// 1.The length of the given string is ≤ 10000.
    /// 2.Each number will contain only one digit.
    /// 3.The conditional expressions group right-to-left (as usual in 
    ///   most languages).
    /// 4.The condition will always be either T or F. That is, the condition 
    ///   will never be a digit.
    /// 5.The result of the expression will always evaluate to either a 
    ///   digit 0-9, T or F.
    ///
    /// Example 1: 
    /// Input: "T?2:3"
    /// Output: "2"
    /// Explanation: If true, then result is 2; otherwise result is 3.
    /// Example 2: 
    /// Input: "F?1:T?4:5"
    /// Output: "4"
    /// Explanation: The conditional expressions group right-to-left. Using 
    /// parenthesis, it is read/evaluated as:
    /// "(F ? 1 : (T ? 4 : 5))"                   "(F ? 1 : (T ? 4 : 5))"
    /// -> "(F ? 1 : 4)"                 or       -> "(T ? 4 : 5)"
    /// -> "4"                                    -> "4"
    /// Example 3: 
    /// Input: "T?T?F:5:3"
    /// Output: "F"
    /// Explanation: The conditional expressions group right-to-left. Using 
    /// parenthesis, it is read/evaluated as:
    /// "(T ? (T ? F : 5) : 3)"                   "(T ? (T ? F : 5) : 3)"
    /// -> "(T ? F : 3)"                 or       -> "(T ? F : 5)"
    /// -> "F"                                    -> "F"
    /// </summary>
    string parseTernaryII(string expression);

    /// <summary>
    /// Leet code #439. Ternary Expression Parser       
    /// </summary>
    string parseToken(string expression, int& index);

    /// <summary>
    /// Leet code #439. Ternary Expression Parser       
    /// 
    /// Given a string representing arbitrarily nested ternary expressions, calculate the 
    /// result of the expression. You can always assume that the given expression is valid 
    /// and only consists of digits 0-9, ?, :, T and F (T and F represent True and False respectively). 
    /// Note: 
    /// 1.The length of the given string is ≤ 10000.
    /// 2.Each number will contain only one digit.
    /// 3.The conditional expressions group right-to-left (as usual in most languages).
    /// 4.The condition will always be either T or F. That is, the condition will never be a digit.
    /// 5.The result of the expression will always evaluate to either a digit 0-9, T or F.
    ///
    /// Example 1: 
    /// Input: "T?2:3"
    /// Output: "2"
    /// Explanation: If true, then result is 2; otherwise result is 3.
    /// Example 2: 
    /// Input: "F?1:T?4:5"
    /// Output: "4"
    /// Explanation: The conditional expressions group right-to-left. Using parenthesis, it is read/evaluated as:
    /// "(F ? 1 : (T ? 4 : 5))"                   "(F ? 1 : (T ? 4 : 5))"
    /// -> "(F ? 1 : 4)"                 or       -> "(T ? 4 : 5)"
    /// -> "4"                                    -> "4"
    /// Example 3: 
    /// Input: "T?T?F:5:3"
    /// Output: "F"
    /// Explanation: The conditional expressions group right-to-left. Using parenthesis, it is read/evaluated as:
    /// "(T ? (T ? F : 5) : 3)"                   "(T ? (T ? F : 5) : 3)"
    /// -> "(T ? F : 3)"                 or       -> "(T ? F : 5)"
    /// -> "F"                                    -> "F"
    /// </summary>
    string parseTernary(string expression);

    /// <summary>
    /// Leet code #316. Remove Duplicate Letters     
    /// 
    /// Given a string which contains only lowercase letters, remove duplicate letters so 
    /// that every letter appear once and only once. You must make sure your result is the 
    /// smallest in lexicographical order among all possible results. 
    /// 
    /// Example:
    ///
    /// Given "bcabc"
    /// Return "abc" 
    /// 
    /// Given "cbacdcbc"
    /// Return "acdb" 
    /// </summary>
    string removeDuplicateLetters(string s);

    /// <summary>
    /// Leet code #735. Asteroid Collision
    ///
    /// We are given an array asteroids of integers representing asteroids in 
    /// a row. 
    /// For each asteroid, the absolute value represents its size, and the sign
    /// represents its direction (positive meaning right, negative meaning 
    /// left). Each asteroid moves at the same speed. 
    ///
    /// Find out the state of the asteroids after all collisions. If two 
    /// asteroids meet, the smaller one will explode. If both are the same 
    /// size, both will explode. Two asteroids moving in the same direction 
    /// will never meet. 
    ///
    /// Example 1:
    /// Input: 
    /// asteroids = [5, 10, -5]
    /// Output: [5, 10]
    /// Explanation: 
    /// The 10 and -5 collide resulting in 10.  The 5 and 10 never collide.
    /// 
    /// Example 2:
    /// Input: 
    /// asteroids = [8, -8]
    /// Output: []
    /// Explanation: 
    /// The 8 and -8 collide exploding each other.
    ///
    /// Example 3:
    /// Input: 
    /// asteroids = [10, 2, -5]
    /// Output: [10]
    /// Explanation: 
    /// The 2 and -5 collide resulting in -5.  The 10 and -5 collide resulting 
    /// in 10.
    ///
    /// Example 4:
    /// Input: 
    /// asteroids = [-2, -1, 1, 2]
    /// Output: [-2, -1, 1, 2]
    /// Explanation: 
    /// The -2 and -1 are moving left, while the 1 and 2 are moving right.
    /// Asteroids moving the same direction never meet, so no asteroids will 
    /// meet each other.
    ///
    /// Note: 
    /// The length of asteroids will be at most 10000.
    /// Each asteroid will be a non-zero integer in the range [-1000, 1000]..
    /// </summary> 
    vector<int> asteroidCollision(vector<int>& asteroids);

    /// <summary>
    /// Leet code #946. Validate Stack Sequences
    /// 
    /// Given two sequences pushed and popped with distinct values, return 
    /// true if and only if this could have been the result of a sequence 
    /// of push and pop operations on an initially empty stack.
    ///
    /// Example 1:
    /// Input: pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
    /// Output: true
    /// Explanation: We might do the following sequence:
    /// push(1), push(2), push(3), push(4), pop() -> 4,
    /// push(5), pop() -> 5, pop() -> 3, pop() -> 2, pop() -> 1
    ///
    /// Example 2:
    /// Input: pushed = [1,2,3,4,5], popped = [4,3,5,1,2]
    /// Output: false
    /// Explanation: 1 cannot be popped before 2.
    ///
    /// Note:
    ///
    /// 1. 0 <= pushed.length == popped.length <= 1000
    /// 2. 0 <= pushed[i], popped[i] < 1000
    /// 3. pushed is a permutation of popped.
    /// 4. pushed and popped have distinct values.
    /// </summary>
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped);

    /// <summary>
    /// Leet code #1003. Check If Word Is Valid After Substitutions
    /// 
    /// We are given that the string "abc" is valid.
    ///
    /// From any valid string V, we may split V into two pieces X and Y such 
    /// that X + Y (X concatenated with Y) is equal to V.  (X or Y may be empty.)  
    /// Then, X + "abc" + Y is also valid.
    ///
    /// If for example S = "abc", then examples of valid strings are: "abc", 
    /// "aabcbc", "abcabc", "abcabcababcc".  Examples of invalid strings are: 
    /// "abccba", "ab", "cababc", "bac".
    ///
    /// Return true if and only if the given string S is valid.
    ///
    ///
    /// Example 1:
    ///
    /// Input: "aabcbc"
    /// Output: true
    /// Explanation: 
    /// We start with the valid string "abc".
    /// Then we can insert another "abc" between "a" and "bc", resulting in 
    /// "a" + "abc" + "bc" which is "aabcbc".
    ///
    /// Example 2:
    ///
    /// Input: "abcabcababcc"
    /// Output: true
    /// Explanation: 
    /// "abcabcabc" is valid after consecutive insertings of "abc".
    /// Then we can insert "abc" before the last letter, resulting in 
    /// "abcabcab" + "abc" + "c" which is "abcabcababcc".
    ///
    /// Example 3:
    /// 
    /// Input: "abccba"
    /// Output: false
    ///
    /// Example 4:
    ///
    /// Input: "cababc"
    /// Output: false
    /// 
    ///
    /// Note:
    ///
    /// 1. 1 <= S.length <= 20000
    /// 2. S[i] is 'a', 'b', or 'c'
    /// </summary>
    bool isValidAbc(string S);

    /// <summary>
    /// Leet code #1047. Remove All Adjacent Duplicates In String
    /// 
    /// Given a string S of lowercase letters, a duplicate removal consists of 
    /// choosing two adjacent and equal letters, and removing them.
    ///
    /// We repeatedly make duplicate removals on S until we no longer can.
    ///
    /// Return the final string after all such duplicate removals have been made.  
    /// It is guaranteed the answer is unique.
    /// 
    /// Example 1:
    ///
    /// Input: "abbaca"
    /// Output: "ca"
    /// Explanation: 
    /// For example, in "abbaca" we could remove "bb" since the letters are 
    /// adjacent and equal, and this is the only possible move.  The result of 
    /// this move is that the string is "aaca", of which only "aa" is possible, 
    /// so the final string is "ca".
    /// 
    ///
    /// Note:
    ///
    /// 1. 1 <= S.length <= 20000
    /// 2. S consists only of English lowercase letters.
    /// </summary>
    string removeDuplicates(string S);

    /// <summary>
    /// Leet code #1081. Smallest Subsequence of Distinct Characters
    /// 
    /// Return the lexicographically smallest subsequence of text that contains 
    /// all the distinct characters of text exactly once.
    ///
    /// Example 1:
    /// Input: "cdadabcc"
    /// Output: "adbc"
    ///
    /// Example 2:
    /// Input: "abcd"
    /// Output: "abcd"
    ///
    /// Example 3:
    /// Input: "ecbacba"
    /// Output: "eacb"
    ///
    /// Example 4:
    /// Input: "leetcode"
    /// Output: "letcod"
    /// 
    /// Note:
    ///
    /// 1. 1 <= text.length <= 1000
    /// 2. text consists of lowercase English letters.
    /// </summary>
    string smallestSubsequence(string text);

    /// <summary>
    /// Leet code #1190. Reverse Substrings Between Each Pair of Parentheses
    /// 
    /// Given a string s that consists of lower case English letters and 
    /// brackets. 
    /// Reverse the strings in each pair of matching parentheses, starting from 
    /// the innermost one.
    /// Your result should not contain any bracket.
    /// 
    /// Example 1:
    /// Input: s = "(abcd)"
    /// Output: "dcba"
    ///
    /// Example 2:
    /// Input: s = "(u(love)i)"
    /// Output: "iloveu"
    ///
    /// Example 3:
    /// Input: s = "(ed(et(oc))el)"
    /// Output: "leetcode"
    /// Example 4:
    /// Input: s = "a(bcdefghijkl(mno)p)q"
    /// Output: "apmnolkjihgfedcbq"
    /// 
    /// Constraints:
    /// 1. 0 <= s.length <= 2000
    /// 2. s only contains lower case English characters and parentheses.
    /// 3. It's guaranteed that all parentheses are balanced.
    /// </summary>
    string reverseParentheses(string s);

    /// <summary>
    /// Leet code #1209. Remove All Adjacent Duplicates in String II
    ///
    /// Given a string s, a k duplicate removal consists of choosing k adjacent 
    /// and equal letters from s and removing them causing the left and the 
    /// right side of the deleted substring to concatenate together.
    ///
    /// We repeatedly make k duplicate removals on s until we no longer can.
    ///
    /// Return the final string after all such duplicate removals have been made.
    ///
    /// It is guaranteed that the answer is unique.
    /// 
    /// Example 1:
    /// Input: s = "abcd", k = 2
    /// Output: "abcd"
    /// Explanation: There's nothing to delete.
    ///
    /// Example 2:
    /// Input: s = "deeedbbcccbdaa", k = 3
    /// Output: "aa"
    /// Explanation: 
    /// First delete "eee" and "ccc", get "ddbbbdaa"
    /// Then delete "bbb", get "dddaa"
    /// Finally delete "ddd", get "aa"
    ///
    /// Example 3:
    /// Input: s = "pbbcggttciiippooaais", k = 2
    /// Output: "ps"
    /// 
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 10^5
    /// 2. 2 <= k <= 10^4
    /// 3. s only contains lower case English letters.
    /// </summary>
    string removeDuplicates(string s, int k);

    /// <summary>
    /// Leet code #339. Nested List Weight Sum  
    /// </summary>
    int depthSum(vector<NestedInteger>& nestedList, int depth);

    /// <summary>
    /// Leet code #339. Nested List Weight Sum  
    /// 
    /// Given a nested list of integers, return the sum of all integers in the list weighted by their depth.
    /// Each element is either an integer, or a list -- whose elements may also be integers or other lists.
    /// Example 1:
    /// Given the list [[1,1],2,[1,1]], return 10. (four 1's at depth 2, one 2 at depth 1)
    /// Example 2:
    /// Given the list [1,[4,[6]]], return 27. (one 1 at depth 1, one 4 at depth 2, and one 6 at depth 3; 1 + 4*2 + 6*3 = 27) 
    /// </summary>
    int depthSum(vector<NestedInteger>& nestedList);

    /// <summary>
    /// Leet code #402. Remove K Digits     
    /// 
    /// Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible. 
    /// Note:
    /// The length of num is less than 10002 and will be ≥ k.
    /// The given num does not contain any leading zero.
    /// Example 1: 
    /// Input: num = "1432219", k = 3
    /// Output: "1219"
    /// Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
    ///
    /// Example 2: 
    /// Input: num = "10200", k = 1
    /// Output: "200"
    /// Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
    ///
    /// Example 3: 
    /// Input: num = "10", k = 2
    /// Output: "0"
    /// Explanation: Remove all the digits from the number and it is left with nothing which is 0.
    /// </summary>
    string removeKdigits(string num, int k);

    /// <summary>
    /// Leet code #907. Sum of Subarray Minimums
    /// 
    /// Given an array of integers A, find the sum of min(B), where B ranges over 
    /// every (contiguous) subarray of A.
    ///
    /// Since the answer may be large, return the answer modulo 10^9 + 7.
    ///
    /// Example 1:
    ///
    /// Input: [3,1,2,4]
    /// Output: 17
    /// Explanation: Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], 
    /// [3,1,2], [1,2,4], [3,1,2,4]. 
    /// Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.  Sum is 17.
    /// 
    /// Note:
    ///
    /// 1. 1 <= A.length <= 30000
    /// 2. 1 <= A[i] <= 30000
    /// </summary>
    int sumSubarrayMins(vector<int>& A);

    /// <summary>
    /// Leet code #636. Exclusive Time of Functions
    /// 
    /// Given the running logs of n functions that are executed in a 
    /// nonpreemptive single threaded CPU, find the exclusive time of these 
    /// functions. 
    /// Each function has a unique id, start from 0 to n-1. A function may be 
    /// called recursively or by another function.
    /// A log is a string has this format: function_id:start_or_end:timestamp.
    /// For example, "0:start:0" means function 0 starts from the very 
    /// beginning of time 0. 
    /// "0:end:0" means function 0 ends to the very end of time 0. 
    /// Exclusive time of a function is defined as the time spent within 
    /// this function, the time spent by calling other functions should not 
    /// be considered as this function's exclusive time. You should return the 
    /// exclusive time of each function sorted by their function id.
    ///
    /// Example 1:
    /// Input:
    /// n = 2
    /// logs = 
    /// ["0:start:0",
    /// "1:start:2",
    /// "1:end:5",
    /// "0:end:6"]
    /// Output:[3, 4]
    /// Explanation:
    /// Function 0 starts at time 0, then it executes 2 units of time and 
    /// reaches the end of time 1. 
    /// Now function 0 calls function 1, function 1 starts at time 2, executes 
    /// 4 units of time and end at time 5.
    /// Function 0 is running again at time 6, and also end at the time 6, thus 
    /// executes 1 unit of time. 
    /// So function 0 totally execute 2 + 1 = 3 units of time, and function 1 
    /// totally execute 4 units of time.
    ///
    /// Note:
    /// 1. Input logs will be sorted by timestamp, NOT log id.
    /// 2. Your output should be sorted by function id, which means the 0th 
    /// element of your output corresponds to the exclusive time of function 0.
    /// 3. Two functions won't start or end at the same time.
    /// 4. Functions could be called recursively, and will always end.
    /// 5. 1 <= n <= 100
    /// </summary>
    vector<int> exclusiveTime(int n, vector<string>& logs);

    /// <summary>
    /// Leet code #739. Daily Temperatures
    ///
    /// Given a list of daily temperatures, produce a list that, for each day 
    /// in the input, tells you how many days you would have to wait until a 
    /// warmer temperature. If there is no future day for which this is 
    /// possible, put 0 instead. 
    /// For example, given the list temperatures = [73, 74, 75, 71, 69, 72, 
    /// 76, 73], your output should be [1, 1, 4, 2, 1, 1, 0, 0]. 
    /// Note: The length of temperatures will be in the range [1, 30000]. Each 
    /// temperature will be an integer in the range [30, 100]. 
    /// </summary> 
    vector<int> dailyTemperatures(vector<int>& temperatures);

    /// <summary>
    /// Leet code #1425. Constrained Subset Sum
    /// 
    /// Hard
    ///
    /// Given an integer array nums and an integer k, return the maximum sum 
    /// of a non-empty subset of that array such that for every two 
    /// consecutive integers in the subset, nums[i] and nums[j], where i < j, 
    /// the condition j - i <= k is satisfied.
    ///
    /// A subset of an array is obtained by deleting some number of elements 
    /// (can be zero) from the array, leaving the remaining elements in their 
    /// original order.
    /// Example 1:
    ///
    /// Input: nums = [10,2,-10,5,20], k = 2
    /// Output: 37
    /// Explanation: The subset is [10, 2, 5, 20].
    /// Example 2:
    ///
    /// Input: nums = [-1,-2,-3], k = 1
    /// Output: -1
    /// Explanation: The subset must be non-empty, so we choose the largest 
    /// number.
    ///
    /// Example 3:
    ///
    /// Input: nums = [10,-2,-10,-5,20], k = 2
    /// Output: 23
    /// Explanation: The subset is [10, -2, -5, 20].
    /// 
    /// Constraints:
    /// 1. 1 <= k <= nums.length <= 10^5
    /// 2. -10^4 <= nums[i] <= 10^4
    /// </summary>
    int constrainedSubsetSum(vector<int>& nums, int k);

    /// <summary>
    /// Leet code #239. Sliding Window Maximum 
    ///
    /// Given an array nums, there is a sliding window of size k which is 
    /// moving from the very left of the array to the very right. 
    /// You can only see the k numbers in the window. Each time the sliding 
    /// window moves right by one position.
    /// For example,
    /// Given nums = [1,3,-1,-3,5,3,6,7], and k = 3.
    /// Window position                Max
    /// ---------------               -----
    /// [1  3  -1] -3  5  3  6  7       3
    ///  1 [3  -1  -3] 5  3  6  7       3
    ///  1  3 [-1  -3  5] 3  6  7       5
    ///  1  3  -1 [-3  5  3] 6  7       5
    ///  1  3  -1  -3 [5  3  6] 7       6
    ///  1  3  -1  -3  5 [3  6  7]      7
    /// Therefore, return the max sliding window as [3,3,5,5,6,7].
    /// Note: 
    /// You may assume k is always valid, ie: 1 ≤ k ≤ input array's size for non-empty array.
    /// Follow up:
    /// Could you solve it in linear time?
    /// Hint:
    /// 1.How about using a data structure such as deque (double-ended queue)?
    /// 2.The queue size need not be the same as the window’s size.
    /// 3.Remove redundant elements and the queue should store only elements that need to be considered.
    /// </summary> 
    vector<int> maxSlidingWindow(vector<int>& nums, int k);

    /// <summary>
    /// Leet code #1475. Final Prices With a Special Discount in a Shop
    ///
    /// Easy
    ///
    /// Given the array prices where prices[i] is the price of the ith item 
    /// in a shop. There is a special discount for items in the shop, if you 
    /// buy the ith item, then you will receive a discount equivalent to 
    /// prices[j] where j is the minimum index such that j > i and 
    /// prices[j] <= prices[i], otherwise, you will not receive any discount 
    /// at all.
    ///
    /// Return an array where the ith element is the final price you will pay 
    /// for the ith item of the shop considering the special discount.
    ///
    /// Example 1:
    /// Input: prices = [8,4,6,2,3]
    /// Output: [4,2,4,2,3]
    /// Explanation: 
    /// For item 0 with price[0]=8 you will receive a discount equivalent to 
    /// prices[1]=4, therefore, the final price you will pay is 8 - 4 = 4. 
    /// For item 1 with price[1]=4 you will receive a discount equivalent to 
    /// prices[3]=2, therefore, the final price you will pay is 4 - 2 = 2. 
    /// For item 2 with price[2]=6 you will receive a discount equivalent to 
    /// prices[3]=2, therefore, the final price you will pay is 6 - 2 = 4. 
    /// For items 3 and 4 you will not receive any discount at all.
    ///
    /// Example 2:
    /// Input: prices = [1,2,3,4,5]
    /// Output: [1,2,3,4,5]
    /// Explanation: In this case, for all items, you will not receive any 
    /// discount at all.
    /// Example 3:
    /// Input: prices = [10,1,1,6]
    /// Output: [9,0,1,6]
    /// Constraints:
    /// 1. 1 <= prices.length <= 500
    /// 2. 1 <= prices[i] <= 10^3
    /// </summary> 
    vector<int> finalPrices(vector<int>& prices);

    /// <summary>
    /// Leet code #496. Next Greater Element I
    ///
    /// You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements 
    /// are subset of nums2. Find all the next greater numbers for nums1's elements in the 
    /// corresponding places of nums2. 
    /// 
    /// The Next Greater Number of a number x in nums1 is the first greater number to its right 
    /// in nums2. If it does not exist, output -1 for this number. 
    /// 
    /// Example 1:
    /// Input: nums1 = [4,1,2], nums2 = [1,3,4,2].
    /// Output: [-1,3,-1]
    /// Explanation:
    /// For number 4 in the first array, you cannot find the next greater number for it in 
    /// the second array, so output -1.
    /// For number 1 in the first array, the next greater number for it in the second array is 3.
    /// For number 2 in the first array, there is no next greater number for it in the second array, 
    /// so output -1.
    ///
    /// Example 2:
    ///
    /// Input: nums1 = [2,4], nums2 = [1,2,3,4].
    /// Output: [3,-1]
    /// Explanation:
    /// For number 2 in the first array, the next greater number for it in the second array is 3.
    /// For number 4 in the first array, there is no next greater number for it in the second array, 
    /// so output -1.
    ///  
    /// Note:
    ///
    /// 1.All elements in nums1 and nums2 are unique.
    /// 2.The length of both nums1 and nums2 would not exceed 1000.
    /// </summary>
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums);

    /// <summary>
    /// Leet code #503. Next Greater Element II
    ///
    /// Given a circular array (the next element of the last element is the 
    /// first element of the array), print the Next Greater Number for 
    /// every element. The Next Greater Number of a number x is the first 
    /// greater number to its traversing-order next in the array, which means 
    /// you could search circularly to find its next greater number. If it 
    /// doesn't exist, output -1 for this number. 
    ///
    /// Example 1:
    ///
    /// Input: [1,2,1]
    /// Output: [2,-1,2]
    /// Explanation: The first 1's next greater number is 2; 
    /// The number 2 can't find next greater number; 
    /// The second 1's next greater number needs to search circularly, which is also 2.
    /// </summary>
    vector<int> nextGreaterElements(vector<int>& nums);


    /// <summary>
    /// Leet code 1856. Maximum Subarray Min-Product
    /// 
    /// Medium
    /// 
    /// The min-product of an array is equal to the minimum value in the array 
    /// multiplied by the array's sum.
    ///
    /// For example, the array [3,2,5] (minimum value is 2) has a min-product 
    /// of 2 * (3+2+5) = 2 * 10 = 20.
    /// Given an array of integers nums, return the maximum min-product of 
    /// any non-empty subarray of nums. Since the answer may be large, return 
    /// it modulo 10^9 + 7.
    ///
    /// Note that the min-product should be maximized before performing the 
    /// modulo operation. Testcases are generated such that the maximum 
    /// min-product without modulo will fit in a 64-bit signed integer.
    ///
    /// A subarray is a contiguous part of an array.
    /// 
    /// Example 1:
    /// Input: nums = [1,2,3,2]
    /// Output: 14
    /// Explanation: The maximum min-product is achieved with the 
    /// subarray [2,3,2] (minimum value is 2).
    /// 2 * (2+3+2) = 2 * 7 = 14.
    ///
    /// Example 2:
    /// Input: nums = [2,3,3,1,2]
    /// Output: 18
    /// Explanation: The maximum min-product is achieved with the 
    /// subarray [3,3] (minimum value is 3).
    /// 3 * (3+3) = 3 * 6 = 18.
    ///
    /// Example 3:
    /// Input: nums = [3,1,5,6,4,2]
    /// Output: 60
    /// Explanation: The maximum min-product is achieved with the 
    /// subarray [5,6,4] (minimum value is 4).
    /// 4 * (5+6+4) = 4 * 15 = 60.
    /// 
    /// Constraints:
    /// 1. 1 <= nums.length <= 10^5
    /// 2. 1 <= nums[i] <= 10^7
    /// </summary>
    int maxSumMinProduct(vector<int>& nums);

    /// <summary>
    /// Leet code 1944. Number of Visible People in a Queue
    ///                                  
    /// Hard
    /// 
    /// There are n people standing in a queue, and they numbered from 0 to 
    /// n - 1 in left to right order. You are given an array heights of 
    /// distinct integers where heights[i] represents the height of the ith 
    /// person.
    ///
    /// A person can see another person to their right in the queue if 
    /// everybody in between is shorter than both of them. More formally, the 
    /// ith person can see the jth person if i < j and min(heights[i], 
    /// heights[j]) > max(heights[i+1], heights[i+2], ..., heights[j-1]).
    ///
    /// Return an array answer of length n where answer[i] is the number of 
    /// people the ith person can see to their right in the queue.
    ///  
    /// Example 1:
    /// Input: heights = [10,6,8,5,11,9]
    /// Output: [3,1,2,1,1,0]
    /// Explanation:
    /// Person 0 can see person 1, 2, and 4.
    /// Person 1 can see person 2.
    /// Person 2 can see person 3 and 4.
    /// Person 3 can see person 4.
    /// Person 4 can see person 5.
    /// Person 5 can see no one since nobody is to the right of them.
    ///
    /// Example 2:
    /// Input: heights = [5,1,2,3,10]
    /// Output: [4,1,1,1,0]
    ///
    /// Constraints:
    /// 1. n == heights.length
    /// 2. 1 <= n <= 10^5
    /// 3. 1 <= heights[i] <= 10^5
    /// 4. All the values of heights are unique. 
    /// </summary>
    vector<int> canSeePersonsCount(vector<int>& heights);

    /// <summary>
    /// Leet Code 2030. Smallest K-Length Subsequence With Occurrences 
    ///                 of a Letter
    ///                                                                 
    /// Hard
    /// 
    /// You are given a string s, an integer k, a letter letter, and an 
    /// integer repetition.
    ///  
    /// Return the lexicographically smallest subsequence of s of length 
    /// k that has the letter letter appear at least repetition times. 
    /// The test cases are generated so that the letter appears in s at 
    /// least repetition times.
    ///
    /// A subsequence is a string that can be derived from another string 
    /// by deleting some or no characters without changing the order of 
    /// the remaining characters.
    ///
    /// A string a is lexicographically smaller than a string b if in 
    /// the first position where a and b differ, string a has a letter 
    /// that appears earlier in the alphabet than the corresponding letter
    /// in b.
    /// 
    /// Example 1:
    /// Input: s = "leet", k = 3, letter = "e", repetition = 1
    /// Output: "eet"
    /// Explanation: There are four subsequences of length 3 that have 
    /// the letter 'e' appear at least 1 time:
    /// - "lee" (from "leet")
    /// - "let" (from "leet")
    /// - "let" (from "leet")
    /// - "eet" (from "leet")
    /// The lexicographically smallest subsequence among them is "eet".
    ///
    /// Example 2:
    /// Input: s = "leetcode", k = 4, letter = "e", repetition = 2
    /// Output: "ecde"
    /// Explanation: "ecde" is the lexicographically smallest 
    /// subsequence of length 4 that has the letter "e" appear at 
    /// least 2 times.
    ///
    /// Example 3:
    /// Input: s = "bb", k = 2, letter = "b", repetition = 2
    /// Output: "bb"
    /// Explanation: "bb" is the only subsequence of length 2 
    /// that has the letter "b" appear at least 2 times.
    /// 
    /// Constraints:
    /// 1. 1 <= repetition <= k <= s.length <= 5 * 10^4
    /// 2. s consists of lowercase English letters.
    /// 3. letter is a lowercase English letter, and appears in s at 
    ///    least repetition times.
    /// </summary>
    string smallestSubsequence(string s, int k, char letter, int repetition);

    /// <summary>
    /// Leet Code 1776. Car Fleet II
    ///                                                                 
    /// Hard
    /// 
    /// There are n cars traveling at different speeds in the same direction 
    /// along a one-lane road. You are given an array cars of length n, where 
    /// cars[i] = [positioni, speedi] represents:
    ///
    /// positioni is the distance between the ith car and the beginning of 
    /// the road in meters. It is guaranteed that positioni < positioni+1.
    /// speedi is the initial speed of the ith car in meters per second.
    /// For simplicity, cars can be considered as points moving along the 
    /// number line. Two cars collide when they occupy the same position. Once 
    /// a car collides with another car, they unite and form a single car 
    /// fleet. The cars in the formed fleet will have the same position and 
    /// the same speed, which is the initial speed of the slowest car in the 
    /// fleet.
    ///
    /// Return an array answer, where answer[i] is the time, in seconds, at 
    /// which the ith car collides with the next car, or -1 if the car does 
    /// not collide with the next car. Answers within 10-5 of the actual 
    /// answers are accepted.
    /// 
    /// Example 1:
    /// Input: cars = [[1,2],[2,1],[4,3],[7,2]]
    /// Output: [1.00000,-1.00000,3.00000,-1.00000]
    /// Explanation: After exactly one second, the first car will collide 
    /// with the second car, and form a car fleet with speed 1 m/s. After 
    /// exactly 3 seconds, the third car will collide with the fourth car, 
    /// and form a car fleet with speed 2 m/s.
    ///
    /// Example 2:
    /// Input: cars = [[3,4],[5,4],[6,3],[9,1]]
    /// Output: [2.00000,1.00000,1.50000,-1.00000]
    /// Constraints:
    /// 1. 1 <= cars.length <= 10^5
    /// 2. 1 <= positioni, speedi <= 10^6
    /// 3. positioni < positioni+1
    /// </summary>
    vector<double> getCollisionTimes(vector<vector<int>>& cars);

    /// <summary>
    /// Leet code #84. Largest Rectangle in Histogram  
    /// Given n non-negative integers representing the histogram's bar 
    /// height where the width of each bar is 1, 
    /// find the area of largest rectangle in the histogram. 
    /// Above is a histogram where width of each bar is 1, given height = [2,1,5,6,2,3].  
    /// The largest rectangle is shown in the shaded area, which has area = 10 unit.
    /// For example,
    /// Given heights = [2,1,5,6,2,3],
    /// return 10.
    /// This is the first method by using stack, you keep on pushing when the next bar is 
    /// higher, and start to pop up and calculate the previous rectangle when the next bar 
    /// is smaller
    /// </summary> 
    int largestRectangleArea(vector<int>& heights);

    /// <summary>
    /// Leet code #85. Maximal Rectangle  
    /// Given a 2D binary matrix filled with 0's and 1's, find the largest 
    /// rectangle containing only 1's and return its area.
    /// For example, given the following matrix: 
    /// 1 0 1 0 0
    /// 1 0 1 1 1
    /// 1 1 1 1 1
    /// 1 0 0 1 0
    /// Return 6. 
    /// </summary>
    int maximalRectangle(vector<vector<char>>& matrix);

    /// <summary>
    /// Leet code #1438. Longest Continuous Subarray With Absolute Diff 
    ///                  Less Than or Equal to Limit
    /// 
    /// Medium
    ///
    /// Given an array of integers nums and an integer limit, return the 
    /// size of the longest continuous subarray such that the absolute 
    /// difference between any two elements is less than or equal to limit.
    ///
    /// In case there is no subarray satisfying the given condition return 0.
    ///
    /// Example 1:
    /// Input: nums = [8,2,4,7], limit = 4
    /// Output: 2 
    /// Explanation: All subarrays are: 
    /// [8] with maximum absolute diff |8-8| = 0 <= 4.
    /// [8,2] with maximum absolute diff |8-2| = 6 > 4. 
    /// [8,2,4] with maximum absolute diff |8-2| = 6 > 4.
    /// [8,2,4,7] with maximum absolute diff |8-2| = 6 > 4.
    /// [2] with maximum absolute diff |2-2| = 0 <= 4.
    /// [2,4] with maximum absolute diff |2-4| = 2 <= 4.
    /// [2,4,7] with maximum absolute diff |2-7| = 5 > 4.
    /// [4] with maximum absolute diff |4-4| = 0 <= 4.
    /// [4,7] with maximum absolute diff |4-7| = 3 <= 4.
    /// [7] with maximum absolute diff |7-7| = 0 <= 4. 
    /// Therefore, the size of the longest subarray is 2.
    ///
    /// Example 2:
    /// Input: nums = [10,1,2,4,7,2], limit = 5
    /// Output: 4 
    /// Explanation: The subarray [2,4,7,2] is the longest since the maximum 
    /// absolute diff is |2-7| = 5 <= 5.
    ///
    /// Example 3:
    /// Input: nums = [4,2,2,2,4,4,2,2], limit = 0
    /// Output: 3
    ///
    /// Constraints:
    /// 1. 1 <= nums.length <= 10^5
    /// 2. 1 <= nums[i] <= 10^9
    /// 3. 0 <= limit <= 10^9
    /// </summary>
    int longestSubarray(vector<int>& nums, int limit);

    /// <summary>
    /// Leet code #862. Shortest Subarray with Sum at Least K
    /// 
    /// Return the length of the shortest, non-empty, contiguous subarray of A 
    /// with sum at least K.
    ///
    /// If there is no non-empty subarray with sum at least K, return -1.
    ///
    /// Example 1:
    /// Input: A = [1], K = 1
    /// Output: 1
    ///
    /// Example 2:
    /// Input: A = [1,2], K = 4
    /// Output: -1
    ///
    /// Example 3:
    /// Input: A = [2,-1,2], K = 3
    /// Output: 3
    ///
    /// Note:
    /// 1. 1 <= A.length <= 50000
    /// 2. -10 ^ 5 <= A[i] <= 10 ^ 5
    /// 3. 1 <= K <= 10 ^ 9
    /// </summary>
    int shortestSubarray(vector<int>& A, int K);

    /// <summary>
    /// Leet Code 1950. Maximum of Minimum Values in All Subarrays
    ///                                                                 
    /// Medium
    ///
    /// You are given an integer array nums of size n. You are asked to solve 
    /// n queries for each integer i in the range 0 <= i < n.
    ///
    /// To solve the ith query:
    /// Find the minimum value in each possible subarray of size i + 1 of the 
    /// array nums.
    /// Find the maximum of those minimum values. This maximum is the answer 
    /// to the query.
    /// Return a 0-indexed integer array ans of size n such that ans[i] is the 
    /// answer to the ith query.
    ///
    /// A subarray is a contiguous sequence of elements in an array.
    /// 
    /// Example 1:
    /// Input: nums = [0,1,2,4]
    /// Output: [4,2,1,0]
    /// Explanation:
    /// i=0:
    /// - The subarrays of size 1 are [0], [1], [2], [4]. The minimum values 
    ///   are 0, 1, 2, 4.
    /// - The maximum of the minimum values is 4.
    /// i=1:
    /// - The subarrays of size 2 are [0,1], [1,2], [2,4]. The minimum values 
    ///   are 0, 1, 2.
    /// - The maximum of the minimum values is 2.
    /// i=2:
    /// - The subarrays of size 3 are [0,1,2], [1,2,4]. The minimum values 
    ///   are 0, 1.
    /// - The maximum of the minimum values is 1.
    /// i=3:
    /// - There is one subarray of size 4, which is [0,1,2,4]. The minimum 
    /// value is 0.
    /// - There is only one value, so the maximum is 0.
    ///
    /// Example 2:
    /// Input: nums = [10,20,50,10]
    /// Output: [50,20,10,10]
    /// Explanation:
    /// i=0:
    /// - The subarrays of size 1 are [10], [20], [50], [10]. The minimum 
    ///   values are 10, 20, 50, 10.
    /// - The maximum of the minimum values is 50.
    /// i=1:
    /// - The subarrays of size 2 are [10,20], [20,50], [50,10]. The 
    ///   minimum values are 10, 20, 10.
    /// - The maximum of the minimum values is 20.
    /// i=2:
    /// - The subarrays of size 3 are [10,20,50], [20,50,10]. The minimum 
    ///   values are 10, 10.
    /// - The maximum of the minimum values is 10.
    /// i=3:
    /// - There is one subarray of size 4, which is [10,20,50,10]. The 
    ///   minimum value is 10.
    /// - There is only one value, so the maximum is 10.
    ///
    /// Constraints:
    /// 1. n == nums.length
    /// 2. 1 <= n <= 10^5
    /// 3. 0 <= nums[i] <= 10^9
    /// </summary>
    vector<int> findMaximums(vector<int>& nums);

    /// <summary>
    /// Leet Code 2104. Sum of Subarray Ranges
    ///                                                                 
    /// Medium
    ///
    /// You are given an integer array nums. The range of a subarray of nums 
    /// is the difference between the largest and smallest element in the 
    /// subarray.
    ///
    /// Return the sum of all subarray ranges of nums.
    ///
    /// A subarray is a contiguous non-empty sequence of elements within an 
    /// array.
    /// 
    /// Example 1:
    ///
    /// Input: nums = [1,2,3]
    /// Output: 4
    /// Explanation: The 6 subarrays of nums are the following:
    /// [1], range = largest - smallest = 1 - 1 = 0 
    /// [2], range = 2 - 2 = 0
    /// [3], range = 3 - 3 = 0
    /// [1,2], range = 2 - 1 = 1
    /// [2,3], range = 3 - 2 = 1
    /// [1,2,3], range = 3 - 1 = 2
    /// So the sum of all ranges is 0 + 0 + 0 + 1 + 1 + 2 = 4.
    ///
    /// Example 2:
    /// Input: nums = [1,3,3]
    /// Output: 4
    /// Explanation: The 6 subarrays of nums are the following:
    /// [1], range = largest - smallest = 1 - 1 = 0
    /// [3], range = 3 - 3 = 0
    /// [3], range = 3 - 3 = 0
    /// [1,3], range = 3 - 1 = 2
    /// [3,3], range = 3 - 3 = 0
    /// [1,3,3], range = 3 - 1 = 2
    /// So the sum of all ranges is 0 + 0 + 0 + 2 + 0 + 2 = 4.
    ///
    /// Example 3:
    /// Input: nums = [4,-2,-3,4,1]
    /// Output: 59
    /// Explanation: The sum of all subarray ranges of nums is 59.
    ///
    /// Constraints:
    /// 1. 1 <= nums.length <= 1000
    /// 2. -10^9 <= nums[i] <= 10^9
    /// 
    /// Follow-up: Could you find a solution with O(n) time complexity?
    /// </summary>
    long long subArrayRanges(vector<int>& nums);

    /// <summary>
    /// Leet code #1696. Jump Game VI
    /// 
    /// Medium
    /// 
    /// You are given a 0-indexed integer array nums and an integer k.
    ///
    /// You are initially standing at index 0. In one move, you can jump at 
    /// most k steps forward without going outside the boundaries of the 
    /// array. That is, you can jump from index i to any index in the 
    /// range [i + 1, min(n - 1, i + k)] inclusive.
    ///
    /// You want to reach the last index of the array (index n - 1). Your 
    /// score is the sum of all nums[j] for each index j you visited in the 
    /// array.
    ///
    /// Return the maximum score you can get.
    /// 
    /// Example 1:
    /// Input: nums = [1,-1,-2,4,-7,3], k = 2
    /// Output: 7
    /// Explanation: You can choose your jumps forming the subsequence 
    /// [1,-1,4,3] (underlined above). The sum is 7.
    ///
    /// Example 2:
    /// Input: nums = [10,-5,-2,4,0,3], k = 3
    /// Output: 17
    /// Explanation: You can choose your jumps forming the subsequence 
    /// [10,4,3] (underlined above). The sum is 17.
    ///
    /// Example 3:
    /// Input: nums = [1,-5,-20,4,-1,3,-6,-3], k = 2
    /// Output: 0
    ///
    /// Constraints:
    /// 1. 1 <= nums.length, k <= 10^5
    /// 2. -10^4 <= nums[i] <= 10^4
    /// </summary>
    int maxResult(vector<int>& nums, int k);

    /// <summary>
    /// Leet Code 2211. Count Collisions on a Road
    ///                                                                                   
    /// Medium
    ///
    /// There are n cars on an infinitely long road. The cars are numbered 
    /// from 0 to n - 1 from left to right and each car is present at a 
    /// unique point.
    /// You are given a 0-indexed string directions of length n. directions[i] 
    /// can be either 'L', 'R', or 'S' denoting whether the ith car is moving 
    /// towards the left, towards the right, or staying at its current point 
    /// respectively. Each moving car has the same speed.
    ///
    /// The number of collisions can be calculated as follows:
    /// When two cars moving in opposite directions collide with each other, 
    /// the number of collisions increases by 2.
    /// When a moving car collides with a stationary car, the number of 
    /// collisions increases by 1.
    /// After a collision, the cars involved can no longer move and will 
    /// stay at the point where they collided. Other than that, cars 
    /// cannot change their state or direction of motion.
    ///
    /// Return the total number of collisions that will happen on the road.
    /// 
    /// Example 1:
    /// Input: directions = "RLRSLL"
    ///
    /// Output: 5
    /// Explanation:
    /// The collisions that will happen on the road are:
    /// - Cars 0 and 1 will collide with each other. Since they are moving 
    /// in opposite directions, the number of collisions becomes 0 + 2 = 2.
    /// - Cars 2 and 3 will collide with each other. Since car 3 is 
    /// stationary, the number of collisions becomes 2 + 1 = 3.
    /// - Cars 3 and 4 will collide with each other. Since car 3 is 
    /// stationary, the number of collisions becomes 3 + 1 = 4.
    /// - Cars 4 and 5 will collide with each other. After car 4 collides 
    /// with car 3, it will stay at the point of collision and get hit by 
    /// car 5. The number of collisions becomes 4 + 1 = 5.
    /// Thus, the total number of collisions that will happen on the 
    /// road is 5. 
    ///
    /// Example 2:
    /// Input: directions = "LLRR"
    /// Output: 0
    /// Explanation:
    /// No cars will collide with each other. Thus, the total number of 
    /// collisions that will happen on the road is 0.
    /// 
    /// Constraints:
    /// 1. 1 <= directions.length <= 10^5
    /// 2. directions[i] is either 'L', 'R', or 'S'.
    /// </summary>
    int countCollisions(string directions);

    /// <summary>
    /// Leet Code 2281. Sum of Total Strength of Wizards
    ///                                                           
    /// Hard
    /// 
    /// As the ruler of a kingdom, you have an army of wizards at your command.
    ///
    /// You are given a 0-indexed integer array strength, where strength[i] 
    /// denotes the strength of the ith wizard. For a contiguous group of 
    /// wizards (i.e. the wizards' strengths form a subarray of strength), 
    /// the total strength is defined as the product of the following two 
    /// values:
    ///
    /// The strength of the weakest wizard in the group.
    /// The total of all the individual strengths of the wizards in the group.
    /// Return the sum of the total strengths of all contiguous groups of 
    /// wizards. Since the answer may be very large, return it modulo 10^9 + 7.
    ///
    /// A subarray is a contiguous non-empty sequence of elements within an 
    /// array.
    /// 
    /// Example 1:
    /// Input: strength = [1,3,1,2]
    /// Output: 44
    /// Explanation: The following are all the contiguous groups of wizards:
    /// - [1] from [1,3,1,2] has a total strength of 
    ///   min([1]) * sum([1]) = 1 * 1 = 1
    /// - [3] from [1,3,1,2] has a total strength of 
    ///   min([3]) * sum([3]) = 3 * 3 = 9
    /// - [1] from [1,3,1,2] has a total strength of 
    ///   min([1]) * sum([1]) = 1 * 1 = 1
    /// - [2] from [1,3,1,2] has a total strength of 
    ///   min([2]) * sum([2]) = 2 * 2 = 4
    /// - [1,3] from [1,3,1,2] has a total strength of 
    ///   min([1,3]) * sum([1,3]) = 1 * 4 = 4
    /// - [3,1] from [1,3,1,2] has a total strength of 
    ///   min([3,1]) * sum([3,1]) = 1 * 4 = 4
    /// - [1,2] from [1,3,1,2] has a total strength of 
    ///   min([1,2]) * sum([1,2]) = 1 * 3 = 3
    /// - [1,3,1] from [1,3,1,2] has a total strength of 
    ///   min([1,3,1]) * sum([1,3,1]) = 1 * 5 = 5
    /// - [3,1,2] from [1,3,1,2] has a total strength of 
    ///   min([3,1,2]) * sum([3,1,2]) = 1 * 6 = 6
    /// - [1,3,1,2] from [1,3,1,2] has a total strength of 
    ///   min([1,3,1,2]) * sum([1,3,1,2]) = 1 * 7 = 7
    /// The sum of all the total strengths is 1 + 9 + 1 + 4 + 4 + 4 + 3 + 
    /// 5 + 6 + 7 = 44.
    ///
    /// Example 2:
    /// Input: strength = [5,4,6]
    /// Output: 213
    /// Explanation: The following are all the contiguous groups of wizards: 
    /// - [5] from [5,4,6] has a total strength of 
    ///   min([5]) * sum([5]) = 5 * 5 = 25
    /// - [4] from [5,4,6] has a total strength of 
    ///   min([4]) * sum([4]) = 4 * 4 = 16
    /// - [6] from [5,4,6] has a total strength of 
    ///   min([6]) * sum([6]) = 6 * 6 = 36
    /// - [5,4] from [5,4,6] has a total strength of 
    ///   min([5,4]) * sum([5,4]) = 4 * 9 = 36
    /// - [4,6] from [5,4,6] has a total strength of 
    ///   min([4,6]) * sum([4,6]) = 4 * 10 = 40
    /// - [5,4,6] from [5,4,6] has a total strength of 
    ///   min([5,4,6]) * sum([5,4,6]) = 4 * 15 = 60
    /// The sum of all the total strengths is 25 + 16 + 
    /// 36 + 36 + 40 + 60 = 213.
    ///
    /// Constraints:
    /// 1. 1 <= strength.length <= 10^5
    /// 2. 1 <= strength[i] <= 10^9
    /// </summary>
    int totalStrength(vector<int>& strength);

    /// <summary>
    /// Leet Code 2289. Steps to Make Array Non-decreasing
    ///                                                           
    /// Medium
    /// 
    /// You are given a 0-indexed integer array nums. In one step, remove all 
    /// elements nums[i] where nums[i - 1] > nums[i] for all 
    /// 0 < i < nums.length.
    /// Return the number of steps performed until nums becomes a non-
    /// decreasing array.
    /// 
    /// Example 1:
    /// Input: nums = [5,3,4,4,7,3,6,11,8,5,11]
    /// Output: 3
    /// Explanation: The following are the steps performed:
    /// - Step 1: [5,3,4,4,7,3,6,11,8,5,11] becomes [5,4,4,7,6,11,11]
    /// - Step 2: [5,4,4,7,6,11,11] becomes [5,4,7,11,11]
    /// - Step 3: [5,4,7,11,11] becomes [5,7,11,11]
    /// [5,7,11,11] is a non-decreasing array. Therefore, we return 3.
    ///
    /// Example 2:
    /// Input: nums = [4,5,7,7,13]
    /// Output: 0
    /// Explanation: nums is already a non-decreasing array. Therefore, 
    /// we return 0.
    /// 
    /// Constraints:
    /// 1. 1 <= nums.length <= 10^5
    /// 2. 1 <= nums[i] <= 10^9
    /// </summary>
    int totalSteps(vector<int>& nums);

    /// <summary>
    /// Leet Code 2282. Number of People That Can Be Seen in a Grid
    ///                                                           
    /// Medium
    /// 
    /// You are given an m x n 0-indexed 2D array of positive integers 
    /// heights where heights[i][j] is the height of the person standing at 
    /// position (i, j).
    ///
    /// A person standing at position (row1, col1) can see a person standing 
    /// at position (row2, col2) if:
    ///
    /// The person at (row2, col2) is to the right or below the person at 
    /// (row1, col1). More formally, this means that either row1 == row2 
    /// and col1 < col2 or row1 < row2 and col1 == col2.
    /// Everyone in between them is shorter than both of them.
    /// Return an m x n 2D array of integers answer where answer[i][j] is 
    /// the number of people that the person at position (i, j) can see.
    ///
    /// Example 1:
    /// Input: heights = [[3,1,4,2,5]]
    /// Output: [[2,1,2,1,0]]
    /// Explanation:
    /// - The person at (0, 0) can see the people at (0, 1) and (0, 2).
    ///   Note that he cannot see the person at (0, 4) because the person 
    ///   at (0, 2) is taller than him.
    /// - The person at (0, 1) can see the person at (0, 2).
    /// - The person at (0, 2) can see the people at (0, 3) and (0, 4).
    /// - The person at (0, 3) can see the person at (0, 4).
    /// - The person at (0, 4) cannot see anybody.
    ///
    /// Example 2:
    /// Input: heights = [[5,1],[3,1],[4,1]] 
    /// Output: [[3,1],[2,1],[1,0]]
    /// Explanation:
    /// - The person at (0, 0) can see the people at (0, 1), (1, 0) and (2, 0).
    /// - The person at (0, 1) can see the person at (1, 1).
    /// - The person at (1, 0) can see the people at (1, 1) and (2, 0).
    /// - The person at (1, 1) can see the person at (2, 1).
    /// - The person at (2, 0) can see the person at (2, 1).
    /// - The person at (2, 1) cannot see anybody.
    /// 
    /// Constraints:
    /// 1. 1 <= heights.length <= 400
    /// 2. 1 <= heights[i].length <= 400
    /// 3. 1 <= heights[i][j] <= 10^5
    /// </summary>
    vector<vector<int>> seePeople(vector<vector<int>>& heights);

    /// <summary>
    /// Leet Code 2297. Jump Game IX
    ///                                                           
    /// Medium
    /// 
    /// You are given a 0-indexed integer array nums of length n. You are 
    /// initially standing at index 0. You can jump from index i to index 
    /// j where i < j if:
    ///
    /// nums[i] <= nums[j] and nums[k] < nums[i] for all indexes k in the 
    /// range i < k < j, or
    /// nums[i] > nums[j] and nums[k] >= nums[i] for all indexes k in the 
    /// range i < k < j.
    /// You are also given an integer array costs of length n where 
    /// costs[i] denotes the cost of jumping to index i.
    ///
    /// Return the minimum cost to jump to the index n - 1.
    /// 
    /// Example 1:
    /// Input: nums = [3,2,4,4,1], costs = [3,7,6,4,2]
    /// Output: 8
    /// Explanation: You start at index 0.
    /// - Jump to index 2 with a cost of costs[2] = 6.
    /// - Jump to index 4 with a cost of costs[4] = 2.
    /// The total cost is 8. It can be proven that 8 is the minimum cost 
    /// needed.
    /// Two other possible paths are from index 0 -> 1 -> 4 and 
    /// index 0 -> 2 -> 3 -> 4.
    /// These have a total cost of 9 and 12, respectively.
    ///
    /// Example 2:
    /// Input: nums = [0,1,2], costs = [1,1,1]
    /// Output: 2
    /// Explanation: Start at index 0.
    /// - Jump to index 1 with a cost of costs[1] = 1.
    /// - Jump to index 2 with a cost of costs[2] = 1.
    /// The total cost is 2. Note that you cannot jump directly from 
    /// index 0 to index 2 because nums[0] <= nums[1].
    /// 
    /// Constraints:
    /// 1. n == nums.length == costs.length
    /// 2. 1 <= n <= 10^5
    /// 3. 0 <= nums[i], costs[i] <= 10^5
    /// </summary>
    long long minCost(vector<int>& nums, vector<int>& costs);

#pragma endregion
};
#endif  // LeetCodeStack
