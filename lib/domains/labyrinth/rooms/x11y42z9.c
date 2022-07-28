inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 42, 9 }));
  set_short( "Hallway - x11y42z9" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y42z9.c",
  "north" : DIR+"/rooms/x11y43z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
