inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 5 }));
  set_short( "Hallway - x5y48z5" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y48z5.c",
  "north" : DIR+"/rooms/x5y49z5.c",
  "south" : DIR+"/rooms/x5y47z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
