#include <stdio.h>
int main() { int a = 0; int b = 10;
    
    if (a == b) { printf("%d equals %d\n",a,b);
    }
    else { printf("%d does not equal %d\n",a,b);
    }
    if (a != b) { printf("%d does not equal %d\n",a,b);
    }
    else { printf("%d equals %d\n",a,b);
    }
    if (a > b) { printf("%d is greater than %d\n",a,b);
    }
    else { printf("%d is not greater than or equal to %d\n",a,b);
    }
        if (a >= b) { printf("%d is greater than or equal to %d\n",a,b);
    }
    else { printf("%d is not greater than or equal to %d\n",a,b);
    }
        if (a == 0 && b == 0) { printf("%d is equal to zero and %d is equal to zero\n",a,b);
    }
    else { printf("%d or %d do not equal zero\n",a,b);
    }
            if (a == 0 || b == 0) { printf("%d or %d equal zero\n",a,b);
    }
    else { printf("%d and %d do not equal zero\n",a,b);
    }
            if (!(a == 0)) { printf("%d is not equal to zero\n",a);
    }
    else { printf("%d is equal to zero\n",a);
    }
    return 0;
}
