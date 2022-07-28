inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 42, 6 }));
  set_short( "Passage - x60y42z6" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y42z6.c",
  "east" : DIR+"/rooms/x61y42z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
