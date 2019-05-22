node {
		stage ('Clean') {
			deleteDir ()
		}
		stage ('Checkout') {
			checkout scm
			// sh 'chmod 400 ak-192.168.1.88-8081'
		}
		stage ('Coverity Build') {
			sh '/home/siguser/cov-analysis-2019.03/bin/cov-build --dir idir make'
			// sh './hello'
		}
		stage ('Coverity analyze') {
		      sh '/home/siguser/cov-analysis-2019.03/bin/cov-analyze --dir idir'
		}
		stage ('Coverity commit') {
		      sh '/home/siguser/cov-analysis-2019.03/bin/cov-commit-defects --dir idir --stream HelloWorld --host localhost --port 8081 --user admin --password SIGpass8!'
			  //sh '/home/siguser/cov-analysis-2019.03/bin/cov-commit-defects --dir idir --stream HelloWorld --host localhost --port 8081 --auth-key-file ak-192.168.1.88-8081' 
		}
}
