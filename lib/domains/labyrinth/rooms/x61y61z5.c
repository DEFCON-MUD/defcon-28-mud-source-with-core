inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 61, 5 }));
  set_short( "Hallway - x61y61z5" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y62z5.c",
  "south" : DIR+"/rooms/x61y60z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
