inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 16, 6 }));
  set_short( "Hallway - x27y16z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y16z6.c",
  "south" : DIR+"/rooms/x27y15z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
