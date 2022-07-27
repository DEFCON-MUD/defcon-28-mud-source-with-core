inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 49, 2 }));
  set_short( "Corridor - x39y49z2" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y50z2.c",
  "south" : DIR+"/rooms/x39y48z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
