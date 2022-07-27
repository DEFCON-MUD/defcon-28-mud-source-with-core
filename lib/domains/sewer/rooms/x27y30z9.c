inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 9 }));
  set_short( "Hallway - x27y30z9" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y30z9.c",
  "north" : DIR+"/rooms/x27y31z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
