inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 64, 7 }));
  set_short( "Passage - x13y64z7" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y64z7.c",
  "east" : DIR+"/rooms/x14y64z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
