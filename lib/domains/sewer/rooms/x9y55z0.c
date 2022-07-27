inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 55, 0 }));
  set_short( "Hallway - x9y55z0" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y56z0.c",
  "south" : DIR+"/rooms/x9y54z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
