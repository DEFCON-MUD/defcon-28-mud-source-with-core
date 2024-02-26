inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 44, 1 }));
  set_short( "Corridor - x16y44z1" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y44z1.c",
  "east" : DIR+"/rooms/x17y44z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
