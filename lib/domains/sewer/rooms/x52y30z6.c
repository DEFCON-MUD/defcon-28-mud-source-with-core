inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 30, 6 }));
  set_short( "Corridor - x52y30z6" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y30z6.c",
  "east" : DIR+"/rooms/x53y30z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
