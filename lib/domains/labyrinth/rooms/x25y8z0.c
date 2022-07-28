inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 0 }));
  set_short( "Passage - x25y8z0" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y8z0.c",
  "north" : DIR+"/rooms/x25y9z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
