inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 28, 8 }));
  set_short( "Hallway - x1y28z8" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y28z8.c",
  "south" : DIR+"/rooms/x1y27z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
