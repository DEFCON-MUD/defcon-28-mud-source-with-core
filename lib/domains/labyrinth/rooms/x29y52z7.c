inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 52, 7 }));
  set_short( "Passage - x29y52z7" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y52z7.c",
  "east" : DIR+"/rooms/x30y52z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
