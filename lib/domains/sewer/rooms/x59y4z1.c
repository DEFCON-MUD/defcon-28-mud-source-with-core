inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 4, 1 }));
  set_short( "Hallway - x59y4z1" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y4z1.c",
  "east" : DIR+"/rooms/x60y4z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
