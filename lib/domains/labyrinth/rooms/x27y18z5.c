inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 18, 5 }));
  set_short( "Hallway - x27y18z5" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y18z5.c",
  "south" : DIR+"/rooms/x27y17z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
