inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 30, 4 }));
  set_short( "Hallway - x39y30z4" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y30z4.c",
  "east" : DIR+"/rooms/x40y30z4.c",
  "north" : DIR+"/rooms/x39y31z4.c",
  "south" : DIR+"/rooms/x39y29z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
