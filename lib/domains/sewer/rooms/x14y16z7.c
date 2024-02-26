inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 16, 7 }));
  set_short( "Hallway - x14y16z7" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y16z7.c",
  "east" : DIR+"/rooms/x15y16z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
