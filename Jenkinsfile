node {
		stage ('Clean') {
			deleteDir ()
		}
		stage ('Checkout') {
			checkout scm
		}
		stage ('Build') {
			sh 'make'
			sh './hello'
		}
}
