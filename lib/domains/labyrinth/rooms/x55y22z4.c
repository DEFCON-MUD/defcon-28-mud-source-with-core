inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 22, 4 }));
  set_short( "Hallway - x55y22z4" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y22z4.c",
  "east" : DIR+"/rooms/x56y22z4.c",
  "north" : DIR+"/rooms/x55y23z4.c",
  "south" : DIR+"/rooms/x55y21z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
