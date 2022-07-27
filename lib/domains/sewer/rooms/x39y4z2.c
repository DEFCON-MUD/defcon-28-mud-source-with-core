inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 4, 2 }));
  set_short( "Corridor - x39y4z2" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y4z2.c",
  "east" : DIR+"/rooms/x40y4z2.c",
  "south" : DIR+"/rooms/x39y3z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
