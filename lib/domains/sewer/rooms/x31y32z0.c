inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 32, 0 }));
  set_short( "Corridor - x31y32z0" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y32z0.c",
  "south" : DIR+"/rooms/x31y31z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
