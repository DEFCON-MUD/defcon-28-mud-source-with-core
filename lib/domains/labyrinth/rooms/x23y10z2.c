inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 2 }));
  set_short( "Corridor - x23y10z2" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y10z2.c",
  "east" : DIR+"/rooms/x24y10z2.c",
  "south" : DIR+"/rooms/x23y9z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
