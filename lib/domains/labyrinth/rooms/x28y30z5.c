inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 30, 5 }));
  set_short( "Corridor - x28y30z5" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y30z5.c",
  "east" : DIR+"/rooms/x29y30z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
