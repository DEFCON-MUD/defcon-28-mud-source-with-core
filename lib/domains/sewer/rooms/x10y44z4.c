inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 44, 4 }));
  set_short( "Hallway - x10y44z4" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y44z4.c",
  "east" : DIR+"/rooms/x11y44z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
