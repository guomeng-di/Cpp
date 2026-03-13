class Solution {
public:
    string intToRoman(int num) {//3999
        string s;
        if(num>1000){
            int curr=num/1000;
            num%=1000;
            if(curr!=4&&curr!=9){
                while(curr--) s+='M';
            }
        }if(num>100){
            int curr=num/100;
            num%=100;
            if(curr==10) s+='M';
            else if(curr==9){
             s+="CM";
            }else if(curr>=5){
             s+='D';
             curr-=5;
             while(curr--) s+='C';
            }else if(curr==4){
             s+="CD";
            }else{
            while(curr--) s+='C';
            }           
        }if(num>10){
            int curr=num/10;
            num%=10;
            if(curr==10) s+='C';
            else if(curr==9){
               s+="XC";
            }else if(curr>=5){
               s+='L';
             curr-=5; 
             while(curr--) s+='X';
            }else if(curr==4){
                s+="XL";
            }else{
                while(curr--) s+='X';
            }
        }if(num>0){
            int curr=num;
            if(curr==10) s+='X';
            else if(curr==9){
                s+="IX";
            }else if(curr>=5){
               s+='V';
             curr-=5; 
             while(curr--) s+='I';                
            }else if(curr==4){
                s+="IV";
            }else{
                while(curr--) s+='I';
            }
        }return s;
    }
};