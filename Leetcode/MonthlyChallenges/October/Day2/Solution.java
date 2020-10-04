class Solution {
    private List<List<Integer>> result = new ArrayList<>();
    
    void createAllCombinations(int []candidates, int target, int index, List<Integer> currComb) {
        if (target == 0) {
            result.add(new ArrayList<>(currComb));
            return;
        }
        if (index >= candidates.length || target < 0) {
            return;
        }
        createAllCombinations(candidates, target, index + 1, currComb);
        currComb.add(candidates[index]);
        createAllCombinations(candidates, target - candidates[index], index, currComb);
        currComb.remove(currComb.size()-1);
    }
    
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        result.clear();
        List<Integer> currCombination = new ArrayList<>();
        createAllCombinations(candidates, target, 0, currCombination);
        return result;
    }
}