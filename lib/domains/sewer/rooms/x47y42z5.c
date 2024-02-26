inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 42, 5 }));
  set_short( "Corridor - x47y42z5" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y42z5.c",
  "east" : DIR+"/rooms/x48y42z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
