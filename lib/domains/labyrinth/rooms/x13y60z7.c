inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 60, 7 }));
  set_short( "Hallway - x13y60z7" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y60z7.c",
  "south" : DIR+"/rooms/x13y59z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
