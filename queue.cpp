// Problem link:
// https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=1&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio


class queue() {

	int size;
	int qfront;
	int rear;
	int *arr;

	public:
		queue() {

			size = 10001;
			arr = new int[size];
			qfront = 0;
			rear = 0;
		}

		void enque(int data) {

			if (rear == size) {
				return "queue is full";
			}
			else {
				arr[rear] = data;
				rear++;
			}
		}

		void deque() {
			if(qfront == rear) {

				return -1;
			}

			else {

				int ans = arr[qfront];
				qfront = -1;
				qfront++;

				if(qfront == rear) {
					qfront = 0;
					rear = 0;
				}
				return ans;
			}
		}	

		bool isEmpty() {

			if(qfront == rear) {
				return true;
			}

			else {
				return false;
			}
		}

		void front() {

			if(qfront == rear) {
				return -1;
			}

			else {
				return arr[qfront];
			}
		}
}