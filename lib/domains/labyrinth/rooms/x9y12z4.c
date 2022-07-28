inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 12, 4 }));
  set_short( "Corridor - x9y12z4" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y13z4.c",
  "south" : DIR+"/rooms/x9y11z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
