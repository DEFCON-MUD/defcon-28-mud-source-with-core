inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 55, 4 }));
  set_short( "Corridor - x51y55z4" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y56z4.c",
  "south" : DIR+"/rooms/x51y54z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
