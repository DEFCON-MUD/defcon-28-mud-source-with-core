inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 36, 6 }));
  set_short( "Hallway - x24y36z6" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y36z6.c",
  "east" : DIR+"/rooms/x25y36z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
