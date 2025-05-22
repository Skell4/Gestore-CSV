# Gestore CSV

Applicazione desktop sviluppata in Qt/C++ per la gestione di file CSV contenenti dati di corsi universitari, studenti e materie.

## Descrizione

Gestore CSV è un'applicazione desktop progettata per la gestione di archivi universitari in formato CSV. Il programma permette di visualizzare, modificare, filtrare e organizzare dati relativi a corsi, materie e studenti attraverso un'interfaccia grafica.

## Funzionalità

### Gestione File
- Caricamento automatico dell'ultimo file utilizzato all'avvio
- Apertura e gestione di file CSV con formato specifico
- Salvataggio automatico delle modifiche

### Ricerca e Filtri
- Ricerca globale in tutti i campi
- Filtri specifici per ogni colonna (codice corso, nome corso, codice materia, nome materia, matricola, cognome, nome)

### Gestione Duplicati
- Rilevamento automatico di studenti duplicati (stesso nome e cognome)
- Possibilità di nascondere temporaneamente i duplicati
- Ripristino completo dei dati originali

### Modifica Dati
- Aggiunta di nuovi record con validazione delle materie esistenti
- Rimozione di record selezionati
- Formattazione automatica in Title Case

## Formato File

Il programma supporta file CSV con il seguente formato:


codice_corso,descrizione_corso,codice_materia,descrizione_materia,matricola_studente,cognome_studente,nome_studente


## Utilizzo

1. Avviare l'applicazione
2. Caricare un file CSV utilizzando il pulsante "Carica File"
3. Utilizzare la barra di ricerca e i filtri per navigare nei dati
4. Gestire i duplicati tramite l'apposito pulsante
5. Aggiungere o rimuovere record secondo necessità
6. Le modifiche vengono salvate automaticamente con la chiusura del programma