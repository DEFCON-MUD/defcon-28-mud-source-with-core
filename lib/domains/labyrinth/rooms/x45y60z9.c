inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 60, 9 }));
  set_short( "Passage - x45y60z9" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y60z9.c",
  "east" : DIR+"/rooms/x46y60z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
