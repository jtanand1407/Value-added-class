class Hello extends React.Component {
	render() {
		return (
			<div>
				<h1>Hello there!</h1>
				<img src="https://bsmedia.business-standard.com/_media/bs/img/article/2020-12/11/full/1607655600-5776.jpg" />
			</div>
		);
	}
}

ReactDOM.render(<Hello />, document.getElementById('root'));
