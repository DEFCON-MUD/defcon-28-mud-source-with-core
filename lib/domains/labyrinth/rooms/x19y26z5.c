inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 5 }));
  set_short( "Hallway - x19y26z5" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y26z5.c",
  "south" : DIR+"/rooms/x19y25z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
