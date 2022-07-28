inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 27, 1 }));
  set_short( "Corridor - x53y27z1" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y28z1.c",
  "south" : DIR+"/rooms/x53y26z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
