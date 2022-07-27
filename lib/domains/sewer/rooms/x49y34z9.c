inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 34, 9 }));
  set_short( "Hallway - x49y34z9" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y34z9.c",
  "east" : DIR+"/rooms/x50y34z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
