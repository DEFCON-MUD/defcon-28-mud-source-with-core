inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 21, 7 }));
  set_short( "Corridor - x7y21z7" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y22z7.c",
  "south" : DIR+"/rooms/x7y20z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
