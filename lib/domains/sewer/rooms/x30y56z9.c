inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 56, 9 }));
  set_short( "Corridor - x30y56z9" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y56z9.c",
  "east" : DIR+"/rooms/x31y56z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
