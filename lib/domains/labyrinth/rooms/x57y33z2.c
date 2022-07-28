inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 33, 2 }));
  set_short( "Passage - x57y33z2" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y34z2.c",
  "south" : DIR+"/rooms/x57y32z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
