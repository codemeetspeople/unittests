import org.junit.Test;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertThrows;

import app.point.Point;

public class TestPoint {
    public double delta = 0.0;
    public double defaulValue = 0.0;

    @Test
    public void testDefaultConstructor() {
        Point point = new Point();

        assertEquals(this.defaulValue, point.getX(), this.delta);
        assertEquals(this.defaulValue, point.getY(), this.delta);
    }

    @Test
    public void testConstructor() {
        double x = 10.5;
        double y = 1.8;
        Point point = new Point(x, y);
        
        assertEquals(x, point.getX(), delta);
        assertEquals(y, point.getY(), delta);
    }

    @Test
    public void testStringRepresentation() {
        Point point = new Point();

        assertEquals("(0.0, 0.0)", point.toString());
    }

    @Test
    public void testEquals() {
        Point p1 = new Point();
        Point p2 = new Point();
        Point p3 = new Point(1.0, 1.0);

        assertTrue(p1.equals(p2));
        assertFalse(p1.equals(p3));
    }
}
