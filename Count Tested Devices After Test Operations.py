class Solution:
    def countTestedDevices(self, batteryPercentages: List[int]) -> int:
        
        count_of_tested_devices =  0
        decrement = 0

        for bp in batteryPercentages:
            curr_bp = max(0, bp - decrement)
            if curr_bp == 0:
                continue
            else:
                decrement += 1
                count_of_tested_devices += 1
        
        return count_of_tested_devices