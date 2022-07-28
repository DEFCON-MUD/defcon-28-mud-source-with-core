inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 26, 1 }));
  set_short( "Hallway - x16y26z1" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y26z1.c",
  "east" : DIR+"/rooms/x17y26z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
