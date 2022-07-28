inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 36, 5 }));
  set_short( "Hallway - x24y36z5" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y36z5.c",
  "east" : DIR+"/rooms/x25y36z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
