inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 54, 4 }));
  set_short( "Corridor - x57y54z4" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y54z4.c",
  "north" : DIR+"/rooms/x57y55z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
