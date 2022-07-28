inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 16, 2 }));
  set_short( "Corridor - x27y16z2" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y16z2.c",
  "south" : DIR+"/rooms/x27y15z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
