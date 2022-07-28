inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 7, 4 }));
  set_short( "Corridor - x29y7z4" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y8z4.c",
  "south" : DIR+"/rooms/x29y6z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
