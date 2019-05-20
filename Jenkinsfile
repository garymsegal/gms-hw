node {
		stage ('Clean') {
			deleteDir ()
		}
		stage ('Checkout') {
			checkut scm
		}
		stage ('Build') {
			sh 'make'
		}
}
