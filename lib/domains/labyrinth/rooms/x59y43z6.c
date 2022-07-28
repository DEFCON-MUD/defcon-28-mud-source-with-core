inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 43, 6 }));
  set_short( "Hallway - x59y43z6" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y44z6.c",
  "south" : DIR+"/rooms/x59y42z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
