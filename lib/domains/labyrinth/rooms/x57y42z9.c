inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 9 }));
  set_short( "Corridor - x57y42z9" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y42z9.c",
  "east" : DIR+"/rooms/x58y42z9.c",
  "south" : DIR+"/rooms/x57y41z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
