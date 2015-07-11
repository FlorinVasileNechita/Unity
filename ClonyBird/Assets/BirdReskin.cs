using UnityEngine;
using System.Collections;

public class BirdReskin : MonoBehaviour {

	public Sprite[] birdSprites;
	int spriteNum;

	// Use this for initialization
	void Start () {	
		spriteNum = Random.Range (0,3);
	}
	
	// Update is called once per frame
	void Update () {
		StartCoroutine(Reskin());
	}

	IEnumerator Reskin() {
		while (true)
		for (int i=spriteNum*12; i < spriteNum*12+12; i++) { //numOfFrames(4) * numOfSprites(3)
			this.gameObject.GetComponent<SpriteRenderer>().sprite = birdSprites[i/4];
			yield return 0;
		}
	}
}
