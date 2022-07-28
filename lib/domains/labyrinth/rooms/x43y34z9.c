inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 34, 9 }));
  set_short( "Passage - x43y34z9" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y34z9.c",
  "south" : DIR+"/rooms/x43y33z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
