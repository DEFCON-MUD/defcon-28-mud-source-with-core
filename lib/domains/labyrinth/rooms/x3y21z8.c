inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 21, 8 }));
  set_short( "Hallway - x3y21z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y22z8.c",
  "south" : DIR+"/rooms/x3y20z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
