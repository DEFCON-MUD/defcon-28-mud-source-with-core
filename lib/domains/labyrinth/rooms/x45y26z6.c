inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 26, 6 }));
  set_short( "Hallway - x45y26z6" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y26z6.c",
  "south" : DIR+"/rooms/x45y25z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
