/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculator1;

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
    private Double newNumber;
    String currentNumber;
    private String currentOperation;
   
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    

    @FXML
    private void handleOperationButtonAction(ActionEvent event) {
        currentNumber = displayField.getText();
        newNumber = Double.parseDouble(currentNumber);
        displayField.setText("");
        currentOperation =((Button) event.getSource()).getText();
        
        
        
    }

    @FXML
    private void handleAllDeleteButtonAction(ActionEvent event) {
        displayField.setText("");
        
        
    }

    @FXML
    private void handleOneDeleteButtonAction(ActionEvent event) {
        int length = displayField.getText().length();
        int number = displayField.getText().length()-1;
        String store;
        
        
        if(length>0){
            
            StringBuilder back ;
            back = new StringBuilder (displayField.getText());
            back.deleteCharAt(number);
            store = back.toString();
            displayField.setText(store);
            
            
        }
        
    }

    @FXML
    private void handleDigitButtonAction(ActionEvent event) {
        String digit = ((Button)event.getSource()).getText();
        String oldText = displayField.getText();
        String newText = oldText + digit;
        displayField.setText(newText);
    }

    @FXML
    private void handleDotButtonAction(ActionEvent event) {
        displayField.setText(displayField.getText()+ ".");
    }

    @FXML
    private void handleEqualsButtonAction(ActionEvent event) {
        String newText = displayField.getText();
        Double neweastNumber = Double.parseDouble(newText);
        
        switch(currentOperation){
            
            case"+":
                newNumber = newNumber + neweastNumber;
                break;
            case"-":
                newNumber = newNumber - neweastNumber;
                break;
            case"*":
                newNumber = newNumber * neweastNumber;
                break;
            case"/":
                newNumber = newNumber / neweastNumber;
                break;
           // case"^":
               // currentNumber = currentNumber  neweastNumber;
               // break;
            default:
                break;
        }
        displayField.setText(newNumber +"");
    }
    
}
