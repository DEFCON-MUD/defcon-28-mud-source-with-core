inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 32, 2 }));
  set_short( "Hallway - x38y32z2" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y32z2.c",
  "east" : DIR+"/rooms/x39y32z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
