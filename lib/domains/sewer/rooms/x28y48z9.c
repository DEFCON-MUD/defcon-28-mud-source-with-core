inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 48, 9 }));
  set_short( "Hallway - x28y48z9" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y48z9.c",
  "east" : DIR+"/rooms/x29y48z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
