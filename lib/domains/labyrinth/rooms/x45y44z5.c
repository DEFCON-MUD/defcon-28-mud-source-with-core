inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 5 }));
  set_short( "Corridor - x45y44z5" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y44z5.c",
  "north" : DIR+"/rooms/x45y45z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
