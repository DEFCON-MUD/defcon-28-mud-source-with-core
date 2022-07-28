inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 22, 6 }));
  set_short( "Passage - x44y22z6" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y22z6.c",
  "east" : DIR+"/rooms/x45y22z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
