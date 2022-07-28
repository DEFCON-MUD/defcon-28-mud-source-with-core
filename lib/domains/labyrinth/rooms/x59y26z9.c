inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 26, 9 }));
  set_short( "Corridor - x59y26z9" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y26z9.c",
  "north" : DIR+"/rooms/x59y27z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
