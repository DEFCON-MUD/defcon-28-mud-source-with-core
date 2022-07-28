inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 54, 2 }));
  set_short( "Hallway - x21y54z2" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y54z2.c",
  "south" : DIR+"/rooms/x21y53z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
