inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 49, 6 }));
  set_short( "Hallway - x5y49z6" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y50z6.c",
  "south" : DIR+"/rooms/x5y48z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
