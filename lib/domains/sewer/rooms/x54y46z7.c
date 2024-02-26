inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 46, 7 }));
  set_short( "Passage - x54y46z7" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y46z7.c",
  "east" : DIR+"/rooms/x55y46z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
