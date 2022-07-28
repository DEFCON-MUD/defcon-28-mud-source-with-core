inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 14, 2 }));
  set_short( "Corridor - x54y14z2" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y14z2.c",
  "east" : DIR+"/rooms/x55y14z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
