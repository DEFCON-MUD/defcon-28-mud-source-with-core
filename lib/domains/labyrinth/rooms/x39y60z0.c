inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 60, 0 }));
  set_short( "Passage - x39y60z0" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y61z0.c",
  "south" : DIR+"/rooms/x39y59z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
