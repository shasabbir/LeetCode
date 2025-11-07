"""
Test file for Python LeetCode solutions
Example: Testing array-related problems
"""

import pytest


# Mock solution for demonstration
def merge(nums1, m, nums2, n):
    """Merge two sorted arrays"""
    p1 = m - 1
    p2 = n - 1
    p = m + n - 1

    while p1 >= 0 and p2 >= 0:
        if nums1[p1] > nums2[p2]:
            nums1[p] = nums1[p1]
            p1 -= 1
        else:
            nums1[p] = nums2[p2]
            p2 -= 1
        p -= 1

    while p2 >= 0:
        nums1[p] = nums2[p2]
        p -= 1
        p2 -= 1

    return nums1


@pytest.mark.easy
@pytest.mark.array
def test_merge_sorted_array():
    """Test merge two sorted arrays"""
    nums1 = [1, 2, 3, 0, 0, 0]
    nums2 = [2, 5, 6]
    result = merge(nums1, 3, nums2, 3)
    assert result == [1, 2, 2, 3, 5, 6]


@pytest.mark.easy
@pytest.mark.array
def test_merge_empty_second():
    """Test merge with empty second array"""
    nums1 = [1]
    nums2 = []
    result = merge(nums1, 1, nums2, 0)
    assert result == [1]


@pytest.mark.easy
@pytest.mark.array
def test_merge_empty_first():
    """Test merge with empty first array"""
    nums1 = [0]
    nums2 = [1]
    result = merge(nums1, 0, nums2, 1)
    assert result == [1]


@pytest.mark.easy
@pytest.mark.array
def test_merge_single_elements():
    """Test merge with single elements in each array"""
    nums1 = [2, 0]
    nums2 = [1]
    result = merge(nums1, 1, nums2, 1)
    assert result == [1, 2]
