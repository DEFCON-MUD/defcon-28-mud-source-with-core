inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 7, 4 }));
  set_short( "Passage - x13y7z4" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y8z4.c",
  "south" : DIR+"/rooms/x13y6z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
