inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 58, 6 }));
  set_short( "Passage - x36y58z6" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y58z6.c",
  "east" : DIR+"/rooms/x37y58z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
