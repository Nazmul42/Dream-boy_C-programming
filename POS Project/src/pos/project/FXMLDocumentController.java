/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pos.project;


import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.net.URL;
import java.util.ResourceBundle;
import java.util.logging.Level;
import java.util.logging.Logger;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author User
 */
public class FXMLDocumentController implements Initializable {
    
    @FXML
    private Label label;
    @FXML
    private TextField ProductIdField;
    @FXML
    private TextField productNameField;
    @FXML
    private TextField ProductCategoryField;
    @FXML
    private TextField priceField;
    
    private Product products[];
   
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
       products = new Product[200];
    }    

    @FXML
    private void handleSaveButtonAction(ActionEvent event)  {
        int id = Integer.parseInt(ProductIdField.getText());
        String name = productNameField.getText();
        String category = ProductCategoryField.getText();
        double price = Double.parseDouble(priceField.getText());
        
        Product p = new Product (id, name, category, price);
        
        try {
            RandomAccessFile output = new RandomAccessFile("product.txt", "rw");
            output.seek(output.length());
            output.writeBytes(p.getId() + "\n");
            output.writeBytes(p.getName() + "\n");
            output.writeBytes(p.getCategory() + "\n");
            output.writeBytes(p.getPrice() + "\n");
            
            
            ProductIdField.setText("");
            productNameField.setText("");
            ProductCategoryField.setText("");
            priceField.setText("");
            
        } catch (FileNotFoundException ex) {
            Logger.getLogger(FXMLDocumentController.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(FXMLDocumentController.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    @FXML
    private void handleLoadButtonAction(ActionEvent event) {
       
        try {
            RandomAccessFile input = new RandomAccessFile("product.txt","r");
            String line;
            for(int i=0; ; i++){
            line = input.readLine();
            if(line==null)break;
            int id = Integer.parseInt(line);
            line = input.readLine();
            String name = line;
            line = input.readLine();
            String category = line;
            line = input.readLine();
            double price = Double.parseDouble(line);
            
            Product p = new Product (id, name, category, price);
            products[0] = p;
            }
            ProductIdField.setText(products[0].getId() + "");
            productNameField.setText(products[0].getName() );
            ProductCategoryField.setText(products[0].getCategory());
            priceField.setText(products[0].getPrice() + "");
            
            
            
        } catch (FileNotFoundException ex) {
            Logger.getLogger(FXMLDocumentController.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(FXMLDocumentController.class.getName()).log(Level.SEVERE, null, ex);
        }
                
    }

    @FXML
    private void handleNewButtonAction(ActionEvent event) {
            ProductIdField.setText("");
            productNameField.setText("");
            ProductCategoryField.setText("");
            priceField.setText("");
    }

    @FXML
    private void handlePreviousButtonAction(ActionEvent event) {
    }

    @FXML
    private void handleNextButtonAction(ActionEvent event) {
    }
    
}
