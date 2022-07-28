inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 30, 0 }));
  set_short( "Corridor - x61y30z0" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y31z0.c",
  "south" : DIR+"/rooms/x61y29z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
