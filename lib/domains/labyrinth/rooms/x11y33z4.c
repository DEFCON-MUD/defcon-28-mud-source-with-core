inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 33, 4 }));
  set_short( "Passage - x11y33z4" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y34z4.c",
  "south" : DIR+"/rooms/x11y32z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
