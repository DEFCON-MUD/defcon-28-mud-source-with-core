inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 24, 6 }));
  set_short( "Hallway - x22y24z6" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y24z6.c",
  "east" : DIR+"/rooms/x23y24z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
