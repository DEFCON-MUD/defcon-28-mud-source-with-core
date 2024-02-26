inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 10, 2 }));
  set_short( "Corridor - x25y10z2" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y10z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
