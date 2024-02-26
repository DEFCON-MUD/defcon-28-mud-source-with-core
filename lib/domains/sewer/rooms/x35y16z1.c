inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 1 }));
  set_short( "Corridor - x35y16z1" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y16z1.c",
  "north" : DIR+"/rooms/x35y17z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
