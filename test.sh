dodajBT.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Model model = null;
                if(isEmptyField(nazwa)) return;
      if(isEmptyField(skladniki)) return;
                if(isEmptyField(instrukcje)) return;
                try {
                    model = new Model(-1 ,nazwa.getText().toString(),
skladniki.getText().toString(), instrukcje.getText().toString(),item
);
Toast.makeText(
DodajPrzepis.this, 
"Dodano przepis: " + nazwa.getText().toString(), 
Toast.LENGTH_SHORT
).show();

                    Intent intent = 
new Intent(DodajPrzepis.this, Lista.class);
                    startActivity(intent);
                }
catch (Exception e){ 
Toast.makeText(DodajPrzepis.this, 
"Nie można dodać", 
Toast.LENGTH_SHORT).show(); 
}
                BazaDanych bazaDanych = 
new BazaDanych(DodajPrzepis.this);
                boolean success = bazaDanych.dodajPozycje(model);
            	}
        	});
