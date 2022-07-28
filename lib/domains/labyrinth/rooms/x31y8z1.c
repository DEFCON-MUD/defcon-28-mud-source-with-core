inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 8, 1 }));
  set_short( "Corridor - x31y8z1" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y9z1.c",
  "south" : DIR+"/rooms/x31y7z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
