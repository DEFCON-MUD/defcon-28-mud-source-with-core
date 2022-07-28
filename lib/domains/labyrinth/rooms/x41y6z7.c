inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 7 }));
  set_short( "Corridor - x41y6z7" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y6z7.c",
  "south" : DIR+"/rooms/x41y5z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
