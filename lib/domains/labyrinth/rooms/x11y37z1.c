inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 37, 1 }));
  set_short( "Hallway - x11y37z1" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y38z1.c",
  "south" : DIR+"/rooms/x11y36z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
