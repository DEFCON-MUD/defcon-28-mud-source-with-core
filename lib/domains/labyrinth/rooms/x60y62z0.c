inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 62, 0 }));
  set_short( "Corridor - x60y62z0" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y62z0.c",
  "east" : DIR+"/rooms/x61y62z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
