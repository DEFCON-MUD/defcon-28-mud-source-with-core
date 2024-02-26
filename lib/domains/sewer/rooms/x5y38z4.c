inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 4 }));
  set_short( "Hallway - x5y38z4" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y38z4.c",
  "east" : DIR+"/rooms/x6y38z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
