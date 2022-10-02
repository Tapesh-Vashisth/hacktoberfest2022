# A program to convert inpuyt binary, octal, hexadecimal numbers to decimal numbers
# By: Anish Shilpakar
# GitHub Username: juju2181

#### Function to convert a binary digit to decimal ####
def BinaryToDecimal(binaryData):
    binaryData = int(binaryData)
    decimalData, i = 0,0
    #run the loop if binaryData != 0
    while(binaryData != 0):
        dec = binaryData % 10 # returns the last digit of binary data
        decimalData += dec*pow(2,i) #add the (last digit * 2^i ) to decimal no
        binaryData = binaryData//10 # floor divsion to get remaining digits
        i += 1
    return(decimalData)    

#### Function to convert a octal digit to decimal ####
def OctalToDecimal(octalData):
    octalData = int(octalData)
    decimalData, i = 0,0
    #run the loop if binaryData != 0
    while(octalData != 0):
        dec = octalData % 10 # returns the last digit of binary data
        decimalData += dec*pow(8,i) #add the (last digit * 8^i ) to decimal no
        octalData = octalData//10 # floor divsion to get remaining digits
        i += 1
    return(decimalData)

#### Function to convert a hexadecimal digit to decimal ####
def hexToDecimal(hexData):
    hexData = int(hexData)
    decimalData, i = 0,0
    #run the loop if binaryData != 0
    while(hexData != 0):
        dec = hexData % 10 # returns the last digit of binary data
        decimalData += dec*pow(16,i) #add the (last digit * 16^i ) to decimal no
        hexData = hexData//10 # floor divsion to get remaining digits
        i += 1
    return(decimalData)

print(BinaryToDecimal('1101'))
# print(OctalToDecimal('10'))
# print(hexToDecimal('0A'))
print(int('1101',2))
print(int('0A',16))

text = '001011001010'
for i in range(0,len(text),7):
    temp_data = int(text[i:i+7])
    print(temp_data) 
