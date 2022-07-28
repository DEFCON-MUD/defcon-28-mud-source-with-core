inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 32, 7 }));
  set_short( "Hallway - x41y32z7" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y32z7.c",
  "north" : DIR+"/rooms/x41y33z7.c",
  "south" : DIR+"/rooms/x41y31z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
