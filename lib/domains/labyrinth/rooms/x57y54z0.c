inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 54, 0 }));
  set_short( "Corridor - x57y54z0" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y54z0.c",
  "south" : DIR+"/rooms/x57y53z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
