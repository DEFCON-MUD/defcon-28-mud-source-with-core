inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 60, 2 }));
  set_short( "Hallway - x8y60z2" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y60z2.c",
  "east" : DIR+"/rooms/x9y60z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
