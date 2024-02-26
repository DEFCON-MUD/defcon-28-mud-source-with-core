inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 4, 7 }));
  set_short( "Passage - x15y4z7" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y4z7.c",
  "north" : DIR+"/rooms/x15y5z7.c",
  "south" : DIR+"/rooms/x15y3z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
