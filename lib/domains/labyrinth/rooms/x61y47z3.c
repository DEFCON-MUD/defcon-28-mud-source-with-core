inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 47, 3 }));
  set_short( "Hallway - x61y47z3" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y48z3.c",
  "south" : DIR+"/rooms/x61y46z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
