inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 44, 9 }));
  set_short( "Hallway - x19y44z9" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y44z9.c",
  "east" : DIR+"/rooms/x20y44z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
