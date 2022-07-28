inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 58, 5 }));
  set_short( "Hallway - x14y58z5" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y58z5.c",
  "east" : DIR+"/rooms/x15y58z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
