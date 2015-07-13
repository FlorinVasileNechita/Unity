using UnityEngine;
using System.Collections;

public class GroundMover : MonoBehaviour {
	Rigidbody2D player;

	void Start () {
		player = GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>();
	
	}

	void FixedUpdate() {
		float vel = player.velocity.x * 0.75f;
		transform.position += Vector3.right * vel * Time.deltaTime;

	}

}
