inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 20, 1 }));
  set_short( "Passage - x11y20z1" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y21z1.c",
  "south" : DIR+"/rooms/x11y19z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
