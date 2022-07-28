inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 51, 1 }));
  set_short( "Passage - x37y51z1" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y52z1.c",
  "south" : DIR+"/rooms/x37y50z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
