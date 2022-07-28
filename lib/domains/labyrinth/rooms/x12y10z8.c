inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 10, 8 }));
  set_short( "Corridor - x12y10z8" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y10z8.c",
  "east" : DIR+"/rooms/x13y10z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
