module.exports.isProcessTrusted = process.platform === 'darwin' ? require("./build/Release/addon").isProcessTrusted : () => { throw new Error('Unsupported platform: ' + process.platform) }
