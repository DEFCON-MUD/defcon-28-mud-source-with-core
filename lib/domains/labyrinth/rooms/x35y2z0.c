inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 0 }));
  set_short( "Passage - x35y2z0" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y2z0.c",
  "east" : DIR+"/rooms/x36y2z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
