using UnityEngine;
using System.Collections;

public class Score : MonoBehaviour {

	static int score = 0;
	static int highScore = 0;

	static public void AddPoint() {
		score++;
		highScore = (score > highScore)? score:highScore;
	}

	GUIText guitext;

	void Start() {
		guitext = GetComponent<GUIText>();
	}

	void Update () {
		guitext.text = "Score: " + score + "\nHigh Score: " + highScore;

	}
}
