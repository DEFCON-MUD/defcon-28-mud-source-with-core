inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 57, 1 }));
  set_short( "Corridor - x53y57z1" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y58z1.c",
  "south" : DIR+"/rooms/x53y56z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
