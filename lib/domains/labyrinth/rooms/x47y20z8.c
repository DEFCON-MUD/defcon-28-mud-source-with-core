inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 20, 8 }));
  set_short( "Corridor - x47y20z8" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y20z8.c",
  "east" : DIR+"/rooms/x48y20z8.c",
  "north" : DIR+"/rooms/x47y21z8.c",
  "south" : DIR+"/rooms/x47y19z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
