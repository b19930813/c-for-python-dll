from ctypes import *
import ctypes

mydll =cdll.LoadLibrary("D:\\Frank\\program\\Python_dll\\Debug\\Python_dll.dll")

values=[2,3,5,6,50 ]
arr=(ctypes.c_int * len(values))(*values)
sdi=mydll.standard_Deviation(arr)
print(sdi)


