inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 57, 9 }));
  set_short( "Corridor - x35y57z9" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y58z9.c",
  "south" : DIR+"/rooms/x35y56z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
