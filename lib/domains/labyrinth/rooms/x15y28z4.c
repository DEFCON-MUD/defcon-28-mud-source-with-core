inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 28, 4 }));
  set_short( "Hallway - x15y28z4" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y28z4.c",
  "north" : DIR+"/rooms/x15y29z4.c",
  "south" : DIR+"/rooms/x15y27z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
