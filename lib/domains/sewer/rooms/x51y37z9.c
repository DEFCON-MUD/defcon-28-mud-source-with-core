inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 37, 9 }));
  set_short( "Passage - x51y37z9" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y38z9.c",
  "south" : DIR+"/rooms/x51y36z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
