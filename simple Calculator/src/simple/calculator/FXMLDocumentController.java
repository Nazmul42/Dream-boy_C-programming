/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package simple.calculator;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextArea;

/**
 *
 * @author User
 */
public class FXMLDocumentController implements Initializable {
    
    @FXML
    private Label label;
    @FXML
    private TextArea displayField;
    
    
   // private String currentText;
    private Double currentNumber;      
    private String currentOperation;
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    } 

    @FXML
    private void handleDigitButtonAction(ActionEvent event) {
        String digit = ((Button) event.getSource()).getText();
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
    private void handleEquleButtonAction(ActionEvent event) {
        String newText = displayField.getText();
        Double newNumber = Double.parseDouble(newText);

        
           
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
    private void handleDeleteButtonAction(ActionEvent event) {
        displayField.setText("");
    }

    @FXML
    private void handleOneDeleteButtonAction(ActionEvent event) {
        int length;
        length = displayField.getText().length();
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
    private void handleDotButtonAction(ActionEvent event) {
        displayField.setText(displayField.getText() + ".");
    }

    @FXML
    private void handleDisableButtonAction(ActionEvent event) {
        displayField.setText("");
    }
    }

    


