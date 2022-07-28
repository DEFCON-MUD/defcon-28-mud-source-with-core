inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 24, 8 }));
  set_short( "Hallway - x45y24z8" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y24z8.c",
  "north" : DIR+"/rooms/x45y25z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
