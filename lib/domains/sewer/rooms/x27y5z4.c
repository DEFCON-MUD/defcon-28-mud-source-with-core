inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 5, 4 }));
  set_short( "Hallway - x27y5z4" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y6z4.c",
  "south" : DIR+"/rooms/x27y4z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
