inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 8 }));
  set_short( "Hallway - x55y54z8" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y54z8.c",
  "north" : DIR+"/rooms/x55y55z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
