inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 16, 6 }));
  set_short( "Corridor - x43y16z6" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y16z6.c",
  "north" : DIR+"/rooms/x43y17z6.c",
  "south" : DIR+"/rooms/x43y15z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
