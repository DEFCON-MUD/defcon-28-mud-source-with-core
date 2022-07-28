inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 22, 8 }));
  set_short( "Hallway - x35y22z8" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y22z8.c",
  "south" : DIR+"/rooms/x35y21z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
