using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IPluginNamespace;

namespace ClassLibrary1
{
    public interface IModule
    {
        void method(IPlugin obj);
        void initialize();
    }
}
