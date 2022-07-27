inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 47, 5 }));
  set_short( "Passage - x61y47z5" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y48z5.c",
  "south" : DIR+"/rooms/x61y46z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
