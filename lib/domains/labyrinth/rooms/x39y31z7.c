inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 31, 7 }));
  set_short( "Passage - x39y31z7" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y32z7.c",
  "south" : DIR+"/rooms/x39y30z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
