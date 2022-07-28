inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 6, 0 }));
  set_short( "Corridor - x61y6z0" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y7z0.c",
  "south" : DIR+"/rooms/x61y5z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
