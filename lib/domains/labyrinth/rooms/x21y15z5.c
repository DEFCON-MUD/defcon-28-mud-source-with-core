inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 15, 5 }));
  set_short( "Corridor - x21y15z5" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y16z5.c",
  "south" : DIR+"/rooms/x21y14z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
