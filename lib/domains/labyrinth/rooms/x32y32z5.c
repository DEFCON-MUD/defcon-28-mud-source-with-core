inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 32, 5 }));
  set_short( "Passage - x32y32z5" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y32z5.c",
  "east" : DIR+"/rooms/x33y32z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
