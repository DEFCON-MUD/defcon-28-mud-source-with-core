inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 26, 5 }));
  set_short( "Corridor - x13y26z5" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y26z5.c",
  "north" : DIR+"/rooms/x13y27z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
