inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 62, 6 }));
  set_short( "Passage - x14y62z6" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y62z6.c",
  "east" : DIR+"/rooms/x15y62z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
