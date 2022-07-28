inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 32, 6 }));
  set_short( "Passage - x34y32z6" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y32z6.c",
  "east" : DIR+"/rooms/x35y32z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
