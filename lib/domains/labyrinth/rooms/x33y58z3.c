inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 3 }));
  set_short( "Hallway - x33y58z3" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y58z3.c",
  "north" : DIR+"/rooms/x33y59z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
