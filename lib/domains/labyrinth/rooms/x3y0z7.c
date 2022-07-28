inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 0, 7 }));
  set_short( "Passage - x3y0z7" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y0z7.c",
  "east" : DIR+"/rooms/x4y0z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
