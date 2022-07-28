inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 62, 8 }));
  set_short( "Hallway - x59y62z8" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y62z8.c",
  "east" : DIR+"/rooms/x60y62z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
