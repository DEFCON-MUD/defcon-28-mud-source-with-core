inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 64, 1 }));
  set_short( "Corridor - x50y64z1" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y64z1.c",
  "east" : DIR+"/rooms/x51y64z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
