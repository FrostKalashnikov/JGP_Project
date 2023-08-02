#Copyright 2022 Michel Brito.

import moviepy.editor as mpe
import os.path as os

#Get Merge Infos
with open("MergeInfo.ini", "r") as MergeInfo:
    LinesInfo = MergeInfo.readlines()

MergeMode = LinesInfo[0].rstrip()           #Merge Mode
print(MergeMode)
FileFormat = LinesInfo[1].rstrip()          #File Name Format
print(FileFormat)
SourcePath = LinesInfo[2].rstrip()          #Source Path
print(SourcePath)
TargetPath = LinesInfo[3].rstrip()          #Target Path
print(TargetPath)
OutFormat = LinesInfo[4].rstrip()           #Output Format
print(OutFormat)
FrameRate = int(LinesInfo[5].rstrip())      #Frame Rate
print(FrameRate)
CompSpeed = LinesInfo[6].rstrip()           #Compress Speed Preset
print(CompSpeed)
TotalFrames = int(LinesInfo[7].rstrip())    #Total Amount of Frames
print(TotalFrames)


#Merge Video =============================================
def MergeVideo():
    #Merge Video Presets
    OutCodec = "libx264" if (OutFormat != ".webm") else "libvpx"

    #Setup Video Clip
    VidClip = mpe.VideoFileClip(SourcePath + FileFormat + ".avi")
    print(SourcePath + FileFormat + ".avi")

    #Trying Get Audio File
    try:
        VidClip = VidClip.set_audio(mpe.AudioFileClip(SourcePath + FileFormat + ".wav"))
        print(SourcePath + FileFormat + ".wav")
    except:
        print("Audio Not Found")

    #Write Final Video Result
    VidClip.write_videofile(
        TargetPath + FileFormat + OutFormat, 
        fps = FrameRate, 
        codec = OutCodec, 
        preset = CompSpeed, 
        write_logfile = True)
    VidClip.close()
    print(TargetPath + FileFormat + OutFormat)

#Merge Image Sequence ====================================
def MergeImageSequence():
    #Image Sequence Presets
    OutCodec = "libx264" if (OutFormat != ".webm") else "libvpx"
    
    #Frames Variables
    FrameList = []
    FrameID = 0
    LastFrame = ""

    #Getting Frames Sequence
    while (len(FrameList) < TotalFrames):
        CrtPath = f"{SourcePath}{FileFormat}/{FrameID}.jpg"
        #Check if Frame Exist, else add last
        if (os.isfile(CrtPath)):
            FrameList.append(CrtPath)
            LastFrame = CrtPath
        elif (LastFrame != ""):
            FrameList.append(LastFrame)
        FrameID += 1
        if (FrameID >= TotalFrames):
            break

    print(f"{len(FrameList)} frames")

    #Setup Image Sequence Clip
    ImSeClip = mpe.ImageSequenceClip(FrameList, fps=FrameRate, durations=TotalFrames/FrameRate, with_mask=False)
    print("ImageSequence Clip Created")

    #Trying Get Audio File
    try:
        ImSeClip = ImSeClip.set_audio(mpe.AudioFileClip(f"{SourcePath}{FileFormat}.wav"))
    except:
        print("Audio Not Found")
    
    #Set Correct Clip Duration
    ImSeClip = ImSeClip.set_duration(TotalFrames / FrameRate)

    #Write Final Result Video
    ImSeClip.write_videofile( 
        TargetPath + FileFormat + OutFormat, 
        fps = FrameRate, 
        codec = OutCodec, 
        preset = CompSpeed, 
        write_logfile = True)
    ImSeClip.close()
    print(TargetPath + FileFormat + OutFormat)

#Run Correct Mode ========================================
if MergeMode == "Video":
    MergeVideo()
elif MergeMode == "ImageSequence":
    MergeImageSequence()
