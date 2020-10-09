# unittests

## Java

### Download this shit
[JUnit Home](https://github.com/junit-team/junit4/wiki/Download-and-Install)

### Read this shit
[Assert API](https://junit.org/junit4/javadoc/latest/org/junit/Assert.html)

### Test class shit
**Test.java**
```java
import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class TestPoint {
    @Test
    public void testWhatever() {
        // code
    }
}
```

### +/- adequate code structure
```
├── classes
│   └── app
│       └── feature
│           └── YourClass.class
├── src
│   └── app
│       └── feature
│           └── YourClass.java
└── tests
    ├── TestClass.class
    ├── TestClass.java
    ├── hamcrest-core-1.3.jar
    └── junit-4.13.jar
```

### Compile this shit
- Compile source code
```bash
javac -d classes ./src/app/point/YourClass.java
```
- Compile test class (from tests directory)
```
javac -cp .:../classes/:junit-4.13.jar TestClass.java
```
- Run fucking test suite
```
java -cp .:../classes/:junit-4.13.jar:hamcrest-core-1.3.jar org.junit.runner.JUnitCore TestClass
```
