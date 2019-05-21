node {
		stage ('Clean') {
			deleteDir ()
		}
		stage ('Checkout') {
			checkout scm
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
		}
}
