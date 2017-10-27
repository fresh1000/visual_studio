using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ClassLibrary1;
using IPluginNamespace;

namespace Class11
{
    public class Class1: IModule
    {
        void IModule.method(IPlugin obj)
        {
            obj.create();
        }
        void IModule.initialize()
        {
            Console.WriteLine("Initialize from class 1");
        }
    }
}
