inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 32, 2 }));
  set_short( "Corridor - x39y32z2" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y32z2.c",
  "south" : DIR+"/rooms/x39y31z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
