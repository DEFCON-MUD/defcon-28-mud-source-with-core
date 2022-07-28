inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 5 }));
  set_short( "Hallway - x33y54z5" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y55z5.c",
  "south" : DIR+"/rooms/x33y53z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
