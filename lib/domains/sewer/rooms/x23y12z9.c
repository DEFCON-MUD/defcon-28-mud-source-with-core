inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 9 }));
  set_short( "Corridor - x23y12z9" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y12z9.c",
  "north" : DIR+"/rooms/x23y13z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
