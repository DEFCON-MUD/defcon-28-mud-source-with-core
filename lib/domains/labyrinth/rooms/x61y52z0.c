inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 0 }));
  set_short( "Passage - x61y52z0" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y53z0.c",
  "south" : DIR+"/rooms/x61y51z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
