inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 4, 9 }));
  set_short( "Passage - x44y4z9" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y4z9.c",
  "east" : DIR+"/rooms/x45y4z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
