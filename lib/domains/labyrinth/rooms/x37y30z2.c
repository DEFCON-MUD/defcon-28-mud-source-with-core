inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 30, 2 }));
  set_short( "Hallway - x37y30z2" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y30z2.c",
  "north" : DIR+"/rooms/x37y31z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
