inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 22, 2 }));
  set_short( "Passage - x33y22z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y22z2.c",
  "south" : DIR+"/rooms/x33y21z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
