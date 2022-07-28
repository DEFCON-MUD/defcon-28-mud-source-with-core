inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 3 }));
  set_short( "Corridor - x47y16z3" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y17z3.c",
  "south" : DIR+"/rooms/x47y15z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
