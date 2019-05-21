node {
		stage ('Clean') {
			deleteDir ()
		}
		stage ('Checkout') {
			checkout scm
		}
		stage ('Coverity Build') {
			sh 'cov-build --dir idir make'
			// sh './hello'
		}
		stage ('Coverity analyze') {
		      sh 'cov-analyze --dir idir'
		}
		stage ('Coverity commit') {
		      sh 'cov-commit-defects --dir idir --stream HelloWorld --host localhost --port 8081 --authkeyfile ak-192.168.1.88-8081'
		}
}
