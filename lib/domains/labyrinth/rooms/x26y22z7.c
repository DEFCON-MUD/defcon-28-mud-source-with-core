inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 22, 7 }));
  set_short( "Corridor - x26y22z7" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y22z7.c",
  "east" : DIR+"/rooms/x27y22z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
