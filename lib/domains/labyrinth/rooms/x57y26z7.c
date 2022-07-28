inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 26, 7 }));
  set_short( "Corridor - x57y26z7" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y26z7.c",
  "east" : DIR+"/rooms/x58y26z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
