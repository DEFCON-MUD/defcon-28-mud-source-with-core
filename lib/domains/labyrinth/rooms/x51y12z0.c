inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 12, 0 }));
  set_short( "Corridor - x51y12z0" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y13z0.c",
  "south" : DIR+"/rooms/x51y11z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
