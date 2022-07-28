inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 20, 5 }));
  set_short( "Passage - x29y20z5" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y20z5.c",
  "east" : DIR+"/rooms/x30y20z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
