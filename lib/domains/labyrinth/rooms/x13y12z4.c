inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 12, 4 }));
  set_short( "Passage - x13y12z4" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y12z4.c",
  "south" : DIR+"/rooms/x13y11z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
