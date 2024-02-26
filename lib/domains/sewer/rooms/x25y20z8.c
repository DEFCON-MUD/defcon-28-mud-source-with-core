inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 20, 8 }));
  set_short( "Corridor - x25y20z8" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y20z8.c",
  "east" : DIR+"/rooms/x26y20z8.c",
  "north" : DIR+"/rooms/x25y21z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
