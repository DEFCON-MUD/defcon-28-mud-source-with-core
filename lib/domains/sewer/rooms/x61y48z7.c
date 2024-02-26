inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 48, 7 }));
  set_short( "Passage - x61y48z7" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y49z7.c",
  "south" : DIR+"/rooms/x61y47z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
