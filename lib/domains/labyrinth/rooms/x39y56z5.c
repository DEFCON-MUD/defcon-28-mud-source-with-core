inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 56, 5 }));
  set_short( "Passage - x39y56z5" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y56z5.c",
  "north" : DIR+"/rooms/x39y57z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
