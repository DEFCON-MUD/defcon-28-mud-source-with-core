inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 61, 0 }));
  set_short( "Corridor - x17y61z0" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y62z0.c",
  "south" : DIR+"/rooms/x17y60z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
