
class cal_c<T extends Number>{
    T a;
    T b;
    cal_c(T val1,T val2){ 
        a = val1; 
        b = val2;
    }

    public T add(){
        if(a instanceof Integer)
            return (T)Integer.valueOf(a.intValue()+b.intValue());
        else if(a instanceof Double)    
            return (T) Double.valueOf(a.doubleValue()+b.doubleValue());
        else
            throw new UnsupportedOperationException("Unsupported data type for addition");
    }

    public T subtract(){
        if(a instanceof Integer)
            return (T)Integer.valueOf(a.intValue()-b.intValue());
        else if(a instanceof Double)    
            return (T) Double.valueOf(a.doubleValue()-b.doubleValue());
        else
            throw new UnsupportedOperationException("Unsupported data type for addition");
    }
}






public class calculator {
    
}
