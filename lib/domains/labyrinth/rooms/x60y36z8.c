inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 36, 8 }));
  set_short( "Corridor - x60y36z8" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y36z8.c",
  "east" : DIR+"/rooms/x61y36z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
