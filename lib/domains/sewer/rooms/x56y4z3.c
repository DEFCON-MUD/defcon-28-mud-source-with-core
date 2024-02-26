inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 4, 3 }));
  set_short( "Corridor - x56y4z3" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y4z3.c",
  "east" : DIR+"/rooms/x57y4z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
