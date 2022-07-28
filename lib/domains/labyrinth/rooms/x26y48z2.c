inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 48, 2 }));
  set_short( "Hallway - x26y48z2" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y48z2.c",
  "east" : DIR+"/rooms/x27y48z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
