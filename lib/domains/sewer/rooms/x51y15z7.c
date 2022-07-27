inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 15, 7 }));
  set_short( "Corridor - x51y15z7" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y16z7.c",
  "south" : DIR+"/rooms/x51y14z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
