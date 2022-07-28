inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 54, 9 }));
  set_short( "Corridor - x47y54z9" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y54z9.c",
  "north" : DIR+"/rooms/x47y55z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
