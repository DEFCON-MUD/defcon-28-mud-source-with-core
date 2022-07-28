inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 15, 5 }));
  set_short( "Corridor - x43y15z5" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y16z5.c",
  "south" : DIR+"/rooms/x43y14z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
