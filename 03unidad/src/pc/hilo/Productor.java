package pc.hilo;

import java.util.Random;

import pc.inter.Buffer;

public class Productor extends Thread {
	Buffer b;
	public Productor(Buffer b) {
		this.b = b;
	}
	@Override
	public void run() {
		while(true) {
			b.setValor(new Random().nextInt(10)+1);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}
