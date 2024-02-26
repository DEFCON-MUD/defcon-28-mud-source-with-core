inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 2, 0 }));
  set_short( "Corridor - x24y2z0" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y2z0.c",
  "east" : DIR+"/rooms/x25y2z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
