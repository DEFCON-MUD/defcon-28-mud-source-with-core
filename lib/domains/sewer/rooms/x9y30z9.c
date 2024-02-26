inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 30, 9 }));
  set_short( "Corridor - x9y30z9" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y30z9.c",
  "east" : DIR+"/rooms/x10y30z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
