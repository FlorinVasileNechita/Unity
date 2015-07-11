using UnityEngine;
using System.Collections;

public class BGLooper : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D collider) {
		Debug.Log ("Triggered: " + collider.name);
	}
}