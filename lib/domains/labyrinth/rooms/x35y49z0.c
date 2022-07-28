inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 49, 0 }));
  set_short( "Hallway - x35y49z0" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y50z0.c",
  "south" : DIR+"/rooms/x35y48z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
