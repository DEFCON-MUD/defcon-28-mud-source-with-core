inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 2, 3 }));
  set_short( "Corridor - x23y2z3" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y2z3.c",
  "north" : DIR+"/rooms/x23y3z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
