inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 2, 9 }));
  set_short( "Hallway - x23y2z9" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y2z9.c",
  "north" : DIR+"/rooms/x23y3z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
