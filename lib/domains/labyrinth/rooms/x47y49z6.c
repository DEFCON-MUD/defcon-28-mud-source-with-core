inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 49, 6 }));
  set_short( "Corridor - x47y49z6" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y50z6.c",
  "south" : DIR+"/rooms/x47y48z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
