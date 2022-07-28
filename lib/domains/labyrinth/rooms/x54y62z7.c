inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 62, 7 }));
  set_short( "Corridor - x54y62z7" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y62z7.c",
  "east" : DIR+"/rooms/x55y62z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
