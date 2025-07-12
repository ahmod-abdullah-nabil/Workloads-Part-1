namespace Adding_two_intreger_numbers
{
    partial class Summation
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.First_number = new System.Windows.Forms.Label();
            this.Second_number = new System.Windows.Forms.Label();
            this.firstbox = new System.Windows.Forms.TextBox();
            this.secondbox = new System.Windows.Forms.TextBox();
            this.btn = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // First_number
            // 
            this.First_number.AutoSize = true;
            this.First_number.Font = new System.Drawing.Font("Verdana", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.First_number.Location = new System.Drawing.Point(139, 99);
            this.First_number.Name = "First_number";
            this.First_number.Size = new System.Drawing.Size(163, 23);
            this.First_number.TabIndex = 0;
            this.First_number.Text = "First_number:";
            // 
            // Second_number
            // 
            this.Second_number.AutoSize = true;
            this.Second_number.Font = new System.Drawing.Font("Verdana", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Second_number.Location = new System.Drawing.Point(139, 176);
            this.Second_number.Name = "Second_number";
            this.Second_number.Size = new System.Drawing.Size(193, 23);
            this.Second_number.TabIndex = 1;
            this.Second_number.Text = "Second_number:";
            // 
            // firstbox
            // 
            this.firstbox.Font = new System.Drawing.Font("Verdana", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.firstbox.Location = new System.Drawing.Point(378, 99);
            this.firstbox.Name = "firstbox";
            this.firstbox.Size = new System.Drawing.Size(243, 31);
            this.firstbox.TabIndex = 2;
            // 
            // secondbox
            // 
            this.secondbox.Font = new System.Drawing.Font("Verdana", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.secondbox.Location = new System.Drawing.Point(378, 176);
            this.secondbox.Name = "secondbox";
            this.secondbox.Size = new System.Drawing.Size(243, 31);
            this.secondbox.TabIndex = 3;
            // 
            // btn
            // 
            this.btn.Font = new System.Drawing.Font("Verdana", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn.Location = new System.Drawing.Point(143, 253);
            this.btn.Name = "btn";
            this.btn.Size = new System.Drawing.Size(206, 54);
            this.btn.TabIndex = 4;
            this.btn.Text = "Add";
            this.btn.UseVisualStyleBackColor = true;
            this.btn.Click += new System.EventHandler(this.btn_Click);
            // 
            // Summation
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btn);
            this.Controls.Add(this.secondbox);
            this.Controls.Add(this.firstbox);
            this.Controls.Add(this.Second_number);
            this.Controls.Add(this.First_number);
            this.Name = "Summation";
            this.Text = "Summation";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label First_number;
        private System.Windows.Forms.Label Second_number;
        private System.Windows.Forms.TextBox firstbox;
        private System.Windows.Forms.TextBox secondbox;
        private System.Windows.Forms.Button btn;
    }
}

