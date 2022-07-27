inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 54, 7 }));
  set_short( "Passage - x15y54z7" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y54z7.c",
  "north" : DIR+"/rooms/x15y55z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
