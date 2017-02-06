/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculator;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
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
    private TextField displayField;
    private Double currentNumber;
    private String currentOperation;
    private Double newNumber;
    

    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    

    @FXML
    private void handleDigitAction(ActionEvent event) {
        String digit;
        digit = ((Button) event.getSource()).getText();
        String oldText = displayField.getText();
        String newText = oldText + digit;
        displayField.setText(newText);
        
    }

    @FXML
    private void handleOperationAction(ActionEvent event) {
       String currentText = displayField.getText();
       currentNumber = Double.parseDouble(currentText);
       displayField.setText("");
       currentOperation = ((Button) event.getSource()).getText();
       
        
        
        
    }

    @FXML
    private void handleDotAction(ActionEvent event) {
        displayField.setText(displayField.getText()+ ".");
        
    }

    @FXML
    private void handleEqualsction(ActionEvent event) {
        String newText = displayField.getText();
        newNumber = Double.parseDouble(newText);
        
        switch(currentOperation){
            case"+":
                currentNumber = currentNumber + newNumber;
                break;
            case"-":
                currentNumber = currentNumber - newNumber;   
                break;
            case"*":
                currentNumber = currentNumber * newNumber;  
                break;
            case"/":
                currentNumber = currentNumber / newNumber;
                break;
            default:
                break;
                    
        }
        displayField.setText(currentNumber + "");
       
    }

    @FXML
    private void handleDisableAction(ActionEvent event) {
        displayField.setText("");
     
    }

    @FXML
    private void handleOneDeleteAction(ActionEvent event) {
        int length = displayField.getText().length();
        int number = displayField.getText().length()-1;
        String store;

        if(length>0){
            StringBuilder back;
            back = new StringBuilder (displayField.getText());
            back.deleteCharAt(number);
            store = back.toString();
            displayField.setText(store);
            
        }
        
    }

    @FXML
    private void handleAllDeleteAction(ActionEvent event) {
         displayField.setText("");
      
    }
    
}
