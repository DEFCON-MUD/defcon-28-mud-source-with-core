inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 4 }));
  set_short( "Hallway - x19y58z4" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y58z4.c",
  "east" : DIR+"/rooms/x20y58z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
