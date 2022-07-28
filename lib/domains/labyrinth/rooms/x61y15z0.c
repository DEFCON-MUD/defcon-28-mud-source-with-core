inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 15, 0 }));
  set_short( "Hallway - x61y15z0" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y16z0.c",
  "south" : DIR+"/rooms/x61y14z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
