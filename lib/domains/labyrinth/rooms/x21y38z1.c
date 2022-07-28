inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 1 }));
  set_short( "Corridor - x21y38z1" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y39z1.c",
  "south" : DIR+"/rooms/x21y37z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
