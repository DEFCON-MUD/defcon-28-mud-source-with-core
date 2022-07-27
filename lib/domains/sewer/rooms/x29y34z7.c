inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 34, 7 }));
  set_short( "Hallway - x29y34z7" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y34z7.c",
  "south" : DIR+"/rooms/x29y33z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
