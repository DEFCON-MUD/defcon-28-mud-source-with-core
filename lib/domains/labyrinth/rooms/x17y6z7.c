inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 6, 7 }));
  set_short( "Passage - x17y6z7" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y6z7.c",
  "north" : DIR+"/rooms/x17y7z7.c",
  "south" : DIR+"/rooms/x17y5z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
