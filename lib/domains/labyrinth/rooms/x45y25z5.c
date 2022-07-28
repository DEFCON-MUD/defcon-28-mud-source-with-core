inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 25, 5 }));
  set_short( "Passage - x45y25z5" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y26z5.c",
  "south" : DIR+"/rooms/x45y24z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
