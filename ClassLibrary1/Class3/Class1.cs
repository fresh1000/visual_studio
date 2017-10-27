using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IPluginNamespace;

namespace Class33
{
    public class Class3: IPlugin 
    {
        void IPlugin.create()
        {
            Console.WriteLine("Create from class 3");
        }
    }
}
