inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 34, 0 }));
  set_short( "Corridor - x51y34z0" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y34z0.c",
  "north" : DIR+"/rooms/x51y35z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
