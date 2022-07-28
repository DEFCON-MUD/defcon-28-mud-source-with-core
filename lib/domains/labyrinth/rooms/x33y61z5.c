inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 61, 5 }));
  set_short( "Passage - x33y61z5" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y62z5.c",
  "south" : DIR+"/rooms/x33y60z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
