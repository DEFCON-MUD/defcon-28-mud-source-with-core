inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 0, 7 }));
  set_short( "Hallway - x15y0z7" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y0z7.c",
  "east" : DIR+"/rooms/x16y0z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
