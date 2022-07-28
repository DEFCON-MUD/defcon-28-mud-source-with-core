inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 60, 5 }));
  set_short( "Passage - x27y60z5" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y60z5.c",
  "north" : DIR+"/rooms/x27y61z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
