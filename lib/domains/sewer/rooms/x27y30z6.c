inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 6 }));
  set_short( "Corridor - x27y30z6" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y30z6.c",
  "north" : DIR+"/rooms/x27y31z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
