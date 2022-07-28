inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 23, 0 }));
  set_short( "Hallway - x11y23z0" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y24z0.c",
  "south" : DIR+"/rooms/x11y22z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
