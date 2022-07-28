inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 23, 5 }));
  set_short( "Passage - x25y23z5" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y24z5.c",
  "south" : DIR+"/rooms/x25y22z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
