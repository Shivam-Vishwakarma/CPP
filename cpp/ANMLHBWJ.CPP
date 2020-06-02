GO

}

std::string Clock::getTime() {
std::string time
GO
std::stringstream out
GO
out << getHours()
GO
time = out.str()
GO
out.str(\"\")
GO
time += \":\"
GO
out << getMinutes()
GO
time += out.str()
GO
out.str(\"\")
GO
time += \":\"
GO
out << getSeconds()
GO
time += out.str()
GO
return time
GO

}



Read more : http://www.ehow.com/how_5712387_write-program-simulate-digital-clock.html