
public class UserDetails {
  private String name;
  private String surname;
  private int age;
  private String country;
  private String address;
  private String phone;

  public UserDetails(String name, String surname, int age, String country, String address, String phone) {
    this.name = name;
    this.surname = surname;
    this.age = age;
    this.country = country;
    this.address = address;
    this.phone = phone;
  }

  public String getName() {
    return name;
  }

  public String getSurname() {
    return surname;
  }

  public int getAge() {
    return age;
  }

  public String getCountry() {
    return country;
  }

  public String getAddress() {
    return address;
  }

  public String getPhone() {
    return phone;
  }

  public String toString() {
    return name + "," + surname + "," + age + "," + country + "," + address + "," + phone;
  }
}
