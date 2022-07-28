inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 61, 9 }));
  set_short( "Corridor - x15y61z9" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y62z9.c",
  "south" : DIR+"/rooms/x15y60z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
