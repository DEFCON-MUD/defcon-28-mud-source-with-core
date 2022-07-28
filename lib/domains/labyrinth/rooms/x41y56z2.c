inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 56, 2 }));
  set_short( "Passage - x41y56z2" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y56z2.c",
  "north" : DIR+"/rooms/x41y57z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
