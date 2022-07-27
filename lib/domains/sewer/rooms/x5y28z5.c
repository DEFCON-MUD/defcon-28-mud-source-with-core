inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 28, 5 }));
  set_short( "Passage - x5y28z5" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y29z5.c",
  "south" : DIR+"/rooms/x5y27z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
