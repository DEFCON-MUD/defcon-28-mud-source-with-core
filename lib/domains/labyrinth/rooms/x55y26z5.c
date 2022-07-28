inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 5 }));
  set_short( "Hallway - x55y26z5" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z5.c",
  "north" : DIR+"/rooms/x55y27z5.c",
  "south" : DIR+"/rooms/x55y25z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
