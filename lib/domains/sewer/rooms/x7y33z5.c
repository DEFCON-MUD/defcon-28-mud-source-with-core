inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 33, 5 }));
  set_short( "Hallway - x7y33z5" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y34z5.c",
  "south" : DIR+"/rooms/x7y32z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
