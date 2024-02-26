inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 4, 7 }));
  set_short( "Corridor - x9y4z7" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y4z7.c",
  "north" : DIR+"/rooms/x9y5z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
