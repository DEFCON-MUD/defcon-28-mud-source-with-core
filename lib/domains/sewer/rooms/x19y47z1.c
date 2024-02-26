inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 47, 1 }));
  set_short( "Hallway - x19y47z1" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y48z1.c",
  "south" : DIR+"/rooms/x19y46z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
