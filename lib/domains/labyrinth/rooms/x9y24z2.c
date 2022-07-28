inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 2 }));
  set_short( "Passage - x9y24z2" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y24z2.c",
  "south" : DIR+"/rooms/x9y23z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
