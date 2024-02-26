inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 31, 7 }));
  set_short( "Hallway - x29y31z7" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y32z7.c",
  "south" : DIR+"/rooms/x29y30z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
