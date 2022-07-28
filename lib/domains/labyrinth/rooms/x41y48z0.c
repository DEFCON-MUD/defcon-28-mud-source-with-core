inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 0 }));
  set_short( "Hallway - x41y48z0" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y48z0.c",
  "east" : DIR+"/rooms/x42y48z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
