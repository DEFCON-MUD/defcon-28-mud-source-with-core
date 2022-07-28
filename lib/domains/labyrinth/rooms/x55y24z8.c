inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 24, 8 }));
  set_short( "Hallway - x55y24z8" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y24z8.c",
  "east" : DIR+"/rooms/x56y24z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
