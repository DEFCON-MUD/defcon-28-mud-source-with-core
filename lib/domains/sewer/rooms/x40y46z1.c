inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 46, 1 }));
  set_short( "Passage - x40y46z1" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y46z1.c",
  "east" : DIR+"/rooms/x41y46z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
