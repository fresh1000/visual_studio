using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Class11;
using Class22;
using Class33;
using IPluginNamespace;
using ClassLibrary1;

namespace MainTest
{
    class Program
    {
        static void Main(string[] args)
        {
            IModule class1 = new Class1();
            class1.initialize();
            IModule class2 = new Class2();
            class2.initialize();
            IPlugin class3 = new Class3();
            class3.create();
        }
    }
}
