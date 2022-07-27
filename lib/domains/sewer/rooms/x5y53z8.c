inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 53, 8 }));
  set_short( "Hallway - x5y53z8" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y54z8.c",
  "south" : DIR+"/rooms/x5y52z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
