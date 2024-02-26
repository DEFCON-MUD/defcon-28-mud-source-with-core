inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 38, 3 }));
  set_short( "Corridor - x41y38z3" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y38z3.c",
  "east" : DIR+"/rooms/x42y38z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
