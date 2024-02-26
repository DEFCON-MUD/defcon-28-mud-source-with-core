inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 0, 1 }));
  set_short( "Corridor - x15y0z1" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y0z1.c",
  "east" : DIR+"/rooms/x16y0z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
