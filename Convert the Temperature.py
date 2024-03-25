class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        return [celsius + 273.15, 32.00 + 1.80 * celsius]
