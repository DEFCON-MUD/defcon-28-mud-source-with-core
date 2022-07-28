inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 38, 7 }));
  set_short( "Corridor - x38y38z7" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y38z7.c",
  "east" : DIR+"/rooms/x39y38z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
