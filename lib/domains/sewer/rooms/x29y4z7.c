inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 4, 7 }));
  set_short( "Hallway - x29y4z7" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y4z7.c",
  "north" : DIR+"/rooms/x29y5z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
