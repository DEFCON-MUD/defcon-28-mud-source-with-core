inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 44, 0 }));
  set_short( "Hallway - x58y44z0" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y44z0.c",
  "east" : DIR+"/rooms/x59y44z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
