inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 21, 5 }));
  set_short( "Hallway - x61y21z5" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y22z5.c",
  "south" : DIR+"/rooms/x61y20z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
