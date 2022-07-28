inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 62, 0 }));
  set_short( "Hallway - x43y62z0" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y62z0.c",
  "east" : DIR+"/rooms/x44y62z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
