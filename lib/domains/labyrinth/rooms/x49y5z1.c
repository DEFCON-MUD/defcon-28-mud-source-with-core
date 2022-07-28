inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 5, 1 }));
  set_short( "Corridor - x49y5z1" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y6z1.c",
  "south" : DIR+"/rooms/x49y4z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
