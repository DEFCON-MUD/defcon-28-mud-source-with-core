inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 7 }));
  set_short( "Hallway - x49y52z7" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y53z7.c",
  "south" : DIR+"/rooms/x49y51z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
