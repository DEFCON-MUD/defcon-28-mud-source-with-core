inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 34, 9 }));
  set_short( "Hallway - x41y34z9" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y34z9.c",
  "north" : DIR+"/rooms/x41y35z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
