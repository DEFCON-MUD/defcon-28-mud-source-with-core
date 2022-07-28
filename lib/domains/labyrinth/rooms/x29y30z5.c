inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 30, 5 }));
  set_short( "Passage - x29y30z5" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y30z5.c",
  "north" : DIR+"/rooms/x29y31z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
