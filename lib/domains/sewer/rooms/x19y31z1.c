inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 31, 1 }));
  set_short( "Hallway - x19y31z1" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y32z1.c",
  "south" : DIR+"/rooms/x19y30z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
