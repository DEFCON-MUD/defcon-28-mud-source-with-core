inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 64, 2 }));
  set_short( "Hallway - x18y64z2" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y64z2.c",
  "east" : DIR+"/rooms/x19y64z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
