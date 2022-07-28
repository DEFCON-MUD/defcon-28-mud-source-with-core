inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 49, 4 }));
  set_short( "Hallway - x47y49z4" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y50z4.c",
  "south" : DIR+"/rooms/x47y48z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
