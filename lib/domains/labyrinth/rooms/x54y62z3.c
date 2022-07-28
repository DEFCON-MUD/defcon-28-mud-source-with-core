inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 62, 3 }));
  set_short( "Corridor - x54y62z3" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y62z3.c",
  "east" : DIR+"/rooms/x55y62z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
