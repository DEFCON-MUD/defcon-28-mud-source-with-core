inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 26, 1 }));
  set_short( "Corridor - x42y26z1" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y26z1.c",
  "east" : DIR+"/rooms/x43y26z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
