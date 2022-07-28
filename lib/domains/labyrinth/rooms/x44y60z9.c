inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 60, 9 }));
  set_short( "Passage - x44y60z9" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y60z9.c",
  "east" : DIR+"/rooms/x45y60z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
