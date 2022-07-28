inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 36, 2 }));
  set_short( "Passage - x23y36z2" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y36z2.c",
  "north" : DIR+"/rooms/x23y37z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
