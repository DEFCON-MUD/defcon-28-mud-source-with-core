inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 58, 1 }));
  set_short( "Corridor - x29y58z1" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y59z1.c",
  "south" : DIR+"/rooms/x29y57z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
