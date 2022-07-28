inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 58, 4 }));
  set_short( "Corridor - x13y58z4" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y58z4.c",
  "east" : DIR+"/rooms/x14y58z4.c",
  "north" : DIR+"/rooms/x13y59z4.c",
  "south" : DIR+"/rooms/x13y57z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
