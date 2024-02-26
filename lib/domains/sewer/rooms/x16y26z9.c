inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 26, 9 }));
  set_short( "Hallway - x16y26z9" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y26z9.c",
  "east" : DIR+"/rooms/x17y26z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
