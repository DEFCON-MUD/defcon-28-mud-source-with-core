inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 47, 8 }));
  set_short( "Passage - x19y47z8" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y48z8.c",
  "south" : DIR+"/rooms/x19y46z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
