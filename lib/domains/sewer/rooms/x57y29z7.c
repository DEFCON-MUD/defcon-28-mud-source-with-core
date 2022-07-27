inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 29, 7 }));
  set_short( "Corridor - x57y29z7" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y30z7.c",
  "south" : DIR+"/rooms/x57y28z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
