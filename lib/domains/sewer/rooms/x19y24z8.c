inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 24, 8 }));
  set_short( "Passage - x19y24z8" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y24z8.c",
  "south" : DIR+"/rooms/x19y23z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
