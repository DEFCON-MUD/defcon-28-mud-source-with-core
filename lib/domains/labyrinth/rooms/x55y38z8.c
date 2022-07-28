inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 38, 8 }));
  set_short( "Hallway - x55y38z8" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y38z8.c",
  "north" : DIR+"/rooms/x55y39z8.c",
  "south" : DIR+"/rooms/x55y37z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
