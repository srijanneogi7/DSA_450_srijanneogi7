from statistics import median
from math import floor,ceil
    
class Solution:
    def MedianOfArrays(self, array1, array2):
        array1+=array2
        med=median(array1)
        if(floor(med)==ceil(med)):
            return int(med)
        
        return med
