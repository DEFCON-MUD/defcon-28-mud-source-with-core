inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 64, 2 }));
  set_short( "Passage - x45y64z2" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y64z2.c",
  "east" : DIR+"/rooms/x46y64z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
