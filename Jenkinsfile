node {
	def workspace = pwd()
	try {
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
}
