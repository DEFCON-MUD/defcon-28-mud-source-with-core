inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 54, 8 }));
  set_short( "Hallway - x42y54z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y54z8.c",
  "east" : DIR+"/rooms/x43y54z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
