inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 18, 7 }));
  set_short( "Corridor - x23y18z7" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y18z7.c",
  "north" : DIR+"/rooms/x23y19z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
