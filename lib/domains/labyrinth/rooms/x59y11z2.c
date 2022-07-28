inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 11, 2 }));
  set_short( "Corridor - x59y11z2" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y12z2.c",
  "south" : DIR+"/rooms/x59y10z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
