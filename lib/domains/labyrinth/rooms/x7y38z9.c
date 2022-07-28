inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 38, 9 }));
  set_short( "Corridor - x7y38z9" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y38z9.c",
  "east" : DIR+"/rooms/x8y38z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
