inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 46, 7 }));
  set_short( "Corridor - x61y46z7" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y46z7.c",
  "north" : DIR+"/rooms/x61y47z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
