inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 38, 6 }));
  set_short( "Corridor - x15y38z6" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y38z6.c",
  "north" : DIR+"/rooms/x15y39z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
