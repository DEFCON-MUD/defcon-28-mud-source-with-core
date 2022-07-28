inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 30, 6 }));
  set_short( "Hallway - x19y30z6" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y30z6.c",
  "south" : DIR+"/rooms/x19y29z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
