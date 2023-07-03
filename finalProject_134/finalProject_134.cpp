#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	// Jawaban saya

	void setActivity(float nilai) {
		this->activity = nilai;
	}

	float getActivity() {
		return activity;
	}

	void setExercise(float nilai) {
		this->exercise = nilai;
	}

	float getExercise() {
		return exercise;
	}

	void settugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}

	float gettugasAkhir() {
		return tugasAkhir;
	}
	void cek_kelulusan() {
		if (nilai_akhir > 75) {

		}
	}
};

class Pemrograman : public MataKuliah { // Jawaban Saya

};

int main() {// Jawaban Saya
	char repeat;

	do {
		cout << "Program dibuat\n";
		cout << "Masukan nilai Presensi: ";
		int presensi;
		cin >> presensi;

		cout << "Masukan nilai Activity: ";
		int activity;
		cin >> activity;

		cout << "Masukan nilai Exercise: ";
		int exercise;
		cin >> exercise;

		cout << "Masukan nilai Tugas Akhir: ";
		int tugasAkhir;
		cin >> tugasAkhir;

		int nilai_akhir = (presensi + activity + exercise + tugasAkhir) / 4;

		cout << "Selamat, anda lulus mata kuliah pemrograman dengan nilai akhir" << nilai_akhir << "\n";
		cout << "Apakah anda ingin mengulang program? (Y/N): ";
	} while (repeat == 'Y' || repeat == 'N');
	return 0;
}