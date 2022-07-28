inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 32, 9 }));
  set_short( "Hallway - x7y32z9" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y32z9.c",
  "east" : DIR+"/rooms/x8y32z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
