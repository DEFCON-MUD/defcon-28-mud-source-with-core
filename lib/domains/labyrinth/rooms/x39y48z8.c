inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 48, 8 }));
  set_short( "Hallway - x39y48z8" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y49z8.c",
  "south" : DIR+"/rooms/x39y47z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
