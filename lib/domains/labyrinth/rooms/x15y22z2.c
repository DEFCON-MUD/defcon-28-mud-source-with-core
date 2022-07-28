inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 22, 2 }));
  set_short( "Corridor - x15y22z2" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y22z2.c",
  "north" : DIR+"/rooms/x15y23z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
