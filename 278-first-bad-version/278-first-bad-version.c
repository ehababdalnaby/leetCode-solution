// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
     int start=0, end=n, middle;
        while(start<=end){
            middle = start + (end-start)/2;
            if(isBadVersion(middle)==false){
                start = middle+1;
            }else{
                end = middle-1;
            }
        }
        if(isBadVersion(start)==true){
            return start;
        }else if(isBadVersion(end)==true){
            return end;
        }else{
            //No bad version 
            return -1;
        }
        return middle;
}