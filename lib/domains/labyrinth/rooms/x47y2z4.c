inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 2, 4 }));
  set_short( "Passage - x47y2z4" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y2z4.c",
  "north" : DIR+"/rooms/x47y3z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
