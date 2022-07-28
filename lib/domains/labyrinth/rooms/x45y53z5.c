inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 53, 5 }));
  set_short( "Corridor - x45y53z5" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y54z5.c",
  "south" : DIR+"/rooms/x45y52z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
