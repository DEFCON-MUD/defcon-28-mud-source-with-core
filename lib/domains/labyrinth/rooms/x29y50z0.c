inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 50, 0 }));
  set_short( "Hallway - x29y50z0" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y51z0.c",
  "south" : DIR+"/rooms/x29y49z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
