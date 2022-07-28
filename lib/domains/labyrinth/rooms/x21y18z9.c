inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 18, 9 }));
  set_short( "Passage - x21y18z9" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y18z9.c",
  "north" : DIR+"/rooms/x21y19z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
