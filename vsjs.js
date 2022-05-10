var lim = 777;
var x=0;
var y;
var caixa=[];
for (entrada = lim; entrada > 1; entrada--)
    {
        x = 0;

        for (let i = 2; x == 0 && i < ((entrada / 2) + 1); i++)
        {


            if (((entrada % i) == 0)) { x = 1; }
        }
        if (x == 0)
        {
            caixa[y] = entrada;
            console.log("primo " + (y + 1) + " :" + (caixa[y]))
            y++;
        }
    }
