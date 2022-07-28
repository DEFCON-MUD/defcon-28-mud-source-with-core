inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 28, 1 }));
  set_short( "Hallway - x55y28z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y28z1.c",
  "north" : DIR+"/rooms/x55y29z1.c",
  "south" : DIR+"/rooms/x55y27z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
