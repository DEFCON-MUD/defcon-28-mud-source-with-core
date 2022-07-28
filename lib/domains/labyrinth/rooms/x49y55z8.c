inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 55, 8 }));
  set_short( "Corridor - x49y55z8" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y56z8.c",
  "south" : DIR+"/rooms/x49y54z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
