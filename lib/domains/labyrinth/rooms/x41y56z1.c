inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 56, 1 }));
  set_short( "Passage - x41y56z1" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y56z1.c",
  "south" : DIR+"/rooms/x41y55z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
