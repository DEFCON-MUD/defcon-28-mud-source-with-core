inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 16, 8 }));
  set_short( "Corridor - x11y16z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y16z8.c",
  "north" : DIR+"/rooms/x11y17z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
