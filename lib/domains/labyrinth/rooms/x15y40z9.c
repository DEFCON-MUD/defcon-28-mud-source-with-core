inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 40, 9 }));
  set_short( "Hallway - x15y40z9" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y40z9.c",
  "east" : DIR+"/rooms/x16y40z9.c",
  "south" : DIR+"/rooms/x15y39z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
