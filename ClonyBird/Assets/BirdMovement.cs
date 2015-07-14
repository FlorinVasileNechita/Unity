using UnityEngine;
using System.Collections;

public class BirdMovement : MonoBehaviour {
	float flapSpeed = 90f;
	float forwardSpeed = 1f;
	float deathCooldown;
	public bool dead = false;

	Rigidbody2D bird;
	Animator animator;

	bool didFlap = false;

	// Use this for initialization
	void Start () {
		bird = GetComponent<Rigidbody2D>();
		animator = GetComponentInChildren<Animator>();

	}

	//Graphics and Inputs go here
	void Update() {
		if (dead) {
			deathCooldown -= Time.deltaTime;
			if (deathCooldown  <= 0)
				if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0))
					Application.LoadLevel(Application.loadedLevel);


		}
		else {
			if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0)) {
				didFlap = true;
			}
		}
	}
	
	// Physics go here
	void FixedUpdate () {
		if (dead) return;

		bird.AddForce(Vector2.right * forwardSpeed);

		if (didFlap) {
			didFlap = false;

			animator.SetTrigger("DoFlap");

			if (bird.velocity.y < 0) 
				bird.velocity = Vector2.right;

			bird.AddForce(Vector2.up * flapSpeed);
		}

		float angle = 0;
		if (bird.velocity.y < 0.25f) 
			angle = Mathf.Lerp(0, -90, -(bird.velocity.y+0.25f) / 2f);
		transform.rotation = Quaternion.Euler(0,0,angle);
	}
	
	void OnCollisionEnter2D(Collision2D collision) {
		animator.SetTrigger("Death");
		dead = true;
		deathCooldown = 0.5f;
	}




//		velocity.x = forwardSpeed;
//		velocity.y = gravity * Time.deltaTime;
//
//		if (didFlap) {
//			didFlap = false;
//			velocity.y = (velocity.y < 0)? 0:velocity.y;
//			velocity += flapVelocity;
//		}
//
//		velocity = Vector3.ClampMagnitude(velocity, maxSpeed);
//
//		transfrom.position += velocity * Time.deltaTime;
//
//
//		float angle = 0;
//		if (velocity.y < 0) {
//			angle = Mathf.Lerp(0, -90, -velocity.y / maxSpeed);
//		}
//		transform.rotation = Quaternion.Euler (0, 0, angle);

}