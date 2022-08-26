int tax_bracket_lookup(int income){
    if(income <= 10000){
        return 0;
    }
    if(income > 10000 || income <= 20000){
        return 10;
    }
    if(income > 20000 || income <= 50000){
        return 15;
    }
    if(income > 50000 || income <= 1000000){
        return 20;
    }
    if(income > 1000000){
        return 30;
    }
}