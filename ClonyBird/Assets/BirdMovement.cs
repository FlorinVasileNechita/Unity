using UnityEngine;
using System.Collections;

public class BirdMovement : MonoBehaviour {
	public Vector3 flapVelocity;
	public float forwardSpeed;
	public float maxSpeed;
	Vector3 velocity = Vector3.zero;

	bool didFlap = false;

	// Use this for initialization
	void Start () {

	}

	//Graphics and Inputs go here
	void Update() {
		if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0)) {
			didFlap = true;
		}
	}
	
	// Physics go here
	void FixedUpdate () {
		velocity.x = forwardSpeed;

		if (didFlap) {
			didFlap = false;
			velocity.y = (velocity.y < 0)? 0:velocity.y;
			velocity += flapVelocity;
		}

		velocity = Vector3.ClampMagnitude(velocity, maxSpeed);

		GetComponent<Rigidbody2D>().AddForce(velocity);


		float angle = 0;
		if (velocity.y < 0) {
			angle = Mathf.Lerp(0, -90, -velocity.y / maxSpeed);
		}
		transform.rotation = Quaternion.Euler (0, 0, angle);
	}
}