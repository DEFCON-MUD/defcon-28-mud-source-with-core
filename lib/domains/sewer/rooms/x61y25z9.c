inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 25, 9 }));
  set_short( "Corridor - x61y25z9" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y26z9.c",
  "south" : DIR+"/rooms/x61y24z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
