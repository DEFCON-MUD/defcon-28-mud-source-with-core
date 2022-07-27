inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 0 }));
  set_short( "Hallway - x25y16z0" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y17z0.c",
  "south" : DIR+"/rooms/x25y15z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
