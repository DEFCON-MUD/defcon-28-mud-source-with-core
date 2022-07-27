inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 54, 1 }));
  set_short( "Hallway - x56y54z1" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y54z1.c",
  "east" : DIR+"/rooms/x57y54z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
