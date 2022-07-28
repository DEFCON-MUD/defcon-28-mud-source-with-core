inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 12, 1 }));
  set_short( "Hallway - x34y12z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y12z1.c",
  "east" : DIR+"/rooms/x35y12z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
