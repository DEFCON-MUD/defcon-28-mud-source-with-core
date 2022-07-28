inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 22, 5 }));
  set_short( "Passage - x42y22z5" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y22z5.c",
  "east" : DIR+"/rooms/x43y22z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
