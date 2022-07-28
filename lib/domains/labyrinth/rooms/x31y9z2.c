inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 9, 2 }));
  set_short( "Hallway - x31y9z2" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y10z2.c",
  "south" : DIR+"/rooms/x31y8z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
