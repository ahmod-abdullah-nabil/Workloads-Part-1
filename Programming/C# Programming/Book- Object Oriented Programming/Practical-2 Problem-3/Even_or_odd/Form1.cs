using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Even_or_odd
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int first_number, second_number;
                first_number = Convert.ToInt32(textBox1.Text);
                second_number = Convert.ToInt32(textBox2.Text);
                label3.Text = "Result" + check_even_odd(first_number, second_number).ToString();
            }
            catch
            {
                MessageBox.Show("Eror");
            }
        }
            bool check_even_odd(int first_number, int second_number)
            {
                if (((first_number %2 == 0) && (second_number %2 == 1 )) || ((first_number %2 == 1) && (second_number %2 == 0)))
                {
                    return false;
                }
                else
                {
                    return true;
                }

            }
        
    }
}
