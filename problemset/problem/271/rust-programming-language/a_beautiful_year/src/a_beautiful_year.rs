use std::io::stdin;

//
// Rust program execution starts
// from main() function
//
fn main() -> () {
    let year = read_year();
    'first_for_loop:
    for current_year in year ..= 9999_u16 {
      if are_year_digits_unique( current_year )
         &&
         current_year > year {
        // println!(
        //   "Year: '{}'",
        //   current_year  
        // );
        println!(
          "{}",
          current_year
        );
        break 'first_for_loop;
      }
    } // 'first_for_loop
  /*
   * Return an empty tuple also
   * known as an unit to the
   * underlying operating-system
   */
  return;
}

//
// Read a four-digit year
// from standard-input and
// return the same
//
fn read_year() -> u16 {
    // println!(
    //   "Enter a year: "
    // );
    let mut string_buffer : String = String::new();
    stdin().read_line(&mut string_buffer).expect("Error occurred when reading from standard-input");
    let year : u16 = string_buffer.trim().parse().expect("Error occurred when converting a string-literal to an integer-literal");
    assert!(
      year >= 1000_u16
      &&
      year <= 9000_u16
    );
  return year;
}

//
// Check if all four-digits
// constituting a year are
// unique
//
fn are_year_digits_unique( year : u16 ) -> bool {
    let year_to_digits = year_to_vector_of_digits( year );
    if year_to_digits[0] == year_to_digits[1]
       ||
       year_to_digits[1] == year_to_digits[2]
       ||
       year_to_digits[2] == year_to_digits[3]
       ||
       year_to_digits[3] == year_to_digits[0]
       ||
       year_to_digits[1] == year_to_digits[3]
       ||
       year_to_digits[0] == year_to_digits[2] {
       //
       // Early return
       //
       return false;
    }
  return true;  
}

//
// Convert a year to a
// std::Vec of digits
//
fn year_to_vector_of_digits( mut year : u16 ) -> Vec<u16> {
    let mut year_to_digits : Vec<u16> = vec![0;4];
    const BASE_10 : u16 = 10;
    for index in (0..=3).rev() {
      year_to_digits[index] = year % BASE_10;
      year = year / BASE_10;
    }
  return year_to_digits;
}