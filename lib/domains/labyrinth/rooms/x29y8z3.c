inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 3 }));
  set_short( "Hallway - x29y8z3" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y8z3.c",
  "north" : DIR+"/rooms/x29y9z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
