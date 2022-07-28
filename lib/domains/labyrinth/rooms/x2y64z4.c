inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 64, 4 }));
  set_short( "Passage - x2y64z4" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x3y64z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
