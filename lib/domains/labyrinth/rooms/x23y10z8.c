inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 8 }));
  set_short( "Hallway - x23y10z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y10z8.c",
  "south" : DIR+"/rooms/x23y9z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
