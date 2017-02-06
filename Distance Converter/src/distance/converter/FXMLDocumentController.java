/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package distance.converter;

import java.net.URL;
import java.util.ResourceBundle;
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
    private TextField yardsDisplayField;
    @FXML
    private TextField feetDisplayField;
    @FXML
    private TextField inchesDisplayField;
    @FXML
    private TextField totalInchesField;
    private int length;
   
    
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    

    @FXML
    private void handleConvertButtonAction(ActionEvent event) {
        length = inchesDisplayField.getText().length();
        length = feetDisplayField.getText().length();
        length = yardsDisplayField.getText().length();
       
        if(totalInchesField.getText().length()>0){
            int totalInches =Integer.parseInt( totalInchesField.getText());
            int inches = (totalInches % 36) % 12;
            int feet = (totalInches % 36)/12;
            int yards = totalInches/36;
            inchesDisplayField.setText("" + inches);
            feetDisplayField.setText("" + feet);
            yardsDisplayField.setText("" + yards);
                    }
        else{
           
              if(length>=0 ){
                int yards = Integer.parseInt(yardsDisplayField.getText());
                int feet = Integer.parseInt(feetDisplayField.getText());
                int inches = Integer.parseInt(inchesDisplayField.getText());
                
                int totalInches = (yards*3 +feet)*12 + inches;
                totalInchesField.setText("" + totalInches);
           
              }
        }
    }
        

    
    }
