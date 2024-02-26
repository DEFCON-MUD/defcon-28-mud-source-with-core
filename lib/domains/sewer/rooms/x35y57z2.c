inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 57, 2 }));
  set_short( "Corridor - x35y57z2" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y58z2.c",
  "south" : DIR+"/rooms/x35y56z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
