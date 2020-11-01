# -*- mode: python ; coding: utf-8 -*-

block_cipher = None


SETUP_DIR = 'F:\\blog\\163MusicSA_PE\\'

a = Analysis(['main.py'],
             pathex=['F:\\blog\\163MusicSA_PE'],
             binaries=[],
             datas=[(SETUP_DIR+'static','.'),(SETUP_DIR+'data','data'),(SETUP_DIR+'icon','icon'),(SETUP_DIR+'src\\img','src\\img')],
             hiddenimports=[],
             hookspath=[],
             runtime_hooks=[],
             excludes=[],
             win_no_prefer_redirects=False,
             win_private_assemblies=False,
             cipher=block_cipher,
             noarchive=False)
pyz = PYZ(a.pure, a.zipped_data,
             cipher=block_cipher)
exe = EXE(pyz,
          a.scripts,
          a.binaries,
          a.zipfiles,
          a.datas,
          [],
          name='main',
          debug=False,
          bootloader_ignore_signals=False,
          strip=False,
          upx=True,
          upx_exclude=[],
          runtime_tmpdir=None,
          console=False )
