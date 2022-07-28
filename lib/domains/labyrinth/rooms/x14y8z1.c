inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 8, 1 }));
  set_short( "Passage - x14y8z1" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y8z1.c",
  "east" : DIR+"/rooms/x15y8z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
