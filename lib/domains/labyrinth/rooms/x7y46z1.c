inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 46, 1 }));
  set_short( "Corridor - x7y46z1" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y46z1.c",
  "south" : DIR+"/rooms/x7y45z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
