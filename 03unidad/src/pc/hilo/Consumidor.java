package pc.hilo;

import pc.inter.Buffer;

public class Consumidor extends Thread {
	Buffer b;
	public Consumidor(Buffer b) {
		// TODO Auto-generated constructor stub
		this.b = b;
	}
	@Override
	public void run() {
		while(true) {
			System.out.println(b.getValor());
		}
	}

}
