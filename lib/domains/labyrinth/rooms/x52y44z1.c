inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 44, 1 }));
  set_short( "Corridor - x52y44z1" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y44z1.c",
  "east" : DIR+"/rooms/x53y44z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
