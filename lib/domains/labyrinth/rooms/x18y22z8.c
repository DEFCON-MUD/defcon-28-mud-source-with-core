inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 22, 8 }));
  set_short( "Passage - x18y22z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y22z8.c",
  "east" : DIR+"/rooms/x19y22z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
