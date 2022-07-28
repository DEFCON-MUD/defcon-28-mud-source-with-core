inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 2 }));
  set_short( "Corridor - x53y34z2" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y34z2.c",
  "north" : DIR+"/rooms/x53y35z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
