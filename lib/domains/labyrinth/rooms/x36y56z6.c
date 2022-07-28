inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 56, 6 }));
  set_short( "Hallway - x36y56z6" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y56z6.c",
  "east" : DIR+"/rooms/x37y56z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
