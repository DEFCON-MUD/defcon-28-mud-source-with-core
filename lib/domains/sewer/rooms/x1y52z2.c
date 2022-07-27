inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 52, 2 }));
  set_short( "Hallway - x1y52z2" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y52z2.c",
  "south" : DIR+"/rooms/x1y51z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
