using UnityEngine;
using System.Collections;

public class BirdReskin : MonoBehaviour {
	public Sprite[] birdSprites;
	int numOfSprites = 3;
	int spriteIndex;

	// Use this for initialization
	void Start () {	
		spriteIndex = Random.Range (0,numOfSprites);
	}
	
	// LateUpdate is called once per frame after Update
	// Order is Update() -> Animator -> LateUpdate()
	void LateUpdate () {
		SpriteRenderer render = GetComponent<SpriteRenderer>();
		for (int i = 0; i < 3; i++) if (render.sprite.name == birdSprites[i].name)
			render.sprite = birdSprites[i+spriteIndex*numOfSprites];
	}
}
