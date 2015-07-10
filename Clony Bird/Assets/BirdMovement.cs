using UnityEngine;
using System.Collections;

public class BirdMovement : MonoBehaviour {
	public int health=15;

	// Use this for initialization
	void Start () {
		DamagePlayer (20);
	}

	void DamagePlayer(int damage) {
		health -= damage;
	}

	
	// Update is called once per frame
	void Update () {
		if (health <= 0) {
			Destroy(gameObject, 3f);
			Debug.Log ("The player has died!");
		}
	}
}
