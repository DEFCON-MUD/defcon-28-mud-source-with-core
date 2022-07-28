inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 16, 9 }));
  set_short( "Hallway - x21y16z9" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y16z9.c",
  "south" : DIR+"/rooms/x21y15z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
