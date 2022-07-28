inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 19, 6 }));
  set_short( "Hallway - x61y19z6" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y20z6.c",
  "south" : DIR+"/rooms/x61y18z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
