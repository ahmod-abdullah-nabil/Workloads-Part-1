using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Adding_two_intreger_numbers
{
    public partial class Summation : Form
    {
        public Summation()
        {
            InitializeComponent();
        }

        private void btn_Click(object sender, EventArgs e)
        {
            int a, b, add;
            a = Convert.ToInt32(firstbox.Text); 
            b = Convert.ToInt32(secondbox.Text);
            add = a + b;
            MessageBox.Show(add.ToString());
        }
    }
}
