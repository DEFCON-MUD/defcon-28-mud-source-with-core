inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 8, 8 }));
  set_short( "Hallway - x40y8z8" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y8z8.c",
  "east" : DIR+"/rooms/x41y8z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
