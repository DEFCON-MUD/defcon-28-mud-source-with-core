inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 24, 9 }));
  set_short( "Corridor - x14y24z9" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y24z9.c",
  "east" : DIR+"/rooms/x15y24z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
