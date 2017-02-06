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
public class Movie {
    private String movieName;
    private String releaseDate;
    private String directorName;
    private int    totalVotes;
    private int    totalRating;
    
    public Movie(String name, String date, String director){
        movieName = name;
        releaseDate = date;
        directorName = director;
        totalRating = 0;
        totalVotes = 0;
    }
    
    
    
    public void addRating(int rating){
        totalRating = totalRating + rating;
        totalVotes = totalVotes +1;
    }
    public double getRating(){
        return ((double)totalRating)/totalVotes;
    }
    public String getMovieName(){
        return movieName;
    }
    public String getdirectorName(){
        return directorName;
    }
    public String getReleaseDate(){
        return releaseDate;
    }
    
}
