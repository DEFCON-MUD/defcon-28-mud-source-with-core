inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 0 }));
  set_short( "Hallway - x21y26z0" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y27z0.c",
  "south" : DIR+"/rooms/x21y25z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
