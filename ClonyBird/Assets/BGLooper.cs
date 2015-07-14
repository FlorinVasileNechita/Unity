using UnityEngine;
using System.Collections;

public class BGLooper : MonoBehaviour {

	int numBGPanels = 6;
	float pipeMax = 0.52f;
	float pipeMin = -0.52f;

	void Start() {
		GameObject[] pipes = GameObject.FindGameObjectsWithTag("Pipe");

		foreach(GameObject pipe in pipes){
			Vector3 pos = pipe.transform.position;
			pos.y = Random.Range(pipeMin,pipeMax);
			pipe.transform.position = pos;
		}
	}

	void OnTriggerEnter2D(Collider2D collider) {
		float widthOfBGObject = ((BoxCollider2D)collider).size.x;

		Vector3 pos = collider.transform.position;
		pos.x += widthOfBGObject * numBGPanels - widthOfBGObject/2f;

		if (collider.tag == "Pipe") {
			pos.x += widthOfBGObject/2f;
			pos.y = Random.Range(pipeMin,pipeMax);
		}

		collider.transform.position = pos;

	}
}