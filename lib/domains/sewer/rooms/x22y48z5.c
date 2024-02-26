inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 48, 5 }));
  set_short( "Corridor - x22y48z5" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y48z5.c",
  "east" : DIR+"/rooms/x23y48z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
