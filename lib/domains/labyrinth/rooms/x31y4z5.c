inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 4, 5 }));
  set_short( "Corridor - x31y4z5" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y4z5.c",
  "north" : DIR+"/rooms/x31y5z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
