inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 27, 0 }));
  set_short( "Hallway - x59y27z0" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y28z0.c",
  "south" : DIR+"/rooms/x59y26z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
