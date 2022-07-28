inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 14, 3 }));
  set_short( "Hallway - x47y14z3" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y14z3.c",
  "north" : DIR+"/rooms/x47y15z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
