class Solution {
	public double angleClock(int hour, int minutes) {
		if (hour >= 12) hour = hour - 12 ;
		double min_angle = minutes * 6 ;
		double hou_angle = (hour * 30) + (minutes * 0.5) ;
		return Math.min(Math.abs(min_angle - hou_angle), 360 - Math.abs(min_angle - hou_angle)) ;
	}
}