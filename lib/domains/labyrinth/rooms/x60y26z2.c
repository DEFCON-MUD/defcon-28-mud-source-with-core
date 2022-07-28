inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 26, 2 }));
  set_short( "Corridor - x60y26z2" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y26z2.c",
  "east" : DIR+"/rooms/x61y26z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
