inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 28, 7 }));
  set_short( "Passage - x37y28z7" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y28z7.c",
  "north" : DIR+"/rooms/x37y29z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
