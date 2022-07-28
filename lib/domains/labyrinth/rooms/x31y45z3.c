inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 45, 3 }));
  set_short( "Passage - x31y45z3" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y46z3.c",
  "south" : DIR+"/rooms/x31y44z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
