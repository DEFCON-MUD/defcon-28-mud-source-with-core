inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 46, 0 }));
  set_short( "Passage - x25y46z0" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y46z0.c",
  "north" : DIR+"/rooms/x25y47z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
