inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 54, 9 }));
  set_short( "Hallway - x54y54z9" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y54z9.c",
  "east" : DIR+"/rooms/x55y54z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
