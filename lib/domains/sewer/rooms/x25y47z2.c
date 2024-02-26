inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 47, 2 }));
  set_short( "Corridor - x25y47z2" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y48z2.c",
  "south" : DIR+"/rooms/x25y46z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
