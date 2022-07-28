inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 24, 4 }));
  set_short( "Passage - x42y24z4" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y24z4.c",
  "east" : DIR+"/rooms/x43y24z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
