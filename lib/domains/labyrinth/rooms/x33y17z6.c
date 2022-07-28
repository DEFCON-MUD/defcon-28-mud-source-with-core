inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 17, 6 }));
  set_short( "Corridor - x33y17z6" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y18z6.c",
  "south" : DIR+"/rooms/x33y16z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
