using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Largest_of_three_numbers
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int first_number = Convert.ToInt32(textBox1.Text);
            int second_number = Convert.ToInt32(textBox2.Text);
            int third_number = Convert.ToInt32(textBox3.Text);
            MessageBox.Show(lergest_number(first_number, second_number, third_number).ToString());
        }
        int lergest_number(int a, int b, int c)
        {
            if (a > b)
            {
                if (a > c)
                {
                    return a;
                }
                else
                {
                    return c;
                }
            }
            else
            {
                if (b > c)
                {
                    return b;
                }
                else
                {
                    return c;
                }
            }
        }
    }
}
