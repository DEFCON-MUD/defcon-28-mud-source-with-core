inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 2, 1 }));
  set_short( "Hallway - x42y2z1" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y2z1.c",
  "east" : DIR+"/rooms/x43y2z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
