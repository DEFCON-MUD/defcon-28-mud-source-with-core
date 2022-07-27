inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 51, 1 }));
  set_short( "Corridor - x13y51z1" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y52z1.c",
  "south" : DIR+"/rooms/x13y50z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
