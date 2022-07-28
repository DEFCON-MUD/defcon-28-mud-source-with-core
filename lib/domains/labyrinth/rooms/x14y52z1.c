inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 52, 1 }));
  set_short( "Hallway - x14y52z1" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y52z1.c",
  "east" : DIR+"/rooms/x15y52z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
