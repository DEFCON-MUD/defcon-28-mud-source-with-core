inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 4 }));
  set_short( "Hallway - x45y56z4" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y57z4.c",
  "south" : DIR+"/rooms/x45y55z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
