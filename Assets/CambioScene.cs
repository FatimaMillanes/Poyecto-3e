using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CambioScene : MonoBehaviour
{
    public Button miBoton;

    public void Start()
    {
        miBoton.onClick.AddListener(CargarNuevaEscena);
    }

    public void CargarNuevaEscena()
    {
        SceneManager.LoadScene("DemoScene_01");
    }
}