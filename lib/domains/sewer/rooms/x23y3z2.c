inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 3, 2 }));
  set_short( "Corridor - x23y3z2" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y4z2.c",
  "south" : DIR+"/rooms/x23y2z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
