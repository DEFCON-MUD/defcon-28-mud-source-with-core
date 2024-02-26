inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 23, 5 }));
  set_short( "Corridor - x25y23z5" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y24z5.c",
  "south" : DIR+"/rooms/x25y22z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
