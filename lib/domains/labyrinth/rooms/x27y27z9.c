inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 27, 9 }));
  set_short( "Hallway - x27y27z9" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y28z9.c",
  "south" : DIR+"/rooms/x27y26z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
