inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 14, 6 }));
  set_short( "Passage - x3y14z6" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y14z6.c",
  "east" : DIR+"/rooms/x4y14z6.c",
  "north" : DIR+"/rooms/x3y15z6.c",
  "south" : DIR+"/rooms/x3y13z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
