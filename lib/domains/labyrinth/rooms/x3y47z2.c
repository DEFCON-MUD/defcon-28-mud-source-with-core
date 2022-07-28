inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 47, 2 }));
  set_short( "Passage - x3y47z2" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y48z2.c",
  "south" : DIR+"/rooms/x3y46z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
