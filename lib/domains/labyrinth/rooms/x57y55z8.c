inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 55, 8 }));
  set_short( "Passage - x57y55z8" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y56z8.c",
  "south" : DIR+"/rooms/x57y54z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
