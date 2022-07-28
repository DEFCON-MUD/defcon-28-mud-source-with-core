inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 2 }));
  set_short( "Hallway - x5y10z2" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y11z2.c",
  "south" : DIR+"/rooms/x5y9z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
