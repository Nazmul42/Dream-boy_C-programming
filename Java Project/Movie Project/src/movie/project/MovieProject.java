/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package movie.project;

/**
 *
 * @author User
 */
public class MovieProject {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Movie a = new Movie("Avatar", "2009/08/01", "James Cameron");
        a.addRating(4);
        a.addRating(3);
        a.addRating(2);
        a.addRating(5);
        a.addRating(5);
        System.out.printf("Movie Name: %s rating: %.2f\n", a.getMovieName(),a.getRating());
    
    
}
}