inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 12, 5 }));
  set_short( "Passage - x53y12z5" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y12z5.c",
  "south" : DIR+"/rooms/x53y11z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
