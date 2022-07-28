inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 18, 0 }));
  set_short( "Corridor - x55y18z0" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y18z0.c",
  "south" : DIR+"/rooms/x55y17z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
