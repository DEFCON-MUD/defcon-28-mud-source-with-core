inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 28, 2 }));
  set_short( "Corridor - x1y28z2" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y28z2.c",
  "north" : DIR+"/rooms/x1y29z2.c",
  "south" : DIR+"/rooms/x1y27z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
