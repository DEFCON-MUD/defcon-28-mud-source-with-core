inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 44, 1 }));
  set_short( "Hallway - x50y44z1" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y44z1.c",
  "east" : DIR+"/rooms/x51y44z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
