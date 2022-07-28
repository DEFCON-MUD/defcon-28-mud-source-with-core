inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 40, 0 }));
  set_short( "Corridor - x47y40z0" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y41z0.c",
  "south" : DIR+"/rooms/x47y39z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
