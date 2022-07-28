inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 40, 6 }));
  set_short( "Passage - x43y40z6" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y40z6.c",
  "north" : DIR+"/rooms/x43y41z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
