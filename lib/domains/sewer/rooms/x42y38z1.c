inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 38, 1 }));
  set_short( "Passage - x42y38z1" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y38z1.c",
  "east" : DIR+"/rooms/x43y38z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
