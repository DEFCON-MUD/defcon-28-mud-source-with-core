inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 60, 6 }));
  set_short( "Hallway - x39y60z6" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y60z6.c",
  "east" : DIR+"/rooms/x40y60z6.c",
  "south" : DIR+"/rooms/x39y59z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
