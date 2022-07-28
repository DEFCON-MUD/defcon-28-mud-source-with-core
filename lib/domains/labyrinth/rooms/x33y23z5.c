inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 23, 5 }));
  set_short( "Hallway - x33y23z5" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y24z5.c",
  "south" : DIR+"/rooms/x33y22z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
