using UnityEngine;
using System.Collections;

public class Score : MonoBehaviour {

	static int score;
	static int highScore = 0;
	static BirdMovement bird;


	void Start() {
		score = 0;
		guitext = GetComponent<GUIText>();
		highScore = PlayerPrefs.GetInt("highScore",0);
		bird = GameObject.FindGameObjectWithTag("Player").GetComponent<BirdMovement>();

	}
	

	static public void AddPoint() {
		if (bird.dead) return;
		score++;
		highScore = (score > highScore)? score:highScore;

	}

	GUIText guitext;



	void Update () {
		guitext.text = "Score: " + score + "\nHigh Score: " + highScore;
	}

	void OnDestroy() {
		PlayerPrefs.SetInt("highScore", highScore);


	}
}
