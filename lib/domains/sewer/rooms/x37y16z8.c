inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 8 }));
  set_short( "Corridor - x37y16z8" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y16z8.c",
  "south" : DIR+"/rooms/x37y15z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
