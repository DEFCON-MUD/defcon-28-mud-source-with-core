inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 51, 1 }));
  set_short( "Corridor - x55y51z1" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y52z1.c",
  "south" : DIR+"/rooms/x55y50z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
