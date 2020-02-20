def find_range(nums):
    nums = list(nums)

    for i in range(len(nums) - 1):
        if nums[i] < nums[i + 1]:
            range_start = nums[i]
            

    print("Minimum range needed to sort lies between %s and %s" % (range_start, range_end))

find_range([1, 7, 9, 5, 7, 8, 10])