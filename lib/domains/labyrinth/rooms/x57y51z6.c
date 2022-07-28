inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 51, 6 }));
  set_short( "Hallway - x57y51z6" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y52z6.c",
  "south" : DIR+"/rooms/x57y50z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
