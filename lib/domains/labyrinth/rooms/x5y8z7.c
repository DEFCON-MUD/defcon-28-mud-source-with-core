inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 8, 7 }));
  set_short( "Hallway - x5y8z7" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y8z7.c",
  "north" : DIR+"/rooms/x5y9z7.c",
  "south" : DIR+"/rooms/x5y7z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
