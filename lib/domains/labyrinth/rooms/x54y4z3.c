inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 4, 3 }));
  set_short( "Hallway - x54y4z3" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y4z3.c",
  "east" : DIR+"/rooms/x55y4z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
