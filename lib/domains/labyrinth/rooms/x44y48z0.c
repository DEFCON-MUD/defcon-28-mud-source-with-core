inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 48, 0 }));
  set_short( "Hallway - x44y48z0" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y48z0.c",
  "east" : DIR+"/rooms/x45y48z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
