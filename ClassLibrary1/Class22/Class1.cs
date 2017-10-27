using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IPluginNamespace;
using ClassLibrary1;

namespace Class22
{
    public class Class2: IModule
    {
        void IModule.method(IPlugin obj)
        {
            obj.create();
        }

        void IModule.initialize()
        {
            Console.WriteLine("Initialize from class 2");
        }
    }
}
