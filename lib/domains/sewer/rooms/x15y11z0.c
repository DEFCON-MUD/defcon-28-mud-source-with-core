inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 11, 0 }));
  set_short( "Corridor - x15y11z0" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y12z0.c",
  "south" : DIR+"/rooms/x15y10z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
