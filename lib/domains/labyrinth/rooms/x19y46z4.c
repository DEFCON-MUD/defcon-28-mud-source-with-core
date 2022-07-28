inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 46, 4 }));
  set_short( "Passage - x19y46z4" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y47z4.c",
  "south" : DIR+"/rooms/x19y45z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
