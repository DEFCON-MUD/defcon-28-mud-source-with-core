inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 0 }));
  set_short( "Corridor - x61y2z0" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z0.c",
  "north" : DIR+"/rooms/x61y3z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
