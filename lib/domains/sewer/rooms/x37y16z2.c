inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 2 }));
  set_short( "Hallway - x37y16z2" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y16z2.c",
  "north" : DIR+"/rooms/x37y17z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
