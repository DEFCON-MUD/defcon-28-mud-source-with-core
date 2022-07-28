inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 59, 3 }));
  set_short( "Corridor - x59y59z3" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y60z3.c",
  "south" : DIR+"/rooms/x59y58z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
