inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 2, 7 }));
  set_short( "Hallway - x23y2z7" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y2z7.c",
  "east" : DIR+"/rooms/x24y2z7.c",
  "north" : DIR+"/rooms/x23y3z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
