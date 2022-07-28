inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 8, 6 }));
  set_short( "Corridor - x3y8z6" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y8z6.c",
  "south" : DIR+"/rooms/x3y7z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
